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
// source: google/identity/accesscontextmanager/v1/access_context_manager.proto

#include "google/cloud/accesscontextmanager/v1/internal/access_context_manager_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/identity/accesscontextmanager/v1/access_context_manager.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace accesscontextmanager_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

AccessContextManagerStub::~AccessContextManagerStub() = default;

StatusOr<google::identity::accesscontextmanager::v1::ListAccessPoliciesResponse>
DefaultAccessContextManagerStub::ListAccessPolicies(
    grpc::ClientContext& context, Options const&,
    google::identity::accesscontextmanager::v1::ListAccessPoliciesRequest const&
        request) {
  google::identity::accesscontextmanager::v1::ListAccessPoliciesResponse
      response;
  auto status = grpc_stub_->ListAccessPolicies(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::identity::accesscontextmanager::v1::AccessPolicy>
DefaultAccessContextManagerStub::GetAccessPolicy(
    grpc::ClientContext& context, Options const&,
    google::identity::accesscontextmanager::v1::GetAccessPolicyRequest const&
        request) {
  google::identity::accesscontextmanager::v1::AccessPolicy response;
  auto status = grpc_stub_->GetAccessPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAccessContextManagerStub::AsyncCreateAccessPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::identity::accesscontextmanager::v1::AccessPolicy const& request) {
  return internal::MakeUnaryRpcImpl<
      google::identity::accesscontextmanager::v1::AccessPolicy,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::identity::accesscontextmanager::v1::AccessPolicy const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateAccessPolicy(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultAccessContextManagerStub::CreateAccessPolicy(
    grpc::ClientContext& context, Options,
    google::identity::accesscontextmanager::v1::AccessPolicy const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateAccessPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAccessContextManagerStub::AsyncUpdateAccessPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::identity::accesscontextmanager::v1::UpdateAccessPolicyRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::identity::accesscontextmanager::v1::UpdateAccessPolicyRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::identity::accesscontextmanager::v1::
                 UpdateAccessPolicyRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateAccessPolicy(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultAccessContextManagerStub::UpdateAccessPolicy(
    grpc::ClientContext& context, Options,
    google::identity::accesscontextmanager::v1::UpdateAccessPolicyRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateAccessPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAccessContextManagerStub::AsyncDeleteAccessPolicy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::identity::accesscontextmanager::v1::DeleteAccessPolicyRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::identity::accesscontextmanager::v1::DeleteAccessPolicyRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::identity::accesscontextmanager::v1::
                 DeleteAccessPolicyRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteAccessPolicy(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultAccessContextManagerStub::DeleteAccessPolicy(
    grpc::ClientContext& context, Options,
    google::identity::accesscontextmanager::v1::DeleteAccessPolicyRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteAccessPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::identity::accesscontextmanager::v1::ListAccessLevelsResponse>
DefaultAccessContextManagerStub::ListAccessLevels(
    grpc::ClientContext& context, Options const&,
    google::identity::accesscontextmanager::v1::ListAccessLevelsRequest const&
        request) {
  google::identity::accesscontextmanager::v1::ListAccessLevelsResponse response;
  auto status = grpc_stub_->ListAccessLevels(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::identity::accesscontextmanager::v1::AccessLevel>
DefaultAccessContextManagerStub::GetAccessLevel(
    grpc::ClientContext& context, Options const&,
    google::identity::accesscontextmanager::v1::GetAccessLevelRequest const&
        request) {
  google::identity::accesscontextmanager::v1::AccessLevel response;
  auto status = grpc_stub_->GetAccessLevel(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAccessContextManagerStub::AsyncCreateAccessLevel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::identity::accesscontextmanager::v1::CreateAccessLevelRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::identity::accesscontextmanager::v1::CreateAccessLevelRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::identity::accesscontextmanager::v1::
                 CreateAccessLevelRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateAccessLevel(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultAccessContextManagerStub::CreateAccessLevel(
    grpc::ClientContext& context, Options,
    google::identity::accesscontextmanager::v1::CreateAccessLevelRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateAccessLevel(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAccessContextManagerStub::AsyncUpdateAccessLevel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::identity::accesscontextmanager::v1::UpdateAccessLevelRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::identity::accesscontextmanager::v1::UpdateAccessLevelRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::identity::accesscontextmanager::v1::
                 UpdateAccessLevelRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateAccessLevel(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultAccessContextManagerStub::UpdateAccessLevel(
    grpc::ClientContext& context, Options,
    google::identity::accesscontextmanager::v1::UpdateAccessLevelRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateAccessLevel(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAccessContextManagerStub::AsyncDeleteAccessLevel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::identity::accesscontextmanager::v1::DeleteAccessLevelRequest const&
        request) {
  return internal::MakeUnaryRpcImpl<
      google::identity::accesscontextmanager::v1::DeleteAccessLevelRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::identity::accesscontextmanager::v1::
                 DeleteAccessLevelRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteAccessLevel(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultAccessContextManagerStub::DeleteAccessLevel(
    grpc::ClientContext& context, Options,
    google::identity::accesscontextmanager::v1::DeleteAccessLevelRequest const&
        request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteAccessLevel(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAccessContextManagerStub::AsyncReplaceAccessLevels(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::identity::accesscontextmanager::v1::
        ReplaceAccessLevelsRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::identity::accesscontextmanager::v1::ReplaceAccessLevelsRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::identity::accesscontextmanager::v1::
                 ReplaceAccessLevelsRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncReplaceAccessLevels(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultAccessContextManagerStub::ReplaceAccessLevels(
    grpc::ClientContext& context, Options,
    google::identity::accesscontextmanager::v1::
        ReplaceAccessLevelsRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->ReplaceAccessLevels(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<
    google::identity::accesscontextmanager::v1::ListServicePerimetersResponse>
DefaultAccessContextManagerStub::ListServicePerimeters(
    grpc::ClientContext& context, Options const&,
    google::identity::accesscontextmanager::v1::
        ListServicePerimetersRequest const& request) {
  google::identity::accesscontextmanager::v1::ListServicePerimetersResponse
      response;
  auto status = grpc_stub_->ListServicePerimeters(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::identity::accesscontextmanager::v1::ServicePerimeter>
DefaultAccessContextManagerStub::GetServicePerimeter(
    grpc::ClientContext& context, Options const&,
    google::identity::accesscontextmanager::v1::
        GetServicePerimeterRequest const& request) {
  google::identity::accesscontextmanager::v1::ServicePerimeter response;
  auto status = grpc_stub_->GetServicePerimeter(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAccessContextManagerStub::AsyncCreateServicePerimeter(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::identity::accesscontextmanager::v1::
        CreateServicePerimeterRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::identity::accesscontextmanager::v1::CreateServicePerimeterRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::identity::accesscontextmanager::v1::
                 CreateServicePerimeterRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateServicePerimeter(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultAccessContextManagerStub::CreateServicePerimeter(
    grpc::ClientContext& context, Options,
    google::identity::accesscontextmanager::v1::
        CreateServicePerimeterRequest const& request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->CreateServicePerimeter(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAccessContextManagerStub::AsyncUpdateServicePerimeter(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::identity::accesscontextmanager::v1::
        UpdateServicePerimeterRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::identity::accesscontextmanager::v1::UpdateServicePerimeterRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::identity::accesscontextmanager::v1::
                 UpdateServicePerimeterRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateServicePerimeter(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultAccessContextManagerStub::UpdateServicePerimeter(
    grpc::ClientContext& context, Options,
    google::identity::accesscontextmanager::v1::
        UpdateServicePerimeterRequest const& request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->UpdateServicePerimeter(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAccessContextManagerStub::AsyncDeleteServicePerimeter(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::identity::accesscontextmanager::v1::
        DeleteServicePerimeterRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::identity::accesscontextmanager::v1::DeleteServicePerimeterRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::identity::accesscontextmanager::v1::
                 DeleteServicePerimeterRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteServicePerimeter(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultAccessContextManagerStub::DeleteServicePerimeter(
    grpc::ClientContext& context, Options,
    google::identity::accesscontextmanager::v1::
        DeleteServicePerimeterRequest const& request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->DeleteServicePerimeter(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAccessContextManagerStub::AsyncReplaceServicePerimeters(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::identity::accesscontextmanager::v1::
        ReplaceServicePerimetersRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::identity::accesscontextmanager::v1::
                                        ReplaceServicePerimetersRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::identity::accesscontextmanager::v1::
                 ReplaceServicePerimetersRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncReplaceServicePerimeters(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultAccessContextManagerStub::ReplaceServicePerimeters(
    grpc::ClientContext& context, Options,
    google::identity::accesscontextmanager::v1::
        ReplaceServicePerimetersRequest const& request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->ReplaceServicePerimeters(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAccessContextManagerStub::AsyncCommitServicePerimeters(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::identity::accesscontextmanager::v1::
        CommitServicePerimetersRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::identity::accesscontextmanager::v1::
                                        CommitServicePerimetersRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::identity::accesscontextmanager::v1::
                 CommitServicePerimetersRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCommitServicePerimeters(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultAccessContextManagerStub::CommitServicePerimeters(
    grpc::ClientContext& context, Options,
    google::identity::accesscontextmanager::v1::
        CommitServicePerimetersRequest const& request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->CommitServicePerimeters(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::identity::accesscontextmanager::v1::
             ListGcpUserAccessBindingsResponse>
DefaultAccessContextManagerStub::ListGcpUserAccessBindings(
    grpc::ClientContext& context, Options const&,
    google::identity::accesscontextmanager::v1::
        ListGcpUserAccessBindingsRequest const& request) {
  google::identity::accesscontextmanager::v1::ListGcpUserAccessBindingsResponse
      response;
  auto status =
      grpc_stub_->ListGcpUserAccessBindings(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::identity::accesscontextmanager::v1::GcpUserAccessBinding>
DefaultAccessContextManagerStub::GetGcpUserAccessBinding(
    grpc::ClientContext& context, Options const&,
    google::identity::accesscontextmanager::v1::
        GetGcpUserAccessBindingRequest const& request) {
  google::identity::accesscontextmanager::v1::GcpUserAccessBinding response;
  auto status =
      grpc_stub_->GetGcpUserAccessBinding(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAccessContextManagerStub::AsyncCreateGcpUserAccessBinding(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::identity::accesscontextmanager::v1::
        CreateGcpUserAccessBindingRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::identity::accesscontextmanager::v1::
                                        CreateGcpUserAccessBindingRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::identity::accesscontextmanager::v1::
                 CreateGcpUserAccessBindingRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateGcpUserAccessBinding(context, request,
                                                           cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultAccessContextManagerStub::CreateGcpUserAccessBinding(
    grpc::ClientContext& context, Options,
    google::identity::accesscontextmanager::v1::
        CreateGcpUserAccessBindingRequest const& request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->CreateGcpUserAccessBinding(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAccessContextManagerStub::AsyncUpdateGcpUserAccessBinding(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::identity::accesscontextmanager::v1::
        UpdateGcpUserAccessBindingRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::identity::accesscontextmanager::v1::
                                        UpdateGcpUserAccessBindingRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::identity::accesscontextmanager::v1::
                 UpdateGcpUserAccessBindingRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateGcpUserAccessBinding(context, request,
                                                           cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultAccessContextManagerStub::UpdateGcpUserAccessBinding(
    grpc::ClientContext& context, Options,
    google::identity::accesscontextmanager::v1::
        UpdateGcpUserAccessBindingRequest const& request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->UpdateGcpUserAccessBinding(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultAccessContextManagerStub::AsyncDeleteGcpUserAccessBinding(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::identity::accesscontextmanager::v1::
        DeleteGcpUserAccessBindingRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::identity::accesscontextmanager::v1::
                                        DeleteGcpUserAccessBindingRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::identity::accesscontextmanager::v1::
                 DeleteGcpUserAccessBindingRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteGcpUserAccessBinding(context, request,
                                                           cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultAccessContextManagerStub::DeleteGcpUserAccessBinding(
    grpc::ClientContext& context, Options,
    google::identity::accesscontextmanager::v1::
        DeleteGcpUserAccessBindingRequest const& request) {
  google::longrunning::Operation response;
  auto status =
      grpc_stub_->DeleteGcpUserAccessBinding(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultAccessContextManagerStub::SetIamPolicy(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::SetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = grpc_stub_->SetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultAccessContextManagerStub::GetIamPolicy(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::GetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = grpc_stub_->GetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DefaultAccessContextManagerStub::TestIamPermissions(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  google::iam::v1::TestIamPermissionsResponse response;
  auto status = grpc_stub_->TestIamPermissions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::Operation>
DefaultAccessContextManagerStub::GetOperation(
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
DefaultAccessContextManagerStub::AsyncGetOperation(
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

future<Status> DefaultAccessContextManagerStub::AsyncCancelOperation(
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
}  // namespace accesscontextmanager_v1_internal
}  // namespace cloud
}  // namespace google
