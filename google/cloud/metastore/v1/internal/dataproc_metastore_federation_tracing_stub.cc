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
// source: google/cloud/metastore/v1/metastore_federation.proto

#include "google/cloud/metastore/v1/internal/dataproc_metastore_federation_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace metastore_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DataprocMetastoreFederationTracingStub::DataprocMetastoreFederationTracingStub(
    std::shared_ptr<DataprocMetastoreFederationStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::metastore::v1::ListFederationsResponse>
DataprocMetastoreFederationTracingStub::ListFederations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::metastore::v1::ListFederationsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.metastore.v1.DataprocMetastoreFederation",
      "ListFederations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListFederations(context, options, request));
}

StatusOr<google::cloud::metastore::v1::Federation>
DataprocMetastoreFederationTracingStub::GetFederation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::metastore::v1::GetFederationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.metastore.v1.DataprocMetastoreFederation", "GetFederation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetFederation(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreFederationTracingStub::AsyncCreateFederation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::metastore::v1::CreateFederationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.metastore.v1.DataprocMetastoreFederation",
      "CreateFederation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCreateFederation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreFederationTracingStub::CreateFederation(
    grpc::ClientContext& context, Options options,
    google::cloud::metastore::v1::CreateFederationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.metastore.v1.DataprocMetastoreFederation",
      "CreateFederation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateFederation(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreFederationTracingStub::AsyncUpdateFederation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::metastore::v1::UpdateFederationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.metastore.v1.DataprocMetastoreFederation",
      "UpdateFederation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncUpdateFederation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreFederationTracingStub::UpdateFederation(
    grpc::ClientContext& context, Options options,
    google::cloud::metastore::v1::UpdateFederationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.metastore.v1.DataprocMetastoreFederation",
      "UpdateFederation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateFederation(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreFederationTracingStub::AsyncDeleteFederation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::metastore::v1::DeleteFederationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.metastore.v1.DataprocMetastoreFederation",
      "DeleteFederation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncDeleteFederation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreFederationTracingStub::DeleteFederation(
    grpc::ClientContext& context, Options options,
    google::cloud::metastore::v1::DeleteFederationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.metastore.v1.DataprocMetastoreFederation",
      "DeleteFederation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteFederation(context, options, request));
}

StatusOr<google::cloud::location::ListLocationsResponse>
DataprocMetastoreFederationTracingStub::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.metastore.v1.DataprocMetastoreFederation", "ListLocations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListLocations(context, options, request));
}

StatusOr<google::cloud::location::Location>
DataprocMetastoreFederationTracingStub::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.metastore.v1.DataprocMetastoreFederation", "GetLocation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetLocation(context, options, request));
}

StatusOr<google::iam::v1::Policy>
DataprocMetastoreFederationTracingStub::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.metastore.v1.DataprocMetastoreFederation", "SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SetIamPolicy(context, options, request));
}

StatusOr<google::iam::v1::Policy>
DataprocMetastoreFederationTracingStub::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.metastore.v1.DataprocMetastoreFederation", "GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetIamPolicy(context, options, request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
DataprocMetastoreFederationTracingStub::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.metastore.v1.DataprocMetastoreFederation",
      "TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->TestIamPermissions(context, options, request));
}

StatusOr<google::longrunning::ListOperationsResponse>
DataprocMetastoreFederationTracingStub::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.metastore.v1.DataprocMetastoreFederation",
      "ListOperations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListOperations(context, options, request));
}

StatusOr<google::longrunning::Operation>
DataprocMetastoreFederationTracingStub::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.metastore.v1.DataprocMetastoreFederation", "GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetOperation(context, options, request));
}

Status DataprocMetastoreFederationTracingStub::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.metastore.v1.DataprocMetastoreFederation",
      "DeleteOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteOperation(context, options, request));
}

Status DataprocMetastoreFederationTracingStub::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.metastore.v1.DataprocMetastoreFederation",
      "CancelOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CancelOperation(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
DataprocMetastoreFederationTracingStub::AsyncGetOperation(
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

future<Status> DataprocMetastoreFederationTracingStub::AsyncCancelOperation(
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

std::shared_ptr<DataprocMetastoreFederationStub>
MakeDataprocMetastoreFederationTracingStub(
    std::shared_ptr<DataprocMetastoreFederationStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<DataprocMetastoreFederationTracingStub>(
      std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace metastore_v1_internal
}  // namespace cloud
}  // namespace google
