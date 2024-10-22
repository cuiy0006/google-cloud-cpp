// Copyright 2021 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/internal/oauth2_impersonate_service_account_credentials.h"
#include "google/cloud/internal/oauth2_credential_constants.h"
#include "google/cloud/internal/unified_rest_credentials.h"

namespace google {
namespace cloud {
namespace oauth2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

GenerateAccessTokenRequest MakeRequest(
    google::cloud::internal::ImpersonateServiceAccountConfig const& config) {
  return GenerateAccessTokenRequest{
      /*.service_account=*/config.target_service_account(),
      /*.lifetime=*/config.lifetime(),
      /*.scopes=*/config.scopes(),
      /*.delegates=*/config.delegates(),
  };
}

}  // namespace

StatusOr<google::cloud::internal::ImpersonateServiceAccountConfig> MakeImpersonateServiceAccountConfig(
    std::string const& content, Options options, internal::ErrorContext const& ec) {
  auto json = nlohmann::json::parse(content, nullptr, false);
  if (!json.is_object()) {
    return InvalidArgumentError(
        "impersonate service account configuration was not a JSON object",
        GCP_ERROR_INFO().WithContext(ec));
  }
  auto type = ValidateStringField(json, "type", "credentials-file", ec);
  if (!type) return std::move(type).status();
  if (*type != "impersonated_service_account") {
    return InvalidArgumentError(
        "mismatched type (" + *type + ") in external account configuration",
        GCP_ERROR_INFO().WithContext(ec));
  }

  auto service_account_impersonation_url = ValidateStringField(json, "service_account_impersonation_url", "credentials-file", ec);
  if (!service_account_impersonation_url) return std::move(service_account_impersonation_url).status();
  
  std::vector<std::string> v = absl::StrSplit(*service_account_impersonation_url, "/serviceAccounts/");
  if (v.size() != 2) {
    return InvalidArgumentError(
        absl::StrCat("malformed service_account_impersonation_url: ", *service_account_impersonation_url),
        GCP_ERROR_INFO().WithContext(ec));
  }
  v = absl::StrSplit(v[1], ':');
  if (v.size() != 2) {
    return InvalidArgumentError(
        absl::StrCat("malformed service_account_impersonation_url: ", *service_account_impersonation_url),
        GCP_ERROR_INFO().WithContext(ec));
  }
  auto target_service_account = v[0];

  auto delegates = json.find("delegates");
  if (delegates != json.end()) {
    if (!delegates->is_array()) {
      return InvalidArgumentError(
          "delegates must be an array", GCP_ERROR_INFO().WithContext(ec));
    }
    options.set<DelegatesOption>(delegates->get<std::vector<std::string>>());
  }

  auto source_credentials = json.find("source_credentials");
  if (source_credentials == json.end()) {
    return InvalidArgumentError(
        "missing `source_credentials` field in impersonation service account configuration",
        GCP_ERROR_INFO().WithContext(ec));
  }

  if (!source_credentials->is_object()) {
    return InvalidArgumentError(
        "`source_credentials` field is not a JSON object in impersonation service account configuration",
        GCP_ERROR_INFO().WithContext(ec));
  }
  auto const source_credentials_contents = source_credentials->dump();
  // save source_credentials_contents to a tmp file
  (void)setenv("GOOGLE_APPLICATION_CREDENTIALS", "/tmp/base_credentials.json", 1);

  std::ofstream myfile;
  myfile.open ("/tmp/base_credentials.json");
  myfile << source_credentials_contents;
  myfile.close();

  auto const cred_type = ValidateStringField(*source_credentials, "type", "credentials-file", ec);
  if (!type) return std::move(type).status();

  if ((*cred_type != "authorized_user" && *cred_type != "external_account" && *cred_type != "service_account")) {
    return internal::InvalidArgumentError(
        "Unsupported credential type : " + *cred_type,
        GCP_ERROR_INFO().WithContext(ec));
  }

  return google::cloud::internal::ImpersonateServiceAccountConfig(
    MakeGoogleDefaultCredentials(options), target_service_account, options, *service_account_impersonation_url);
}

ImpersonateServiceAccountCredentials::ImpersonateServiceAccountCredentials(
    google::cloud::internal::ImpersonateServiceAccountConfig const& config,
    HttpClientFactory client_factory)
    : ImpersonateServiceAccountCredentials(
          config, MakeMinimalIamCredentialsRestStub(
                      rest_internal::MapCredentials(*config.base_credentials()),
                      config.options(), std::move(client_factory), config.service_account_impersonation_url())) {}

ImpersonateServiceAccountCredentials::ImpersonateServiceAccountCredentials(
    google::cloud::internal::ImpersonateServiceAccountConfig const& config,
    std::shared_ptr<MinimalIamCredentialsRest> stub)
    : stub_(std::move(stub)), request_(MakeRequest(config)) {}

StatusOr<AccessToken> ImpersonateServiceAccountCredentials::GetToken(
    std::chrono::system_clock::time_point /*tp*/) {
  return stub_->GenerateAccessToken(request_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace oauth2_internal
}  // namespace cloud
}  // namespace google
