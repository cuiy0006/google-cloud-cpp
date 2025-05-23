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
// source: google/cloud/gkebackup/v1/gkebackup.proto

#include "google/cloud/gkebackup/v1/internal/backup_for_gke_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/gkebackup/v1/gkebackup.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace gkebackup_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BackupForGKEStub::~BackupForGKEStub() = default;

future<StatusOr<google::longrunning::Operation>>
DefaultBackupForGKEStub::AsyncCreateBackupPlan(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::gkebackup::v1::CreateBackupPlanRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gkebackup::v1::CreateBackupPlanRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::gkebackup::v1::CreateBackupPlanRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateBackupPlan(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultBackupForGKEStub::CreateBackupPlan(
    grpc::ClientContext& context, Options,
    google::cloud::gkebackup::v1::CreateBackupPlanRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateBackupPlan(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::gkebackup::v1::ListBackupPlansResponse>
DefaultBackupForGKEStub::ListBackupPlans(
    grpc::ClientContext& context, Options const&,
    google::cloud::gkebackup::v1::ListBackupPlansRequest const& request) {
  google::cloud::gkebackup::v1::ListBackupPlansResponse response;
  auto status = grpc_stub_->ListBackupPlans(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::gkebackup::v1::BackupPlan>
DefaultBackupForGKEStub::GetBackupPlan(
    grpc::ClientContext& context, Options const&,
    google::cloud::gkebackup::v1::GetBackupPlanRequest const& request) {
  google::cloud::gkebackup::v1::BackupPlan response;
  auto status = grpc_stub_->GetBackupPlan(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBackupForGKEStub::AsyncUpdateBackupPlan(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::gkebackup::v1::UpdateBackupPlanRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gkebackup::v1::UpdateBackupPlanRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::gkebackup::v1::UpdateBackupPlanRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateBackupPlan(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultBackupForGKEStub::UpdateBackupPlan(
    grpc::ClientContext& context, Options,
    google::cloud::gkebackup::v1::UpdateBackupPlanRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateBackupPlan(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBackupForGKEStub::AsyncDeleteBackupPlan(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::gkebackup::v1::DeleteBackupPlanRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gkebackup::v1::DeleteBackupPlanRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::gkebackup::v1::DeleteBackupPlanRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteBackupPlan(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultBackupForGKEStub::DeleteBackupPlan(
    grpc::ClientContext& context, Options,
    google::cloud::gkebackup::v1::DeleteBackupPlanRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteBackupPlan(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBackupForGKEStub::AsyncCreateBackupChannel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::gkebackup::v1::CreateBackupChannelRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gkebackup::v1::CreateBackupChannelRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::gkebackup::v1::CreateBackupChannelRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateBackupChannel(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultBackupForGKEStub::CreateBackupChannel(
    grpc::ClientContext& context, Options,
    google::cloud::gkebackup::v1::CreateBackupChannelRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateBackupChannel(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::gkebackup::v1::ListBackupChannelsResponse>
DefaultBackupForGKEStub::ListBackupChannels(
    grpc::ClientContext& context, Options const&,
    google::cloud::gkebackup::v1::ListBackupChannelsRequest const& request) {
  google::cloud::gkebackup::v1::ListBackupChannelsResponse response;
  auto status = grpc_stub_->ListBackupChannels(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::gkebackup::v1::BackupChannel>
DefaultBackupForGKEStub::GetBackupChannel(
    grpc::ClientContext& context, Options const&,
    google::cloud::gkebackup::v1::GetBackupChannelRequest const& request) {
  google::cloud::gkebackup::v1::BackupChannel response;
  auto status = grpc_stub_->GetBackupChannel(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBackupForGKEStub::AsyncUpdateBackupChannel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::gkebackup::v1::UpdateBackupChannelRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gkebackup::v1::UpdateBackupChannelRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::gkebackup::v1::UpdateBackupChannelRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateBackupChannel(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultBackupForGKEStub::UpdateBackupChannel(
    grpc::ClientContext& context, Options,
    google::cloud::gkebackup::v1::UpdateBackupChannelRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateBackupChannel(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBackupForGKEStub::AsyncDeleteBackupChannel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::gkebackup::v1::DeleteBackupChannelRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gkebackup::v1::DeleteBackupChannelRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::gkebackup::v1::DeleteBackupChannelRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteBackupChannel(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultBackupForGKEStub::DeleteBackupChannel(
    grpc::ClientContext& context, Options,
    google::cloud::gkebackup::v1::DeleteBackupChannelRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteBackupChannel(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::gkebackup::v1::ListBackupPlanBindingsResponse>
DefaultBackupForGKEStub::ListBackupPlanBindings(
    grpc::ClientContext& context, Options const&,
    google::cloud::gkebackup::v1::ListBackupPlanBindingsRequest const&
        request) {
  google::cloud::gkebackup::v1::ListBackupPlanBindingsResponse response;
  auto status =
      grpc_stub_->ListBackupPlanBindings(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::gkebackup::v1::BackupPlanBinding>
DefaultBackupForGKEStub::GetBackupPlanBinding(
    grpc::ClientContext& context, Options const&,
    google::cloud::gkebackup::v1::GetBackupPlanBindingRequest const& request) {
  google::cloud::gkebackup::v1::BackupPlanBinding response;
  auto status = grpc_stub_->GetBackupPlanBinding(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBackupForGKEStub::AsyncCreateBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::gkebackup::v1::CreateBackupRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gkebackup::v1::CreateBackupRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::gkebackup::v1::CreateBackupRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateBackup(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultBackupForGKEStub::CreateBackup(
    grpc::ClientContext& context, Options,
    google::cloud::gkebackup::v1::CreateBackupRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateBackup(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::gkebackup::v1::ListBackupsResponse>
DefaultBackupForGKEStub::ListBackups(
    grpc::ClientContext& context, Options const&,
    google::cloud::gkebackup::v1::ListBackupsRequest const& request) {
  google::cloud::gkebackup::v1::ListBackupsResponse response;
  auto status = grpc_stub_->ListBackups(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::gkebackup::v1::Backup>
DefaultBackupForGKEStub::GetBackup(
    grpc::ClientContext& context, Options const&,
    google::cloud::gkebackup::v1::GetBackupRequest const& request) {
  google::cloud::gkebackup::v1::Backup response;
  auto status = grpc_stub_->GetBackup(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBackupForGKEStub::AsyncUpdateBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::gkebackup::v1::UpdateBackupRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gkebackup::v1::UpdateBackupRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::gkebackup::v1::UpdateBackupRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateBackup(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultBackupForGKEStub::UpdateBackup(
    grpc::ClientContext& context, Options,
    google::cloud::gkebackup::v1::UpdateBackupRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateBackup(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBackupForGKEStub::AsyncDeleteBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::gkebackup::v1::DeleteBackupRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gkebackup::v1::DeleteBackupRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::gkebackup::v1::DeleteBackupRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteBackup(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultBackupForGKEStub::DeleteBackup(
    grpc::ClientContext& context, Options,
    google::cloud::gkebackup::v1::DeleteBackupRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteBackup(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::gkebackup::v1::ListVolumeBackupsResponse>
DefaultBackupForGKEStub::ListVolumeBackups(
    grpc::ClientContext& context, Options const&,
    google::cloud::gkebackup::v1::ListVolumeBackupsRequest const& request) {
  google::cloud::gkebackup::v1::ListVolumeBackupsResponse response;
  auto status = grpc_stub_->ListVolumeBackups(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::gkebackup::v1::VolumeBackup>
DefaultBackupForGKEStub::GetVolumeBackup(
    grpc::ClientContext& context, Options const&,
    google::cloud::gkebackup::v1::GetVolumeBackupRequest const& request) {
  google::cloud::gkebackup::v1::VolumeBackup response;
  auto status = grpc_stub_->GetVolumeBackup(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBackupForGKEStub::AsyncCreateRestorePlan(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::gkebackup::v1::CreateRestorePlanRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gkebackup::v1::CreateRestorePlanRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::gkebackup::v1::CreateRestorePlanRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateRestorePlan(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultBackupForGKEStub::CreateRestorePlan(
    grpc::ClientContext& context, Options,
    google::cloud::gkebackup::v1::CreateRestorePlanRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateRestorePlan(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::gkebackup::v1::ListRestorePlansResponse>
DefaultBackupForGKEStub::ListRestorePlans(
    grpc::ClientContext& context, Options const&,
    google::cloud::gkebackup::v1::ListRestorePlansRequest const& request) {
  google::cloud::gkebackup::v1::ListRestorePlansResponse response;
  auto status = grpc_stub_->ListRestorePlans(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::gkebackup::v1::RestorePlan>
DefaultBackupForGKEStub::GetRestorePlan(
    grpc::ClientContext& context, Options const&,
    google::cloud::gkebackup::v1::GetRestorePlanRequest const& request) {
  google::cloud::gkebackup::v1::RestorePlan response;
  auto status = grpc_stub_->GetRestorePlan(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBackupForGKEStub::AsyncUpdateRestorePlan(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::gkebackup::v1::UpdateRestorePlanRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gkebackup::v1::UpdateRestorePlanRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::gkebackup::v1::UpdateRestorePlanRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateRestorePlan(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultBackupForGKEStub::UpdateRestorePlan(
    grpc::ClientContext& context, Options,
    google::cloud::gkebackup::v1::UpdateRestorePlanRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateRestorePlan(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBackupForGKEStub::AsyncDeleteRestorePlan(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::gkebackup::v1::DeleteRestorePlanRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gkebackup::v1::DeleteRestorePlanRequest,
      google::longrunning::Operation>(
      cq,
      [this](
          grpc::ClientContext* context,
          google::cloud::gkebackup::v1::DeleteRestorePlanRequest const& request,
          grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteRestorePlan(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultBackupForGKEStub::DeleteRestorePlan(
    grpc::ClientContext& context, Options,
    google::cloud::gkebackup::v1::DeleteRestorePlanRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteRestorePlan(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBackupForGKEStub::AsyncCreateRestoreChannel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::gkebackup::v1::CreateRestoreChannelRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gkebackup::v1::CreateRestoreChannelRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::gkebackup::v1::CreateRestoreChannelRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateRestoreChannel(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultBackupForGKEStub::CreateRestoreChannel(
    grpc::ClientContext& context, Options,
    google::cloud::gkebackup::v1::CreateRestoreChannelRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateRestoreChannel(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::gkebackup::v1::ListRestoreChannelsResponse>
DefaultBackupForGKEStub::ListRestoreChannels(
    grpc::ClientContext& context, Options const&,
    google::cloud::gkebackup::v1::ListRestoreChannelsRequest const& request) {
  google::cloud::gkebackup::v1::ListRestoreChannelsResponse response;
  auto status = grpc_stub_->ListRestoreChannels(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::gkebackup::v1::RestoreChannel>
DefaultBackupForGKEStub::GetRestoreChannel(
    grpc::ClientContext& context, Options const&,
    google::cloud::gkebackup::v1::GetRestoreChannelRequest const& request) {
  google::cloud::gkebackup::v1::RestoreChannel response;
  auto status = grpc_stub_->GetRestoreChannel(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBackupForGKEStub::AsyncUpdateRestoreChannel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::gkebackup::v1::UpdateRestoreChannelRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gkebackup::v1::UpdateRestoreChannelRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::gkebackup::v1::UpdateRestoreChannelRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateRestoreChannel(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultBackupForGKEStub::UpdateRestoreChannel(
    grpc::ClientContext& context, Options,
    google::cloud::gkebackup::v1::UpdateRestoreChannelRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateRestoreChannel(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBackupForGKEStub::AsyncDeleteRestoreChannel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::gkebackup::v1::DeleteRestoreChannelRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gkebackup::v1::DeleteRestoreChannelRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::gkebackup::v1::DeleteRestoreChannelRequest const&
                 request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteRestoreChannel(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultBackupForGKEStub::DeleteRestoreChannel(
    grpc::ClientContext& context, Options,
    google::cloud::gkebackup::v1::DeleteRestoreChannelRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteRestoreChannel(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::gkebackup::v1::ListRestorePlanBindingsResponse>
DefaultBackupForGKEStub::ListRestorePlanBindings(
    grpc::ClientContext& context, Options const&,
    google::cloud::gkebackup::v1::ListRestorePlanBindingsRequest const&
        request) {
  google::cloud::gkebackup::v1::ListRestorePlanBindingsResponse response;
  auto status =
      grpc_stub_->ListRestorePlanBindings(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::gkebackup::v1::RestorePlanBinding>
DefaultBackupForGKEStub::GetRestorePlanBinding(
    grpc::ClientContext& context, Options const&,
    google::cloud::gkebackup::v1::GetRestorePlanBindingRequest const& request) {
  google::cloud::gkebackup::v1::RestorePlanBinding response;
  auto status = grpc_stub_->GetRestorePlanBinding(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBackupForGKEStub::AsyncCreateRestore(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::gkebackup::v1::CreateRestoreRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gkebackup::v1::CreateRestoreRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::gkebackup::v1::CreateRestoreRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncCreateRestore(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultBackupForGKEStub::CreateRestore(
    grpc::ClientContext& context, Options,
    google::cloud::gkebackup::v1::CreateRestoreRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->CreateRestore(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::gkebackup::v1::ListRestoresResponse>
DefaultBackupForGKEStub::ListRestores(
    grpc::ClientContext& context, Options const&,
    google::cloud::gkebackup::v1::ListRestoresRequest const& request) {
  google::cloud::gkebackup::v1::ListRestoresResponse response;
  auto status = grpc_stub_->ListRestores(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::gkebackup::v1::Restore>
DefaultBackupForGKEStub::GetRestore(
    grpc::ClientContext& context, Options const&,
    google::cloud::gkebackup::v1::GetRestoreRequest const& request) {
  google::cloud::gkebackup::v1::Restore response;
  auto status = grpc_stub_->GetRestore(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBackupForGKEStub::AsyncUpdateRestore(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::gkebackup::v1::UpdateRestoreRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gkebackup::v1::UpdateRestoreRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::gkebackup::v1::UpdateRestoreRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncUpdateRestore(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultBackupForGKEStub::UpdateRestore(
    grpc::ClientContext& context, Options,
    google::cloud::gkebackup::v1::UpdateRestoreRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->UpdateRestore(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultBackupForGKEStub::AsyncDeleteRestore(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::gkebackup::v1::DeleteRestoreRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::gkebackup::v1::DeleteRestoreRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::gkebackup::v1::DeleteRestoreRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncDeleteRestore(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation> DefaultBackupForGKEStub::DeleteRestore(
    grpc::ClientContext& context, Options,
    google::cloud::gkebackup::v1::DeleteRestoreRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->DeleteRestore(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::gkebackup::v1::ListVolumeRestoresResponse>
DefaultBackupForGKEStub::ListVolumeRestores(
    grpc::ClientContext& context, Options const&,
    google::cloud::gkebackup::v1::ListVolumeRestoresRequest const& request) {
  google::cloud::gkebackup::v1::ListVolumeRestoresResponse response;
  auto status = grpc_stub_->ListVolumeRestores(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::gkebackup::v1::VolumeRestore>
DefaultBackupForGKEStub::GetVolumeRestore(
    grpc::ClientContext& context, Options const&,
    google::cloud::gkebackup::v1::GetVolumeRestoreRequest const& request) {
  google::cloud::gkebackup::v1::VolumeRestore response;
  auto status = grpc_stub_->GetVolumeRestore(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::gkebackup::v1::GetBackupIndexDownloadUrlResponse>
DefaultBackupForGKEStub::GetBackupIndexDownloadUrl(
    grpc::ClientContext& context, Options const&,
    google::cloud::gkebackup::v1::GetBackupIndexDownloadUrlRequest const&
        request) {
  google::cloud::gkebackup::v1::GetBackupIndexDownloadUrlResponse response;
  auto status =
      grpc_stub_->GetBackupIndexDownloadUrl(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::ListLocationsResponse>
DefaultBackupForGKEStub::ListLocations(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::ListLocationsRequest const& request) {
  google::cloud::location::ListLocationsResponse response;
  auto status = locations_stub_->ListLocations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::location::Location>
DefaultBackupForGKEStub::GetLocation(
    grpc::ClientContext& context, Options const&,
    google::cloud::location::GetLocationRequest const& request) {
  google::cloud::location::Location response;
  auto status = locations_stub_->GetLocation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultBackupForGKEStub::SetIamPolicy(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::SetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = iampolicy_stub_->SetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::Policy> DefaultBackupForGKEStub::GetIamPolicy(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::GetIamPolicyRequest const& request) {
  google::iam::v1::Policy response;
  auto status = iampolicy_stub_->GetIamPolicy(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DefaultBackupForGKEStub::TestIamPermissions(
    grpc::ClientContext& context, Options const&,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  google::iam::v1::TestIamPermissionsResponse response;
  auto status =
      iampolicy_stub_->TestIamPermissions(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::ListOperationsResponse>
DefaultBackupForGKEStub::ListOperations(
    grpc::ClientContext& context, Options const&,
    google::longrunning::ListOperationsRequest const& request) {
  google::longrunning::ListOperationsResponse response;
  auto status = operations_stub_->ListOperations(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::Operation> DefaultBackupForGKEStub::GetOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->GetOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultBackupForGKEStub::DeleteOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::DeleteOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->DeleteOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

Status DefaultBackupForGKEStub::CancelOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::CancelOperationRequest const& request) {
  google::protobuf::Empty response;
  auto status = operations_stub_->CancelOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

future<StatusOr<google::longrunning::Operation>>
DefaultBackupForGKEStub::AsyncGetOperation(
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

future<Status> DefaultBackupForGKEStub::AsyncCancelOperation(
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
}  // namespace gkebackup_v1_internal
}  // namespace cloud
}  // namespace google
