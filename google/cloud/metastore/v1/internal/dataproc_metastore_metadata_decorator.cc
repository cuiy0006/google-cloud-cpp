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
// source: google/cloud/metastore/v1/metastore.proto

#include "google/cloud/metastore/v1/internal/dataproc_metastore_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/metastore/v1/metastore.grpc.pb.h>
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace google {
namespace cloud {
namespace metastore_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DataprocMetastoreMetadata::DataprocMetastoreMetadata(
    std::shared_ptr<DataprocMetastoreStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

StatusOr<google::cloud::metastore::v1::ListServicesResponse>
DataprocMetastoreMetadata::ListServices(
    grpc::ClientContext& context, Options const& options,
    google::cloud::metastore::v1::ListServicesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListServices(context, options, request);
}

StatusOr<google::cloud::metastore::v1::Service>
DataprocMetastoreMetadata::GetService(
    grpc::ClientContext& context, Options const& options,
    google::cloud::metastore::v1::GetServiceRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetService(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreMetadata::AsyncCreateService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::metastore::v1::CreateServiceRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateService(cq, std::move(context), std::move(options),
                                    request);
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreMetadata::CreateService(
    grpc::ClientContext& context, Options options,
    google::cloud::metastore::v1::CreateServiceRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateService(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreMetadata::AsyncUpdateService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::metastore::v1::UpdateServiceRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("service.name=",
                           internal::UrlEncode(request.service().name())));
  return child_->AsyncUpdateService(cq, std::move(context), std::move(options),
                                    request);
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreMetadata::UpdateService(
    grpc::ClientContext& context, Options options,
    google::cloud::metastore::v1::UpdateServiceRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("service.name=",
                           internal::UrlEncode(request.service().name())));
  return child_->UpdateService(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreMetadata::AsyncDeleteService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::metastore::v1::DeleteServiceRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteService(cq, std::move(context), std::move(options),
                                    request);
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreMetadata::DeleteService(
    grpc::ClientContext& context, Options options,
    google::cloud::metastore::v1::DeleteServiceRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteService(context, options, request);
}

StatusOr<google::cloud::metastore::v1::ListMetadataImportsResponse>
DataprocMetastoreMetadata::ListMetadataImports(
    grpc::ClientContext& context, Options const& options,
    google::cloud::metastore::v1::ListMetadataImportsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListMetadataImports(context, options, request);
}

StatusOr<google::cloud::metastore::v1::MetadataImport>
DataprocMetastoreMetadata::GetMetadataImport(
    grpc::ClientContext& context, Options const& options,
    google::cloud::metastore::v1::GetMetadataImportRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetMetadataImport(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreMetadata::AsyncCreateMetadataImport(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::metastore::v1::CreateMetadataImportRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateMetadataImport(cq, std::move(context),
                                           std::move(options), request);
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreMetadata::CreateMetadataImport(
    grpc::ClientContext& context, Options options,
    google::cloud::metastore::v1::CreateMetadataImportRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateMetadataImport(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreMetadata::AsyncUpdateMetadataImport(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::metastore::v1::UpdateMetadataImportRequest const& request) {
  SetMetadata(
      *context, *options,
      absl::StrCat("metadata_import.name=",
                   internal::UrlEncode(request.metadata_import().name())));
  return child_->AsyncUpdateMetadataImport(cq, std::move(context),
                                           std::move(options), request);
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreMetadata::UpdateMetadataImport(
    grpc::ClientContext& context, Options options,
    google::cloud::metastore::v1::UpdateMetadataImportRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("metadata_import.name=",
                   internal::UrlEncode(request.metadata_import().name())));
  return child_->UpdateMetadataImport(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreMetadata::AsyncExportMetadata(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::metastore::v1::ExportMetadataRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("service=", internal::UrlEncode(request.service())));
  return child_->AsyncExportMetadata(cq, std::move(context), std::move(options),
                                     request);
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreMetadata::ExportMetadata(
    grpc::ClientContext& context, Options options,
    google::cloud::metastore::v1::ExportMetadataRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("service=", internal::UrlEncode(request.service())));
  return child_->ExportMetadata(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreMetadata::AsyncRestoreService(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::metastore::v1::RestoreServiceRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("service=", internal::UrlEncode(request.service())));
  return child_->AsyncRestoreService(cq, std::move(context), std::move(options),
                                     request);
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreMetadata::RestoreService(
    grpc::ClientContext& context, Options options,
    google::cloud::metastore::v1::RestoreServiceRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("service=", internal::UrlEncode(request.service())));
  return child_->RestoreService(context, options, request);
}

StatusOr<google::cloud::metastore::v1::ListBackupsResponse>
DataprocMetastoreMetadata::ListBackups(
    grpc::ClientContext& context, Options const& options,
    google::cloud::metastore::v1::ListBackupsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListBackups(context, options, request);
}

StatusOr<google::cloud::metastore::v1::Backup>
DataprocMetastoreMetadata::GetBackup(
    grpc::ClientContext& context, Options const& options,
    google::cloud::metastore::v1::GetBackupRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetBackup(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreMetadata::AsyncCreateBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::metastore::v1::CreateBackupRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateBackup(cq, std::move(context), std::move(options),
                                   request);
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreMetadata::CreateBackup(
    grpc::ClientContext& context, Options options,
    google::cloud::metastore::v1::CreateBackupRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateBackup(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreMetadata::AsyncDeleteBackup(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::metastore::v1::DeleteBackupRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteBackup(cq, std::move(context), std::move(options),
                                   request);
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreMetadata::DeleteBackup(
    grpc::ClientContext& context, Options options,
    google::cloud::metastore::v1::DeleteBackupRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteBackup(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreMetadata::AsyncQueryMetadata(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::metastore::v1::QueryMetadataRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("service=", internal::UrlEncode(request.service())));
  return child_->AsyncQueryMetadata(cq, std::move(context), std::move(options),
                                    request);
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreMetadata::QueryMetadata(
    grpc::ClientContext& context, Options options,
    google::cloud::metastore::v1::QueryMetadataRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("service=", internal::UrlEncode(request.service())));
  return child_->QueryMetadata(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreMetadata::AsyncMoveTableToDatabase(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::metastore::v1::MoveTableToDatabaseRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("service=", internal::UrlEncode(request.service())));
  return child_->AsyncMoveTableToDatabase(cq, std::move(context),
                                          std::move(options), request);
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreMetadata::MoveTableToDatabase(
    grpc::ClientContext& context, Options options,
    google::cloud::metastore::v1::MoveTableToDatabaseRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("service=", internal::UrlEncode(request.service())));
  return child_->MoveTableToDatabase(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreMetadata::AsyncAlterMetadataResourceLocation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::metastore::v1::AlterMetadataResourceLocationRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("service=", internal::UrlEncode(request.service())));
  return child_->AsyncAlterMetadataResourceLocation(
      cq, std::move(context), std::move(options), request);
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreMetadata::AlterMetadataResourceLocation(
    grpc::ClientContext& context, Options options,
    google::cloud::metastore::v1::AlterMetadataResourceLocationRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("service=", internal::UrlEncode(request.service())));
  return child_->AlterMetadataResourceLocation(context, options, request);
}

StatusOr<google::cloud::location::ListLocationsResponse>
DataprocMetastoreMetadata::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListLocations(context, options, request);
}

StatusOr<google::cloud::location::Location>
DataprocMetastoreMetadata::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetLocation(context, options, request);
}

StatusOr<google::iam::v1::Policy> DataprocMetastoreMetadata::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy> DataprocMetastoreMetadata::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->GetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DataprocMetastoreMetadata::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->TestIamPermissions(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
DataprocMetastoreMetadata::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreMetadata::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetOperation(context, options, request);
}

Status DataprocMetastoreMetadata::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteOperation(context, options, request);
}

Status DataprocMetastoreMetadata::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CancelOperation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> DataprocMetastoreMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void DataprocMetastoreMetadata::SetMetadata(grpc::ClientContext& context,
                                            Options const& options,
                                            std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void DataprocMetastoreMetadata::SetMetadata(grpc::ClientContext& context,
                                            Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace metastore_v1_internal
}  // namespace cloud
}  // namespace google
