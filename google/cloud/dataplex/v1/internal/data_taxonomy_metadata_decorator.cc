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
// source: google/cloud/dataplex/v1/data_taxonomy.proto

#include "google/cloud/dataplex/v1/internal/data_taxonomy_metadata_decorator.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/dataplex/v1/data_taxonomy.grpc.pb.h>
#include <memory>
#include <string>
#include <utility>
#include <vector>

namespace google {
namespace cloud {
namespace dataplex_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DataTaxonomyServiceMetadata::DataTaxonomyServiceMetadata(
    std::shared_ptr<DataTaxonomyServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::GeneratedLibClientHeader()
              : std::move(api_client_header)) {}

future<StatusOr<google::longrunning::Operation>>
DataTaxonomyServiceMetadata::AsyncCreateDataTaxonomy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::CreateDataTaxonomyRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateDataTaxonomy(cq, std::move(context),
                                         std::move(options), request);
}

StatusOr<google::longrunning::Operation>
DataTaxonomyServiceMetadata::CreateDataTaxonomy(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::CreateDataTaxonomyRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateDataTaxonomy(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataTaxonomyServiceMetadata::AsyncUpdateDataTaxonomy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::UpdateDataTaxonomyRequest const& request) {
  SetMetadata(
      *context, *options,
      absl::StrCat("data_taxonomy.name=",
                   internal::UrlEncode(request.data_taxonomy().name())));
  return child_->AsyncUpdateDataTaxonomy(cq, std::move(context),
                                         std::move(options), request);
}

StatusOr<google::longrunning::Operation>
DataTaxonomyServiceMetadata::UpdateDataTaxonomy(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::UpdateDataTaxonomyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("data_taxonomy.name=",
                   internal::UrlEncode(request.data_taxonomy().name())));
  return child_->UpdateDataTaxonomy(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataTaxonomyServiceMetadata::AsyncDeleteDataTaxonomy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::DeleteDataTaxonomyRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteDataTaxonomy(cq, std::move(context),
                                         std::move(options), request);
}

StatusOr<google::longrunning::Operation>
DataTaxonomyServiceMetadata::DeleteDataTaxonomy(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::DeleteDataTaxonomyRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteDataTaxonomy(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::ListDataTaxonomiesResponse>
DataTaxonomyServiceMetadata::ListDataTaxonomies(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListDataTaxonomiesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListDataTaxonomies(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::DataTaxonomy>
DataTaxonomyServiceMetadata::GetDataTaxonomy(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::GetDataTaxonomyRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetDataTaxonomy(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataTaxonomyServiceMetadata::AsyncCreateDataAttributeBinding(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::CreateDataAttributeBindingRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateDataAttributeBinding(cq, std::move(context),
                                                 std::move(options), request);
}

StatusOr<google::longrunning::Operation>
DataTaxonomyServiceMetadata::CreateDataAttributeBinding(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::CreateDataAttributeBindingRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateDataAttributeBinding(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataTaxonomyServiceMetadata::AsyncUpdateDataAttributeBinding(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::UpdateDataAttributeBindingRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("data_attribute_binding.name=",
                           internal::UrlEncode(
                               request.data_attribute_binding().name())));
  return child_->AsyncUpdateDataAttributeBinding(cq, std::move(context),
                                                 std::move(options), request);
}

StatusOr<google::longrunning::Operation>
DataTaxonomyServiceMetadata::UpdateDataAttributeBinding(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::UpdateDataAttributeBindingRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("data_attribute_binding.name=",
                           internal::UrlEncode(
                               request.data_attribute_binding().name())));
  return child_->UpdateDataAttributeBinding(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataTaxonomyServiceMetadata::AsyncDeleteDataAttributeBinding(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::DeleteDataAttributeBindingRequest const&
        request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteDataAttributeBinding(cq, std::move(context),
                                                 std::move(options), request);
}

StatusOr<google::longrunning::Operation>
DataTaxonomyServiceMetadata::DeleteDataAttributeBinding(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::DeleteDataAttributeBindingRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteDataAttributeBinding(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::ListDataAttributeBindingsResponse>
DataTaxonomyServiceMetadata::ListDataAttributeBindings(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListDataAttributeBindingsRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListDataAttributeBindings(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::DataAttributeBinding>
DataTaxonomyServiceMetadata::GetDataAttributeBinding(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::GetDataAttributeBindingRequest const&
        request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetDataAttributeBinding(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataTaxonomyServiceMetadata::AsyncCreateDataAttribute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::CreateDataAttributeRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->AsyncCreateDataAttribute(cq, std::move(context),
                                          std::move(options), request);
}

StatusOr<google::longrunning::Operation>
DataTaxonomyServiceMetadata::CreateDataAttribute(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::CreateDataAttributeRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateDataAttribute(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataTaxonomyServiceMetadata::AsyncUpdateDataAttribute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::UpdateDataAttributeRequest const& request) {
  SetMetadata(
      *context, *options,
      absl::StrCat("data_attribute.name=",
                   internal::UrlEncode(request.data_attribute().name())));
  return child_->AsyncUpdateDataAttribute(cq, std::move(context),
                                          std::move(options), request);
}

StatusOr<google::longrunning::Operation>
DataTaxonomyServiceMetadata::UpdateDataAttribute(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::UpdateDataAttributeRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("data_attribute.name=",
                   internal::UrlEncode(request.data_attribute().name())));
  return child_->UpdateDataAttribute(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataTaxonomyServiceMetadata::AsyncDeleteDataAttribute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::DeleteDataAttributeRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncDeleteDataAttribute(cq, std::move(context),
                                          std::move(options), request);
}

StatusOr<google::longrunning::Operation>
DataTaxonomyServiceMetadata::DeleteDataAttribute(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::DeleteDataAttributeRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteDataAttribute(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::ListDataAttributesResponse>
DataTaxonomyServiceMetadata::ListDataAttributes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListDataAttributesRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->ListDataAttributes(context, options, request);
}

StatusOr<google::cloud::dataplex::v1::DataAttribute>
DataTaxonomyServiceMetadata::GetDataAttribute(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::GetDataAttributeRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetDataAttribute(context, options, request);
}

StatusOr<google::cloud::location::ListLocationsResponse>
DataTaxonomyServiceMetadata::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListLocations(context, options, request);
}

StatusOr<google::cloud::location::Location>
DataTaxonomyServiceMetadata::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetLocation(context, options, request);
}

StatusOr<google::iam::v1::Policy> DataTaxonomyServiceMetadata::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->SetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::Policy> DataTaxonomyServiceMetadata::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->GetIamPolicy(context, options, request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DataTaxonomyServiceMetadata::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  SetMetadata(
      context, options,
      absl::StrCat("resource=", internal::UrlEncode(request.resource())));
  return child_->TestIamPermissions(context, options, request);
}

StatusOr<google::longrunning::ListOperationsResponse>
DataTaxonomyServiceMetadata::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->ListOperations(context, options, request);
}

StatusOr<google::longrunning::Operation>
DataTaxonomyServiceMetadata::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetOperation(context, options, request);
}

Status DataTaxonomyServiceMetadata::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteOperation(context, options, request);
}

Status DataTaxonomyServiceMetadata::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(context, options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->CancelOperation(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
DataTaxonomyServiceMetadata::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncGetOperation(cq, std::move(context), std::move(options),
                                   request);
}

future<Status> DataTaxonomyServiceMetadata::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  SetMetadata(*context, *options,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->AsyncCancelOperation(cq, std::move(context),
                                      std::move(options), request);
}

void DataTaxonomyServiceMetadata::SetMetadata(
    grpc::ClientContext& context, Options const& options,
    std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context, options);
}

void DataTaxonomyServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                              Options const& options) {
  google::cloud::internal::SetMetadata(context, options, fixed_metadata_,
                                       api_client_header_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_v1_internal
}  // namespace cloud
}  // namespace google
