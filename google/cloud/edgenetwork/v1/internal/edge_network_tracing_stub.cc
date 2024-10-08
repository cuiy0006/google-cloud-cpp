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
// source: google/cloud/edgenetwork/v1/service.proto

#include "google/cloud/edgenetwork/v1/internal/edge_network_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace edgenetwork_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

EdgeNetworkTracingStub::EdgeNetworkTracingStub(
    std::shared_ptr<EdgeNetworkStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::edgenetwork::v1::InitializeZoneResponse>
EdgeNetworkTracingStub::InitializeZone(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::InitializeZoneRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "InitializeZone");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->InitializeZone(context, options, request));
}

StatusOr<google::cloud::edgenetwork::v1::ListZonesResponse>
EdgeNetworkTracingStub::ListZones(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::ListZonesRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "ListZones");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListZones(context, options, request));
}

StatusOr<google::cloud::edgenetwork::v1::Zone> EdgeNetworkTracingStub::GetZone(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::GetZoneRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "GetZone");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetZone(context, options, request));
}

StatusOr<google::cloud::edgenetwork::v1::ListNetworksResponse>
EdgeNetworkTracingStub::ListNetworks(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::ListNetworksRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "ListNetworks");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListNetworks(context, options, request));
}

StatusOr<google::cloud::edgenetwork::v1::Network>
EdgeNetworkTracingStub::GetNetwork(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::GetNetworkRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "GetNetwork");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetNetwork(context, options, request));
}

StatusOr<google::cloud::edgenetwork::v1::DiagnoseNetworkResponse>
EdgeNetworkTracingStub::DiagnoseNetwork(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::DiagnoseNetworkRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "DiagnoseNetwork");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DiagnoseNetwork(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
EdgeNetworkTracingStub::AsyncCreateNetwork(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgenetwork::v1::CreateNetworkRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "CreateNetwork");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateNetwork(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation> EdgeNetworkTracingStub::CreateNetwork(
    grpc::ClientContext& context, Options options,
    google::cloud::edgenetwork::v1::CreateNetworkRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "CreateNetwork");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateNetwork(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
EdgeNetworkTracingStub::AsyncDeleteNetwork(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgenetwork::v1::DeleteNetworkRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "DeleteNetwork");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteNetwork(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation> EdgeNetworkTracingStub::DeleteNetwork(
    grpc::ClientContext& context, Options options,
    google::cloud::edgenetwork::v1::DeleteNetworkRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "DeleteNetwork");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteNetwork(context, options, request));
}

StatusOr<google::cloud::edgenetwork::v1::ListSubnetsResponse>
EdgeNetworkTracingStub::ListSubnets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::ListSubnetsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "ListSubnets");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListSubnets(context, options, request));
}

StatusOr<google::cloud::edgenetwork::v1::Subnet>
EdgeNetworkTracingStub::GetSubnet(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::GetSubnetRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "GetSubnet");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetSubnet(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
EdgeNetworkTracingStub::AsyncCreateSubnet(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgenetwork::v1::CreateSubnetRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "CreateSubnet");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateSubnet(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation> EdgeNetworkTracingStub::CreateSubnet(
    grpc::ClientContext& context, Options options,
    google::cloud::edgenetwork::v1::CreateSubnetRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "CreateSubnet");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateSubnet(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
EdgeNetworkTracingStub::AsyncUpdateSubnet(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgenetwork::v1::UpdateSubnetRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "UpdateSubnet");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateSubnet(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation> EdgeNetworkTracingStub::UpdateSubnet(
    grpc::ClientContext& context, Options options,
    google::cloud::edgenetwork::v1::UpdateSubnetRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "UpdateSubnet");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateSubnet(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
EdgeNetworkTracingStub::AsyncDeleteSubnet(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgenetwork::v1::DeleteSubnetRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "DeleteSubnet");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteSubnet(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation> EdgeNetworkTracingStub::DeleteSubnet(
    grpc::ClientContext& context, Options options,
    google::cloud::edgenetwork::v1::DeleteSubnetRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "DeleteSubnet");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteSubnet(context, options, request));
}

StatusOr<google::cloud::edgenetwork::v1::ListInterconnectsResponse>
EdgeNetworkTracingStub::ListInterconnects(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::ListInterconnectsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "ListInterconnects");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListInterconnects(context, options, request));
}

StatusOr<google::cloud::edgenetwork::v1::Interconnect>
EdgeNetworkTracingStub::GetInterconnect(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::GetInterconnectRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "GetInterconnect");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetInterconnect(context, options, request));
}

StatusOr<google::cloud::edgenetwork::v1::DiagnoseInterconnectResponse>
EdgeNetworkTracingStub::DiagnoseInterconnect(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::DiagnoseInterconnectRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "DiagnoseInterconnect");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->DiagnoseInterconnect(context, options, request));
}

StatusOr<google::cloud::edgenetwork::v1::ListInterconnectAttachmentsResponse>
EdgeNetworkTracingStub::ListInterconnectAttachments(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::ListInterconnectAttachmentsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "ListInterconnectAttachments");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ListInterconnectAttachments(context, options, request));
}

StatusOr<google::cloud::edgenetwork::v1::InterconnectAttachment>
EdgeNetworkTracingStub::GetInterconnectAttachment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::GetInterconnectAttachmentRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "GetInterconnectAttachment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->GetInterconnectAttachment(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
EdgeNetworkTracingStub::AsyncCreateInterconnectAttachment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgenetwork::v1::CreateInterconnectAttachmentRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "CreateInterconnectAttachment");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateInterconnectAttachment(
      cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
EdgeNetworkTracingStub::CreateInterconnectAttachment(
    grpc::ClientContext& context, Options options,
    google::cloud::edgenetwork::v1::CreateInterconnectAttachmentRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "CreateInterconnectAttachment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->CreateInterconnectAttachment(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
EdgeNetworkTracingStub::AsyncDeleteInterconnectAttachment(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgenetwork::v1::DeleteInterconnectAttachmentRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "DeleteInterconnectAttachment");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteInterconnectAttachment(
      cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
EdgeNetworkTracingStub::DeleteInterconnectAttachment(
    grpc::ClientContext& context, Options options,
    google::cloud::edgenetwork::v1::DeleteInterconnectAttachmentRequest const&
        request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "DeleteInterconnectAttachment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->DeleteInterconnectAttachment(context, options, request));
}

StatusOr<google::cloud::edgenetwork::v1::ListRoutersResponse>
EdgeNetworkTracingStub::ListRouters(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::ListRoutersRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "ListRouters");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListRouters(context, options, request));
}

StatusOr<google::cloud::edgenetwork::v1::Router>
EdgeNetworkTracingStub::GetRouter(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::GetRouterRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "GetRouter");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetRouter(context, options, request));
}

StatusOr<google::cloud::edgenetwork::v1::DiagnoseRouterResponse>
EdgeNetworkTracingStub::DiagnoseRouter(
    grpc::ClientContext& context, Options const& options,
    google::cloud::edgenetwork::v1::DiagnoseRouterRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "DiagnoseRouter");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DiagnoseRouter(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
EdgeNetworkTracingStub::AsyncCreateRouter(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgenetwork::v1::CreateRouterRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "CreateRouter");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateRouter(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation> EdgeNetworkTracingStub::CreateRouter(
    grpc::ClientContext& context, Options options,
    google::cloud::edgenetwork::v1::CreateRouterRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "CreateRouter");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateRouter(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
EdgeNetworkTracingStub::AsyncUpdateRouter(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgenetwork::v1::UpdateRouterRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "UpdateRouter");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateRouter(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation> EdgeNetworkTracingStub::UpdateRouter(
    grpc::ClientContext& context, Options options,
    google::cloud::edgenetwork::v1::UpdateRouterRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "UpdateRouter");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateRouter(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
EdgeNetworkTracingStub::AsyncDeleteRouter(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::edgenetwork::v1::DeleteRouterRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "DeleteRouter");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteRouter(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation> EdgeNetworkTracingStub::DeleteRouter(
    grpc::ClientContext& context, Options options,
    google::cloud::edgenetwork::v1::DeleteRouterRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "DeleteRouter");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteRouter(context, options, request));
}

StatusOr<google::cloud::location::ListLocationsResponse>
EdgeNetworkTracingStub::ListLocations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::ListLocationsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "ListLocations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListLocations(context, options, request));
}

StatusOr<google::cloud::location::Location> EdgeNetworkTracingStub::GetLocation(
    grpc::ClientContext& context, Options const& options,
    google::cloud::location::GetLocationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "GetLocation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetLocation(context, options, request));
}

StatusOr<google::longrunning::ListOperationsResponse>
EdgeNetworkTracingStub::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::ListOperationsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "ListOperations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListOperations(context, options, request));
}

StatusOr<google::longrunning::Operation> EdgeNetworkTracingStub::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetOperation(context, options, request));
}

Status EdgeNetworkTracingStub::DeleteOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::DeleteOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "DeleteOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteOperation(context, options, request));
}

Status EdgeNetworkTracingStub::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.edgenetwork.v1.EdgeNetwork",
                                     "CancelOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CancelOperation(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
EdgeNetworkTracingStub::AsyncGetOperation(
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

future<Status> EdgeNetworkTracingStub::AsyncCancelOperation(
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

std::shared_ptr<EdgeNetworkStub> MakeEdgeNetworkTracingStub(
    std::shared_ptr<EdgeNetworkStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<EdgeNetworkTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace edgenetwork_v1_internal
}  // namespace cloud
}  // namespace google
