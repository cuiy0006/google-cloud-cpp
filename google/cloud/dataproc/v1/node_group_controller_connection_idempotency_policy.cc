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
// source: google/cloud/dataproc/v1/node_groups.proto

#include "google/cloud/dataproc/v1/node_group_controller_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace dataproc_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

NodeGroupControllerConnectionIdempotencyPolicy::
    ~NodeGroupControllerConnectionIdempotencyPolicy() = default;

std::unique_ptr<NodeGroupControllerConnectionIdempotencyPolicy>
NodeGroupControllerConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<NodeGroupControllerConnectionIdempotencyPolicy>(
      *this);
}

Idempotency NodeGroupControllerConnectionIdempotencyPolicy::CreateNodeGroup(
    google::cloud::dataproc::v1::CreateNodeGroupRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NodeGroupControllerConnectionIdempotencyPolicy::ResizeNodeGroup(
    google::cloud::dataproc::v1::ResizeNodeGroupRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NodeGroupControllerConnectionIdempotencyPolicy::GetNodeGroup(
    google::cloud::dataproc::v1::GetNodeGroupRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NodeGroupControllerConnectionIdempotencyPolicy::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  return request.policy().etag().empty() ? Idempotency::kNonIdempotent
                                         : Idempotency::kIdempotent;
}

Idempotency NodeGroupControllerConnectionIdempotencyPolicy::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NodeGroupControllerConnectionIdempotencyPolicy::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NodeGroupControllerConnectionIdempotencyPolicy::ListOperations(
    google::longrunning::ListOperationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency NodeGroupControllerConnectionIdempotencyPolicy::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NodeGroupControllerConnectionIdempotencyPolicy::DeleteOperation(
    google::longrunning::DeleteOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NodeGroupControllerConnectionIdempotencyPolicy::CancelOperation(
    google::longrunning::CancelOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<NodeGroupControllerConnectionIdempotencyPolicy>
MakeDefaultNodeGroupControllerConnectionIdempotencyPolicy() {
  return std::make_unique<NodeGroupControllerConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1
}  // namespace cloud
}  // namespace google
