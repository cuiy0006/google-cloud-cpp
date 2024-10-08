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
// source:
// google/cloud/beyondcorp/appconnections/v1/app_connections_service.proto

#include "google/cloud/beyondcorp/appconnections/v1/internal/app_connections_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace beyondcorp_appconnections_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

AppConnectionsServiceTracingConnection::AppConnectionsServiceTracingConnection(
    std::shared_ptr<
        beyondcorp_appconnections_v1::AppConnectionsServiceConnection>
        child)
    : child_(std::move(child)) {}

StreamRange<google::cloud::beyondcorp::appconnections::v1::AppConnection>
AppConnectionsServiceTracingConnection::ListAppConnections(
    google::cloud::beyondcorp::appconnections::v1::ListAppConnectionsRequest
        request) {
  auto span = internal::MakeSpan(
      "beyondcorp_appconnections_v1::AppConnectionsServiceConnection::"
      "ListAppConnections");
  internal::OTelScope scope(span);
  auto sr = child_->ListAppConnections(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::beyondcorp::appconnections::v1::AppConnection>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>
AppConnectionsServiceTracingConnection::GetAppConnection(
    google::cloud::beyondcorp::appconnections::v1::
        GetAppConnectionRequest const& request) {
  auto span = internal::MakeSpan(
      "beyondcorp_appconnections_v1::AppConnectionsServiceConnection::"
      "GetAppConnection");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetAppConnection(request));
}

future<StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>>
AppConnectionsServiceTracingConnection::CreateAppConnection(
    google::cloud::beyondcorp::appconnections::v1::
        CreateAppConnectionRequest const& request) {
  auto span = internal::MakeSpan(
      "beyondcorp_appconnections_v1::AppConnectionsServiceConnection::"
      "CreateAppConnection");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateAppConnection(request));
}

StatusOr<google::longrunning::Operation>
AppConnectionsServiceTracingConnection::CreateAppConnection(
    NoAwaitTag, google::cloud::beyondcorp::appconnections::v1::
                    CreateAppConnectionRequest const& request) {
  auto span = internal::MakeSpan(
      "beyondcorp_appconnections_v1::AppConnectionsServiceConnection::"
      "CreateAppConnection");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->CreateAppConnection(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>>
AppConnectionsServiceTracingConnection::CreateAppConnection(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "beyondcorp_appconnections_v1::AppConnectionsServiceConnection::"
      "CreateAppConnection");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateAppConnection(operation));
}

future<StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>>
AppConnectionsServiceTracingConnection::UpdateAppConnection(
    google::cloud::beyondcorp::appconnections::v1::
        UpdateAppConnectionRequest const& request) {
  auto span = internal::MakeSpan(
      "beyondcorp_appconnections_v1::AppConnectionsServiceConnection::"
      "UpdateAppConnection");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateAppConnection(request));
}

StatusOr<google::longrunning::Operation>
AppConnectionsServiceTracingConnection::UpdateAppConnection(
    NoAwaitTag, google::cloud::beyondcorp::appconnections::v1::
                    UpdateAppConnectionRequest const& request) {
  auto span = internal::MakeSpan(
      "beyondcorp_appconnections_v1::AppConnectionsServiceConnection::"
      "UpdateAppConnection");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->UpdateAppConnection(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::beyondcorp::appconnections::v1::AppConnection>>
AppConnectionsServiceTracingConnection::UpdateAppConnection(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "beyondcorp_appconnections_v1::AppConnectionsServiceConnection::"
      "UpdateAppConnection");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UpdateAppConnection(operation));
}

future<StatusOr<google::cloud::beyondcorp::appconnections::v1::
                    AppConnectionOperationMetadata>>
AppConnectionsServiceTracingConnection::DeleteAppConnection(
    google::cloud::beyondcorp::appconnections::v1::
        DeleteAppConnectionRequest const& request) {
  auto span = internal::MakeSpan(
      "beyondcorp_appconnections_v1::AppConnectionsServiceConnection::"
      "DeleteAppConnection");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteAppConnection(request));
}

StatusOr<google::longrunning::Operation>
AppConnectionsServiceTracingConnection::DeleteAppConnection(
    NoAwaitTag, google::cloud::beyondcorp::appconnections::v1::
                    DeleteAppConnectionRequest const& request) {
  auto span = internal::MakeSpan(
      "beyondcorp_appconnections_v1::AppConnectionsServiceConnection::"
      "DeleteAppConnection");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->DeleteAppConnection(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::beyondcorp::appconnections::v1::
                    AppConnectionOperationMetadata>>
AppConnectionsServiceTracingConnection::DeleteAppConnection(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "beyondcorp_appconnections_v1::AppConnectionsServiceConnection::"
      "DeleteAppConnection");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteAppConnection(operation));
}

StreamRange<google::cloud::beyondcorp::appconnections::v1::
                ResolveAppConnectionsResponse::AppConnectionDetails>
AppConnectionsServiceTracingConnection::ResolveAppConnections(
    google::cloud::beyondcorp::appconnections::v1::ResolveAppConnectionsRequest
        request) {
  auto span = internal::MakeSpan(
      "beyondcorp_appconnections_v1::AppConnectionsServiceConnection::"
      "ResolveAppConnections");
  internal::OTelScope scope(span);
  auto sr = child_->ResolveAppConnections(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::beyondcorp::appconnections::v1::
          ResolveAppConnectionsResponse::AppConnectionDetails>(std::move(span),
                                                               std::move(sr));
}

StreamRange<google::cloud::location::Location>
AppConnectionsServiceTracingConnection::ListLocations(
    google::cloud::location::ListLocationsRequest request) {
  auto span = internal::MakeSpan(
      "beyondcorp_appconnections_v1::AppConnectionsServiceConnection::"
      "ListLocations");
  internal::OTelScope scope(span);
  auto sr = child_->ListLocations(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::location::Location>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::location::Location>
AppConnectionsServiceTracingConnection::GetLocation(
    google::cloud::location::GetLocationRequest const& request) {
  auto span = internal::MakeSpan(
      "beyondcorp_appconnections_v1::AppConnectionsServiceConnection::"
      "GetLocation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetLocation(request));
}

StatusOr<google::iam::v1::Policy>
AppConnectionsServiceTracingConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "beyondcorp_appconnections_v1::AppConnectionsServiceConnection::"
      "SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

StatusOr<google::iam::v1::Policy>
AppConnectionsServiceTracingConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "beyondcorp_appconnections_v1::AppConnectionsServiceConnection::"
      "GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
AppConnectionsServiceTracingConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpan(
      "beyondcorp_appconnections_v1::AppConnectionsServiceConnection::"
      "TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

StreamRange<google::longrunning::Operation>
AppConnectionsServiceTracingConnection::ListOperations(
    google::longrunning::ListOperationsRequest request) {
  auto span = internal::MakeSpan(
      "beyondcorp_appconnections_v1::AppConnectionsServiceConnection::"
      "ListOperations");
  internal::OTelScope scope(span);
  auto sr = child_->ListOperations(std::move(request));
  return internal::MakeTracedStreamRange<google::longrunning::Operation>(
      std::move(span), std::move(sr));
}

StatusOr<google::longrunning::Operation>
AppConnectionsServiceTracingConnection::GetOperation(
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "beyondcorp_appconnections_v1::AppConnectionsServiceConnection::"
      "GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetOperation(request));
}

Status AppConnectionsServiceTracingConnection::DeleteOperation(
    google::longrunning::DeleteOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "beyondcorp_appconnections_v1::AppConnectionsServiceConnection::"
      "DeleteOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteOperation(request));
}

Status AppConnectionsServiceTracingConnection::CancelOperation(
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "beyondcorp_appconnections_v1::AppConnectionsServiceConnection::"
      "CancelOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CancelOperation(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<beyondcorp_appconnections_v1::AppConnectionsServiceConnection>
MakeAppConnectionsServiceTracingConnection(
    std::shared_ptr<
        beyondcorp_appconnections_v1::AppConnectionsServiceConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<AppConnectionsServiceTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace beyondcorp_appconnections_v1_internal
}  // namespace cloud
}  // namespace google
