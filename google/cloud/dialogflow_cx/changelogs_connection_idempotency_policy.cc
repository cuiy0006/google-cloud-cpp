// Copyright 2022 Google LLC
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
// source: google/cloud/dialogflow/cx/v3/changelog.proto

#include "google/cloud/dialogflow_cx/changelogs_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

ChangelogsConnectionIdempotencyPolicy::
    ~ChangelogsConnectionIdempotencyPolicy() = default;

std::unique_ptr<ChangelogsConnectionIdempotencyPolicy>
ChangelogsConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<ChangelogsConnectionIdempotencyPolicy>(*this);
}

Idempotency ChangelogsConnectionIdempotencyPolicy::ListChangelogs(
    google::cloud::dialogflow::cx::v3::ListChangelogsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ChangelogsConnectionIdempotencyPolicy::GetChangelog(
    google::cloud::dialogflow::cx::v3::GetChangelogRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ChangelogsConnectionIdempotencyPolicy::ListLocations(
    google::cloud::location::ListLocationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ChangelogsConnectionIdempotencyPolicy::GetLocation(
    google::cloud::location::GetLocationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ChangelogsConnectionIdempotencyPolicy::ListOperations(
    google::longrunning::ListOperationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ChangelogsConnectionIdempotencyPolicy::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ChangelogsConnectionIdempotencyPolicy::CancelOperation(
    google::longrunning::CancelOperationRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<ChangelogsConnectionIdempotencyPolicy>
MakeDefaultChangelogsConnectionIdempotencyPolicy() {
  return std::make_unique<ChangelogsConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google
