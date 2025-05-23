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
// source: google/devtools/containeranalysis/v1/containeranalysis.proto

#include "google/cloud/containeranalysis/v1/internal/container_analysis_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace containeranalysis_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ContainerAnalysisTracingConnection::ContainerAnalysisTracingConnection(
    std::shared_ptr<containeranalysis_v1::ContainerAnalysisConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::iam::v1::Policy>
ContainerAnalysisTracingConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "containeranalysis_v1::ContainerAnalysisConnection::SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

StatusOr<google::iam::v1::Policy>
ContainerAnalysisTracingConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "containeranalysis_v1::ContainerAnalysisConnection::GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
ContainerAnalysisTracingConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpan(
      "containeranalysis_v1::ContainerAnalysisConnection::TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

StatusOr<
    google::devtools::containeranalysis::v1::VulnerabilityOccurrencesSummary>
ContainerAnalysisTracingConnection::GetVulnerabilityOccurrencesSummary(
    google::devtools::containeranalysis::v1::
        GetVulnerabilityOccurrencesSummaryRequest const& request) {
  auto span = internal::MakeSpan(
      "containeranalysis_v1::ContainerAnalysisConnection::"
      "GetVulnerabilityOccurrencesSummary");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span,
                           child_->GetVulnerabilityOccurrencesSummary(request));
}

StatusOr<google::devtools::containeranalysis::v1::ExportSBOMResponse>
ContainerAnalysisTracingConnection::ExportSBOM(
    google::devtools::containeranalysis::v1::ExportSBOMRequest const& request) {
  auto span = internal::MakeSpan(
      "containeranalysis_v1::ContainerAnalysisConnection::ExportSBOM");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ExportSBOM(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<containeranalysis_v1::ContainerAnalysisConnection>
MakeContainerAnalysisTracingConnection(
    std::shared_ptr<containeranalysis_v1::ContainerAnalysisConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn =
        std::make_shared<ContainerAnalysisTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace containeranalysis_v1_internal
}  // namespace cloud
}  // namespace google
