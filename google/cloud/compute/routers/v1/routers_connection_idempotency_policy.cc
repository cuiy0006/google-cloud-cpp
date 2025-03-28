// Copyright 2023 Google LLC
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
// source: google/cloud/compute/routers/v1/routers.proto

#include "google/cloud/compute/routers/v1/routers_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace compute_routers_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

RoutersConnectionIdempotencyPolicy::~RoutersConnectionIdempotencyPolicy() =
    default;

std::unique_ptr<RoutersConnectionIdempotencyPolicy>
RoutersConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<RoutersConnectionIdempotencyPolicy>(*this);
}

Idempotency RoutersConnectionIdempotencyPolicy::AggregatedListRouters(
    google::cloud::cpp::compute::routers::v1::
        AggregatedListRoutersRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency RoutersConnectionIdempotencyPolicy::DeleteRouter(
    google::cloud::cpp::compute::routers::v1::DeleteRouterRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RoutersConnectionIdempotencyPolicy::DeleteRoutePolicy(
    google::cloud::cpp::compute::routers::v1::DeleteRoutePolicyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RoutersConnectionIdempotencyPolicy::GetRouter(
    google::cloud::cpp::compute::routers::v1::GetRouterRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency RoutersConnectionIdempotencyPolicy::GetNatIpInfo(
    google::cloud::cpp::compute::routers::v1::GetNatIpInfoRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency RoutersConnectionIdempotencyPolicy::GetNatMappingInfo(
    google::cloud::cpp::compute::routers::v1::GetNatMappingInfoRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency RoutersConnectionIdempotencyPolicy::GetRoutePolicy(
    google::cloud::cpp::compute::routers::v1::GetRoutePolicyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency RoutersConnectionIdempotencyPolicy::GetRouterStatus(
    google::cloud::cpp::compute::routers::v1::GetRouterStatusRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency RoutersConnectionIdempotencyPolicy::InsertRouter(
    google::cloud::cpp::compute::routers::v1::InsertRouterRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RoutersConnectionIdempotencyPolicy::ListRouters(
    google::cloud::cpp::compute::routers::v1::ListRoutersRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency RoutersConnectionIdempotencyPolicy::ListBgpRoutes(
    google::cloud::cpp::compute::routers::v1::ListBgpRoutesRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency RoutersConnectionIdempotencyPolicy::ListRoutePolicies(
    google::cloud::cpp::compute::routers::v1::ListRoutePoliciesRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency RoutersConnectionIdempotencyPolicy::PatchRouter(
    google::cloud::cpp::compute::routers::v1::PatchRouterRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RoutersConnectionIdempotencyPolicy::PatchRoutePolicy(
    google::cloud::cpp::compute::routers::v1::PatchRoutePolicyRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RoutersConnectionIdempotencyPolicy::Preview(
    google::cloud::cpp::compute::routers::v1::PreviewRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency RoutersConnectionIdempotencyPolicy::UpdateRouter(
    google::cloud::cpp::compute::routers::v1::UpdateRouterRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency RoutersConnectionIdempotencyPolicy::UpdateRoutePolicy(
    google::cloud::cpp::compute::routers::v1::UpdateRoutePolicyRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<RoutersConnectionIdempotencyPolicy>
MakeDefaultRoutersConnectionIdempotencyPolicy() {
  return std::make_unique<RoutersConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_routers_v1
}  // namespace cloud
}  // namespace google
