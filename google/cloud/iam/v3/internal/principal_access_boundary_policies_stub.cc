// Copyright 2025 Google LLC
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
// source: google/iam/v3/principal_access_boundary_policies_service.proto

#include "google/cloud/iam/v3/internal/principal_access_boundary_policies_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/iam/v3/principal_access_boundary_policies_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace iam_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

PrincipalAccessBoundaryPoliciesStub::~PrincipalAccessBoundaryPoliciesStub() =
    default;

future<StatusOr<google::longrunning::Operation>>
DefaultPrincipalAccessBoundaryPoliciesStub::
    AsyncCreatePrincipalAccessBoundaryPolicy(
        google::cloud::CompletionQueue& cq,
        std::shared_ptr<grpc::ClientContext> context,
        google::cloud::internal::ImmutableOptions,
        google::iam::v3::CreatePrincipalAccessBoundaryPolicyRequest const&
            request) {
  return internal::MakeUnaryRpcImpl<
      google::iam::v3::CreatePrincipalAccessBoundaryPolicyRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::iam::v3::CreatePrincipalAccessBoundaryPolicyRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreatePrincipalAccessBoundaryPolicy(
            context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultPrincipalAccessBoundaryPoliciesStub::CreatePrincipalAccessBoundaryPolicy(
    grpc::ClientContext& context, Options,
    google::iam::v3::CreatePrincipalAccessBoundaryPolicyRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreatePrincipalAccessBoundaryPolicy(
      &context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v3::PrincipalAccessBoundaryPolicy>
DefaultPrincipalAccessBoundaryPoliciesStub::GetPrincipalAccessBoundaryPolicy(
    grpc::ClientContext& context, Options const&,
    google::iam::v3::GetPrincipalAccessBoundaryPolicyRequest const& request) {
  google::iam::v3::PrincipalAccessBoundaryPolicy response;
  auto status = grpc_stub_->GetPrincipalAccessBoundaryPolicy(&context, request,
                                                             &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultPrincipalAccessBoundaryPoliciesStub::
    AsyncUpdatePrincipalAccessBoundaryPolicy(
        google::cloud::CompletionQueue& cq,
        std::shared_ptr<grpc::ClientContext> context,
        google::cloud::internal::ImmutableOptions,
        google::iam::v3::UpdatePrincipalAccessBoundaryPolicyRequest const&
            request) {
  return internal::MakeUnaryRpcImpl<
      google::iam::v3::UpdatePrincipalAccessBoundaryPolicyRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::iam::v3::UpdatePrincipalAccessBoundaryPolicyRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdatePrincipalAccessBoundaryPolicy(
            context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultPrincipalAccessBoundaryPoliciesStub::UpdatePrincipalAccessBoundaryPolicy(
    grpc::ClientContext& context, Options,
    google::iam::v3::UpdatePrincipalAccessBoundaryPolicyRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdatePrincipalAccessBoundaryPolicy(
      &context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultPrincipalAccessBoundaryPoliciesStub::
    AsyncDeletePrincipalAccessBoundaryPolicy(
        google::cloud::CompletionQueue& cq,
        std::shared_ptr<grpc::ClientContext> context,
        google::cloud::internal::ImmutableOptions,
        google::iam::v3::DeletePrincipalAccessBoundaryPolicyRequest const&
            request) {
  return internal::MakeUnaryRpcImpl<
      google::iam::v3::DeletePrincipalAccessBoundaryPolicyRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::iam::v3::DeletePrincipalAccessBoundaryPolicyRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeletePrincipalAccessBoundaryPolicy(
            context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultPrincipalAccessBoundaryPoliciesStub::DeletePrincipalAccessBoundaryPolicy(
    grpc::ClientContext& context, Options,
    google::iam::v3::DeletePrincipalAccessBoundaryPolicyRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeletePrincipalAccessBoundaryPolicy(
      &context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v3::ListPrincipalAccessBoundaryPoliciesResponse>
DefaultPrincipalAccessBoundaryPoliciesStub::ListPrincipalAccessBoundaryPolicies(
    grpc::ClientContext& context, Options const&,
    google::iam::v3::ListPrincipalAccessBoundaryPoliciesRequest const&
        request) {
  google::iam::v3::ListPrincipalAccessBoundaryPoliciesResponse response;
  auto status = grpc_stub_->ListPrincipalAccessBoundaryPolicies(
      &context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v3::SearchPrincipalAccessBoundaryPolicyBindingsResponse>
DefaultPrincipalAccessBoundaryPoliciesStub::
    SearchPrincipalAccessBoundaryPolicyBindings(
        grpc::ClientContext& context, Options const&,
        google::iam::v3::
            SearchPrincipalAccessBoundaryPolicyBindingsRequest const& request) {
  google::iam::v3::SearchPrincipalAccessBoundaryPolicyBindingsResponse response;
  auto status = grpc_stub_->SearchPrincipalAccessBoundaryPolicyBindings(
      &context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::Operation>
DefaultPrincipalAccessBoundaryPoliciesStub::GetOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->GetOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultPrincipalAccessBoundaryPoliciesStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_stub_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultPrincipalAccessBoundaryPoliciesStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_stub_->AsyncCancelOperation(context, request,
                                                             cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iam_v3_internal
}  // namespace cloud
}  // namespace google
