// Copyright 2024 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/kms/v1/autokey.proto

#include "google/cloud/kms/v1/autokey_connection.h"
#include "google/cloud/kms/v1/autokey_options.h"
#include "google/cloud/kms/v1/internal/autokey_connection_impl.h"
#include "google/cloud/kms/v1/internal/autokey_option_defaults.h"
#include "google/cloud/kms/v1/internal/autokey_stub_factory.h"
#include "google/cloud/kms/v1/internal/autokey_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace kms_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AutokeyConnection::~AutokeyConnection() = default;

future<StatusOr<google::cloud::kms::v1::KeyHandle>>
AutokeyConnection::CreateKeyHandle(
    google::cloud::kms::v1::CreateKeyHandleRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::kms::v1::KeyHandle>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> AutokeyConnection::CreateKeyHandle(
    NoAwaitTag, google::cloud::kms::v1::CreateKeyHandleRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::kms::v1::KeyHandle>>
AutokeyConnection::CreateKeyHandle(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::kms::v1::KeyHandle>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::kms::v1::KeyHandle> AutokeyConnection::GetKeyHandle(
    google::cloud::kms::v1::GetKeyHandleRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::kms::v1::KeyHandle>
AutokeyConnection::ListKeyHandles(
    google::cloud::kms::v1::
        ListKeyHandlesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::kms::v1::KeyHandle>>();
}

StreamRange<google::cloud::location::Location> AutokeyConnection::ListLocations(
    google::cloud::location::
        ListLocationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::location::Location>>();
}

StatusOr<google::cloud::location::Location> AutokeyConnection::GetLocation(
    google::cloud::location::GetLocationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy> AutokeyConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy> AutokeyConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
AutokeyConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::longrunning::Operation> AutokeyConnection::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<AutokeyConnection> MakeAutokeyConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 AutokeyPolicyOptionList>(options, __func__);
  options = kms_v1_internal::AutokeyDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub =
      kms_v1_internal::CreateDefaultAutokeyStub(std::move(auth), options);
  return kms_v1_internal::MakeAutokeyTracingConnection(
      std::make_shared<kms_v1_internal::AutokeyConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace kms_v1
}  // namespace cloud
}  // namespace google
