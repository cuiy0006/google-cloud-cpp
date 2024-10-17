// Copyright 2024 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/compute/disks/v1/disks_client.h"
#include "google/cloud/compute/disks/v1/disks_options.h"
#include "google/cloud/internal/getenv.h"
#include "google/cloud/internal/rest_options.h"
#include "google/cloud/universe_domain.h"
#include "google/cloud/universe_domain_options.h"
#include <iostream>
#include <fstream>

namespace {

// This is necessary to access alternate compute API.
void AddTargetApiVersionFromEnvVar(google::cloud::Options& options) {
  auto compute_api = google::cloud::internal::GetEnv("COMPUTE_TARGET_API");
  if (compute_api) {
    options.set<google::cloud::rest_internal::TargetApiVersionOption>(
        *compute_api);
  }
}

}  // namespace

int main(int argc, char* argv[]) try {
  if (argc != 4) {
    std::cerr << "Usage: " << argv[0] << " project-id zone-id\n";
    return 1;
  }
  std::string const project_id = argv[1];
  std::string const zone_id = argv[2];

  namespace gc = ::google::cloud;
  namespace disks = ::google::cloud::compute_disks_v1;


  gc::Options options;
  auto is = std::ifstream(argv[3]);
  is.exceptions(std::ios::badbit);
  auto contents = std::string(std::istreambuf_iterator<char>(is.rdbuf()), {});
  options.set<google::cloud::UnifiedCredentialsOption>(
    google::cloud::MakeImpersonateServiceAccountCredentials(
          google::cloud::MakeServiceAccountCredentials(contents), "libraries-to-impersonate-sa@bootstrap-libraries.tpczero-system.iam.gserviceaccount.com"));

  auto ud_options = gc::AddUniverseDomainOption(gc::ExperimentalTag{}, options);
  if (!ud_options.ok()) throw std::move(ud_options).status();

  // set env var COMPUTE_TARGET_API to select api other than "v1".
  AddTargetApiVersionFromEnvVar(*ud_options);
  auto client = disks::DisksClient(disks::MakeDisksConnectionRest(*ud_options));

  std::cout << "compute.ListDisks:\n";
  for (auto disk : client.ListDisks(project_id, zone_id)) {
    if (!disk) throw std::move(disk).status();
    std::cout << disk->DebugString() << "\n";
  }

  return 0;
} catch (google::cloud::Status const& status) {
  std::cerr << "google::cloud::Status thrown: " << status << "\n";
  return 1;
}
