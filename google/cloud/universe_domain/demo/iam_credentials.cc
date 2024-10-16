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

//! [all]
#include "google/cloud/iam/credentials/v1/iam_credentials_client.h"

#include "google/cloud/universe_domain.h"
#include "google/cloud/universe_domain_options.h"
#include <fstream>
#include <iostream>

void GenerateAccessToken(std::vector<std::string> const& argv) {
  //! [START iamcredentials_generate_access_token]
  //! [iamcredentials-generate-access-token]
  namespace iam = ::google::cloud::iam_credentials_v1;
  namespace gc = ::google::cloud;
  [&argv](std::string const& name, std::string const& lifetime_seconds,
     std::vector<std::string> const& scope) {
    std::cout << "****************"<< std::endl;
    std::cout << argv[1] << std::endl;
    std::cout << argv[2] << std::endl;
    std::cout << argv[3] << std::endl;
    std::cout << argv[4] << std::endl;
    std::cout << "****************"<< std::endl;

    gc::Options options;
    auto is = std::ifstream(argv[3]);
    is.exceptions(std::ios::badbit);
    auto contents = std::string(std::istreambuf_iterator<char>(is.rdbuf()), {});
    options.set<google::cloud::UnifiedCredentialsOption>(
        google::cloud::MakeServiceAccountCredentials(contents));
    auto ud_options = gc::AddUniverseDomainOption(gc::ExperimentalTag{}, options);
    if (!ud_options.ok()) throw std::move(ud_options).status();

    iam::IAMCredentialsClient client(iam::MakeIAMCredentialsConnection(*ud_options));
    google::protobuf::Duration lifetime;
    lifetime.set_seconds(std::stoi(lifetime_seconds));
    auto response = client.GenerateAccessToken(name, {}, scope, lifetime);
    if (!response) throw std::move(response).status();
    std::cout << "Access Token successfully created: "
              << response->DebugString() << "\n";
  }
  //! [END iamcredentials_generate_access_token]
  //! [iamcredentials-generate-access-token]
  (argv.at(1), argv.at(2), {argv.begin() + 4, argv.end()});
}

int main(int argc, char* argv[]) try {
  std::vector<std::string> args;

  for (int i = 0; i < argc; ++i) {
    args.push_back(std::string(argv[i])); 
  }

  GenerateAccessToken(args);

  return 0;
} catch (google::cloud::Status const& status) {
  std::cerr << "google::cloud::Status thrown: " << status << "\n";
  return 1;
}
//! [all]
