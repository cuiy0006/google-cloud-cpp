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
// source: google/cloud/aiplatform/v1/featurestore_service.proto

#include "google/cloud/aiplatform/v1/internal/featurestore_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

FeaturestoreServiceTracingStub::FeaturestoreServiceTracingStub(
    std::shared_ptr<FeaturestoreServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

future<StatusOr<google::longrunning::Operation>>
FeaturestoreServiceTracingStub::AsyncCreateFeaturestore(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::CreateFeaturestoreRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "CreateFeaturestore");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCreateFeaturestore(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceTracingStub::CreateFeaturestore(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::CreateFeaturestoreRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "CreateFeaturestore");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->CreateFeaturestore(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::Featurestore>
FeaturestoreServiceTracingStub::GetFeaturestore(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetFeaturestoreRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "GetFeaturestore");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetFeaturestore(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::ListFeaturestoresResponse>
FeaturestoreServiceTracingStub::ListFeaturestores(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListFeaturestoresRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "ListFeaturestores");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListFeaturestores(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
FeaturestoreServiceTracingStub::AsyncUpdateFeaturestore(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::UpdateFeaturestoreRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "UpdateFeaturestore");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncUpdateFeaturestore(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceTracingStub::UpdateFeaturestore(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::UpdateFeaturestoreRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "UpdateFeaturestore");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->UpdateFeaturestore(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
FeaturestoreServiceTracingStub::AsyncDeleteFeaturestore(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteFeaturestoreRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "DeleteFeaturestore");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncDeleteFeaturestore(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceTracingStub::DeleteFeaturestore(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeleteFeaturestoreRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "DeleteFeaturestore");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->DeleteFeaturestore(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
FeaturestoreServiceTracingStub::AsyncCreateEntityType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::CreateEntityTypeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "CreateEntityType");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCreateEntityType(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceTracingStub::CreateEntityType(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::CreateEntityTypeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "CreateEntityType");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateEntityType(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::EntityType>
FeaturestoreServiceTracingStub::GetEntityType(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetEntityTypeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "GetEntityType");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetEntityType(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::ListEntityTypesResponse>
FeaturestoreServiceTracingStub::ListEntityTypes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListEntityTypesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "ListEntityTypes");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListEntityTypes(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::EntityType>
FeaturestoreServiceTracingStub::UpdateEntityType(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::UpdateEntityTypeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "UpdateEntityType");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateEntityType(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
FeaturestoreServiceTracingStub::AsyncDeleteEntityType(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteEntityTypeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "DeleteEntityType");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncDeleteEntityType(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceTracingStub::DeleteEntityType(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeleteEntityTypeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "DeleteEntityType");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteEntityType(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
FeaturestoreServiceTracingStub::AsyncCreateFeature(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::CreateFeatureRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "CreateFeature");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateFeature(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceTracingStub::CreateFeature(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::CreateFeatureRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "CreateFeature");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateFeature(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
FeaturestoreServiceTracingStub::AsyncBatchCreateFeatures(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::BatchCreateFeaturesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "BatchCreateFeatures");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncBatchCreateFeatures(cq, context, std::move(options),
                                            request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceTracingStub::BatchCreateFeatures(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::BatchCreateFeaturesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "BatchCreateFeatures");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->BatchCreateFeatures(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::Feature>
FeaturestoreServiceTracingStub::GetFeature(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetFeatureRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "GetFeature");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetFeature(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::ListFeaturesResponse>
FeaturestoreServiceTracingStub::ListFeatures(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListFeaturesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "ListFeatures");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListFeatures(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::Feature>
FeaturestoreServiceTracingStub::UpdateFeature(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::UpdateFeatureRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "UpdateFeature");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateFeature(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
FeaturestoreServiceTracingStub::AsyncDeleteFeature(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteFeatureRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "DeleteFeature");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteFeature(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceTracingStub::DeleteFeature(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeleteFeatureRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "DeleteFeature");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteFeature(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
FeaturestoreServiceTracingStub::AsyncImportFeatureValues(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::ImportFeatureValuesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "ImportFeatureValues");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncImportFeatureValues(cq, context, std::move(options),
                                            request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceTracingStub::ImportFeatureValues(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::ImportFeatureValuesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "ImportFeatureValues");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ImportFeatureValues(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
FeaturestoreServiceTracingStub::AsyncBatchReadFeatureValues(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::BatchReadFeatureValuesRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.aiplatform.v1.FeaturestoreService",
                             "BatchReadFeatureValues");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncBatchReadFeatureValues(cq, context, std::move(options),
                                               request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceTracingStub::BatchReadFeatureValues(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::BatchReadFeatureValuesRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.aiplatform.v1.FeaturestoreService",
                             "BatchReadFeatureValues");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->BatchReadFeatureValues(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
FeaturestoreServiceTracingStub::AsyncExportFeatureValues(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::ExportFeatureValuesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "ExportFeatureValues");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncExportFeatureValues(cq, context, std::move(options),
                                            request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceTracingStub::ExportFeatureValues(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::ExportFeatureValuesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "ExportFeatureValues");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ExportFeatureValues(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
FeaturestoreServiceTracingStub::AsyncDeleteFeatureValues(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteFeatureValuesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "DeleteFeatureValues");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteFeatureValues(cq, context, std::move(options),
                                            request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceTracingStub::DeleteFeatureValues(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeleteFeatureValuesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "DeleteFeatureValues");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->DeleteFeatureValues(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::SearchFeaturesResponse>
FeaturestoreServiceTracingStub::SearchFeatures(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::SearchFeaturesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "SearchFeatures");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SearchFeatures(context, options, request));
}

StatusOr<google::cloud::location::ListLocationsResponse>
FeaturestoreServiceTracingStub::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "ListLocations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListLocations(context, options, request));
}

StatusOr<google::cloud::location::Location>
FeaturestoreServiceTracingStub::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "GetLocation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetLocation(context, options, request));
}

StatusOr<google::iam::v1::Policy> FeaturestoreServiceTracingStub::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SetIamPolicy(context, options, request));
}

StatusOr<google::iam::v1::Policy> FeaturestoreServiceTracingStub::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetIamPolicy(context, options, request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
FeaturestoreServiceTracingStub::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->TestIamPermissions(context, options, request));
}

StatusOr<google::longrunning::ListOperationsResponse>
FeaturestoreServiceTracingStub::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "ListOperations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListOperations(context, options, request));
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceTracingStub::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetOperation(context, options, request));
}

Status FeaturestoreServiceTracingStub::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "DeleteOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteOperation(context, options, request));
}

Status FeaturestoreServiceTracingStub::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "CancelOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CancelOperation(context, options, request));
}

StatusOr<google::longrunning::Operation>
FeaturestoreServiceTracingStub::WaitOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::WaitOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.FeaturestoreService", "WaitOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->WaitOperation(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
FeaturestoreServiceTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncGetOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> FeaturestoreServiceTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCancelOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<FeaturestoreServiceStub> MakeFeaturestoreServiceTracingStub(
    std::shared_ptr<FeaturestoreServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<FeaturestoreServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
