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
// source: google/cloud/confidentialcomputing/v1/service.proto

#include "google/cloud/confidentialcomputing/v1/confidential_computing_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace confidentialcomputing_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

ConfidentialComputingConnectionIdempotencyPolicy::
    ~ConfidentialComputingConnectionIdempotencyPolicy() = default;

std::unique_ptr<ConfidentialComputingConnectionIdempotencyPolicy>
ConfidentialComputingConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<ConfidentialComputingConnectionIdempotencyPolicy>(
      *this);
}

Idempotency ConfidentialComputingConnectionIdempotencyPolicy::CreateChallenge(
    google::cloud::confidentialcomputing::v1::CreateChallengeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConfidentialComputingConnectionIdempotencyPolicy::VerifyAttestation(
    google::cloud::confidentialcomputing::v1::VerifyAttestationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConfidentialComputingConnectionIdempotencyPolicy::ListLocations(
    google::cloud::location::ListLocationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ConfidentialComputingConnectionIdempotencyPolicy::GetLocation(
    google::cloud::location::GetLocationRequest const&) {
  return Idempotency::kIdempotent;
}

std::unique_ptr<ConfidentialComputingConnectionIdempotencyPolicy>
MakeDefaultConfidentialComputingConnectionIdempotencyPolicy() {
  return std::make_unique<ConfidentialComputingConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace confidentialcomputing_v1
}  // namespace cloud
}  // namespace google
