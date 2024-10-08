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
// source: google/cloud/servicehealth/v1/event_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEHEALTH_V1_SERVICE_HEALTH_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEHEALTH_V1_SERVICE_HEALTH_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/version.h"
#include <google/cloud/location/locations.grpc.pb.h>
#include <google/cloud/servicehealth/v1/event_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace servicehealth_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class ServiceHealthConnectionIdempotencyPolicy {
 public:
  virtual ~ServiceHealthConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<ServiceHealthConnectionIdempotencyPolicy> clone()
      const;

  virtual google::cloud::Idempotency ListEvents(
      google::cloud::servicehealth::v1::ListEventsRequest request);

  virtual google::cloud::Idempotency GetEvent(
      google::cloud::servicehealth::v1::GetEventRequest const& request);

  virtual google::cloud::Idempotency ListOrganizationEvents(
      google::cloud::servicehealth::v1::ListOrganizationEventsRequest request);

  virtual google::cloud::Idempotency GetOrganizationEvent(
      google::cloud::servicehealth::v1::GetOrganizationEventRequest const&
          request);

  virtual google::cloud::Idempotency ListOrganizationImpacts(
      google::cloud::servicehealth::v1::ListOrganizationImpactsRequest request);

  virtual google::cloud::Idempotency GetOrganizationImpact(
      google::cloud::servicehealth::v1::GetOrganizationImpactRequest const&
          request);

  virtual google::cloud::Idempotency ListLocations(
      google::cloud::location::ListLocationsRequest request);

  virtual google::cloud::Idempotency GetLocation(
      google::cloud::location::GetLocationRequest const& request);
};

std::unique_ptr<ServiceHealthConnectionIdempotencyPolicy>
MakeDefaultServiceHealthConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicehealth_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEHEALTH_V1_SERVICE_HEALTH_CONNECTION_IDEMPOTENCY_POLICY_H
