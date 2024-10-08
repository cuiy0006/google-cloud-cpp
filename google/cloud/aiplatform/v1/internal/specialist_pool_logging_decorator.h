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
// source: google/cloud/aiplatform/v1/specialist_pool_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_SPECIALIST_POOL_LOGGING_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_SPECIALIST_POOL_LOGGING_DECORATOR_H

#include "google/cloud/aiplatform/v1/internal/specialist_pool_stub.h"
#include "google/cloud/tracing_options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <set>
#include <string>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class SpecialistPoolServiceLogging : public SpecialistPoolServiceStub {
 public:
  ~SpecialistPoolServiceLogging() override = default;
  SpecialistPoolServiceLogging(std::shared_ptr<SpecialistPoolServiceStub> child,
                               TracingOptions tracing_options,
                               std::set<std::string> const& components);

  future<StatusOr<google::longrunning::Operation>> AsyncCreateSpecialistPool(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::CreateSpecialistPoolRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateSpecialistPool(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::CreateSpecialistPoolRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::SpecialistPool> GetSpecialistPool(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::GetSpecialistPoolRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ListSpecialistPoolsResponse>
  ListSpecialistPools(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::ListSpecialistPoolsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteSpecialistPool(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::DeleteSpecialistPoolRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteSpecialistPool(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::DeleteSpecialistPoolRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateSpecialistPool(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::UpdateSpecialistPoolRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateSpecialistPool(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::UpdateSpecialistPoolRequest const& request)
      override;

  StatusOr<google::cloud::location::ListLocationsResponse> ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

  StatusOr<google::longrunning::Operation> WaitOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::WaitOperationRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<SpecialistPoolServiceStub> child_;
  TracingOptions tracing_options_;
};  // SpecialistPoolServiceLogging

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_SPECIALIST_POOL_LOGGING_DECORATOR_H
