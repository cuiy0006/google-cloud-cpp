// Copyright 2020 Google LLC
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

#ifndef GOOGLE_CLOUD_CPP_GENERATOR_INTERNAL_MIXIN_UTILS_H
#define GOOGLE_CLOUD_CPP_GENERATOR_INTERNAL_MIXIN_UTILS_H

#include <string>
#include <vector>
#include "absl/types/optional.h"
#include <yaml-cpp/yaml.h>
#include <google/protobuf/compiler/code_generator.h>


namespace google {
namespace cloud {
namespace generator_internal {

struct MixinMethodOverride {
    std::string http_verb;
    std::string http_path;
    absl::optional<std::string> http_body;
};

struct MixinMethod {
    std::reference_wrapper<google::protobuf::MethodDescriptor const> method;
    MixinMethodOverride method_override;
};

std::vector<std::string> GetMixinProtoPaths(YAML::Node const& service_config);

std::vector<std::string> GetMixinProtoPaths(std::string& service_yaml_path);

std::vector<MixinMethod> GetMixinMethods(
    YAML::Node const& service_config, google::protobuf::ServiceDescriptor const& service);

}  // namespace generator_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GENERATOR_INTERNAL_MIXIN_UTILS_H