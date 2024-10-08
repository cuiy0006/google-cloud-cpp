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
// source: google/cloud/documentai/v1/document_processor_service.proto

#include "google/cloud/documentai/v1/internal/document_processor_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace documentai_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DocumentProcessorServiceTracingConnection::
    DocumentProcessorServiceTracingConnection(
        std::shared_ptr<documentai_v1::DocumentProcessorServiceConnection>
            child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::documentai::v1::ProcessResponse>
DocumentProcessorServiceTracingConnection::ProcessDocument(
    google::cloud::documentai::v1::ProcessRequest const& request) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::ProcessDocument");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ProcessDocument(request));
}

future<StatusOr<google::cloud::documentai::v1::BatchProcessResponse>>
DocumentProcessorServiceTracingConnection::BatchProcessDocuments(
    google::cloud::documentai::v1::BatchProcessRequest const& request) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::"
      "BatchProcessDocuments");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->BatchProcessDocuments(request));
}

StatusOr<google::longrunning::Operation>
DocumentProcessorServiceTracingConnection::BatchProcessDocuments(
    NoAwaitTag,
    google::cloud::documentai::v1::BatchProcessRequest const& request) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::"
      "BatchProcessDocuments");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->BatchProcessDocuments(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::documentai::v1::BatchProcessResponse>>
DocumentProcessorServiceTracingConnection::BatchProcessDocuments(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::"
      "BatchProcessDocuments");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->BatchProcessDocuments(operation));
}

StatusOr<google::cloud::documentai::v1::FetchProcessorTypesResponse>
DocumentProcessorServiceTracingConnection::FetchProcessorTypes(
    google::cloud::documentai::v1::FetchProcessorTypesRequest const& request) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::FetchProcessorTypes");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->FetchProcessorTypes(request));
}

StreamRange<google::cloud::documentai::v1::ProcessorType>
DocumentProcessorServiceTracingConnection::ListProcessorTypes(
    google::cloud::documentai::v1::ListProcessorTypesRequest request) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::ListProcessorTypes");
  internal::OTelScope scope(span);
  auto sr = child_->ListProcessorTypes(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::documentai::v1::ProcessorType>(std::move(span),
                                                    std::move(sr));
}

StatusOr<google::cloud::documentai::v1::ProcessorType>
DocumentProcessorServiceTracingConnection::GetProcessorType(
    google::cloud::documentai::v1::GetProcessorTypeRequest const& request) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::GetProcessorType");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetProcessorType(request));
}

StreamRange<google::cloud::documentai::v1::Processor>
DocumentProcessorServiceTracingConnection::ListProcessors(
    google::cloud::documentai::v1::ListProcessorsRequest request) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::ListProcessors");
  internal::OTelScope scope(span);
  auto sr = child_->ListProcessors(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::documentai::v1::Processor>(std::move(span), std::move(sr));
}

StatusOr<google::cloud::documentai::v1::Processor>
DocumentProcessorServiceTracingConnection::GetProcessor(
    google::cloud::documentai::v1::GetProcessorRequest const& request) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::GetProcessor");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetProcessor(request));
}

future<StatusOr<google::cloud::documentai::v1::TrainProcessorVersionResponse>>
DocumentProcessorServiceTracingConnection::TrainProcessorVersion(
    google::cloud::documentai::v1::TrainProcessorVersionRequest const&
        request) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::"
      "TrainProcessorVersion");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->TrainProcessorVersion(request));
}

StatusOr<google::longrunning::Operation>
DocumentProcessorServiceTracingConnection::TrainProcessorVersion(
    NoAwaitTag,
    google::cloud::documentai::v1::TrainProcessorVersionRequest const&
        request) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::"
      "TrainProcessorVersion");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->TrainProcessorVersion(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::documentai::v1::TrainProcessorVersionResponse>>
DocumentProcessorServiceTracingConnection::TrainProcessorVersion(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::"
      "TrainProcessorVersion");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->TrainProcessorVersion(operation));
}

StatusOr<google::cloud::documentai::v1::ProcessorVersion>
DocumentProcessorServiceTracingConnection::GetProcessorVersion(
    google::cloud::documentai::v1::GetProcessorVersionRequest const& request) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::GetProcessorVersion");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetProcessorVersion(request));
}

StreamRange<google::cloud::documentai::v1::ProcessorVersion>
DocumentProcessorServiceTracingConnection::ListProcessorVersions(
    google::cloud::documentai::v1::ListProcessorVersionsRequest request) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::"
      "ListProcessorVersions");
  internal::OTelScope scope(span);
  auto sr = child_->ListProcessorVersions(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::documentai::v1::ProcessorVersion>(std::move(span),
                                                       std::move(sr));
}

future<StatusOr<google::cloud::documentai::v1::DeleteProcessorVersionMetadata>>
DocumentProcessorServiceTracingConnection::DeleteProcessorVersion(
    google::cloud::documentai::v1::DeleteProcessorVersionRequest const&
        request) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::"
      "DeleteProcessorVersion");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteProcessorVersion(request));
}

StatusOr<google::longrunning::Operation>
DocumentProcessorServiceTracingConnection::DeleteProcessorVersion(
    NoAwaitTag,
    google::cloud::documentai::v1::DeleteProcessorVersionRequest const&
        request) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::"
      "DeleteProcessorVersion");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->DeleteProcessorVersion(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::documentai::v1::DeleteProcessorVersionMetadata>>
DocumentProcessorServiceTracingConnection::DeleteProcessorVersion(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::"
      "DeleteProcessorVersion");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteProcessorVersion(operation));
}

future<StatusOr<google::cloud::documentai::v1::DeployProcessorVersionResponse>>
DocumentProcessorServiceTracingConnection::DeployProcessorVersion(
    google::cloud::documentai::v1::DeployProcessorVersionRequest const&
        request) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::"
      "DeployProcessorVersion");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeployProcessorVersion(request));
}

StatusOr<google::longrunning::Operation>
DocumentProcessorServiceTracingConnection::DeployProcessorVersion(
    NoAwaitTag,
    google::cloud::documentai::v1::DeployProcessorVersionRequest const&
        request) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::"
      "DeployProcessorVersion");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->DeployProcessorVersion(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::documentai::v1::DeployProcessorVersionResponse>>
DocumentProcessorServiceTracingConnection::DeployProcessorVersion(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::"
      "DeployProcessorVersion");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeployProcessorVersion(operation));
}

future<
    StatusOr<google::cloud::documentai::v1::UndeployProcessorVersionResponse>>
DocumentProcessorServiceTracingConnection::UndeployProcessorVersion(
    google::cloud::documentai::v1::UndeployProcessorVersionRequest const&
        request) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::"
      "UndeployProcessorVersion");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UndeployProcessorVersion(request));
}

StatusOr<google::longrunning::Operation>
DocumentProcessorServiceTracingConnection::UndeployProcessorVersion(
    NoAwaitTag,
    google::cloud::documentai::v1::UndeployProcessorVersionRequest const&
        request) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::"
      "UndeployProcessorVersion");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->UndeployProcessorVersion(NoAwaitTag{}, request));
}

future<
    StatusOr<google::cloud::documentai::v1::UndeployProcessorVersionResponse>>
DocumentProcessorServiceTracingConnection::UndeployProcessorVersion(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::"
      "UndeployProcessorVersion");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->UndeployProcessorVersion(operation));
}

StatusOr<google::cloud::documentai::v1::Processor>
DocumentProcessorServiceTracingConnection::CreateProcessor(
    google::cloud::documentai::v1::CreateProcessorRequest const& request) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::CreateProcessor");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateProcessor(request));
}

future<StatusOr<google::cloud::documentai::v1::DeleteProcessorMetadata>>
DocumentProcessorServiceTracingConnection::DeleteProcessor(
    google::cloud::documentai::v1::DeleteProcessorRequest const& request) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::DeleteProcessor");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteProcessor(request));
}

StatusOr<google::longrunning::Operation>
DocumentProcessorServiceTracingConnection::DeleteProcessor(
    NoAwaitTag,
    google::cloud::documentai::v1::DeleteProcessorRequest const& request) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::DeleteProcessor");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->DeleteProcessor(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::documentai::v1::DeleteProcessorMetadata>>
DocumentProcessorServiceTracingConnection::DeleteProcessor(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::DeleteProcessor");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DeleteProcessor(operation));
}

future<StatusOr<google::cloud::documentai::v1::EnableProcessorResponse>>
DocumentProcessorServiceTracingConnection::EnableProcessor(
    google::cloud::documentai::v1::EnableProcessorRequest const& request) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::EnableProcessor");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->EnableProcessor(request));
}

StatusOr<google::longrunning::Operation>
DocumentProcessorServiceTracingConnection::EnableProcessor(
    NoAwaitTag,
    google::cloud::documentai::v1::EnableProcessorRequest const& request) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::EnableProcessor");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->EnableProcessor(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::documentai::v1::EnableProcessorResponse>>
DocumentProcessorServiceTracingConnection::EnableProcessor(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::EnableProcessor");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->EnableProcessor(operation));
}

future<StatusOr<google::cloud::documentai::v1::DisableProcessorResponse>>
DocumentProcessorServiceTracingConnection::DisableProcessor(
    google::cloud::documentai::v1::DisableProcessorRequest const& request) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::DisableProcessor");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->DisableProcessor(request));
}

StatusOr<google::longrunning::Operation>
DocumentProcessorServiceTracingConnection::DisableProcessor(
    NoAwaitTag,
    google::cloud::documentai::v1::DisableProcessorRequest const& request) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::DisableProcessor");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->DisableProcessor(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::documentai::v1::DisableProcessorResponse>>
DocumentProcessorServiceTracingConnection::DisableProcessor(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::DisableProcessor");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DisableProcessor(operation));
}

future<
    StatusOr<google::cloud::documentai::v1::SetDefaultProcessorVersionResponse>>
DocumentProcessorServiceTracingConnection::SetDefaultProcessorVersion(
    google::cloud::documentai::v1::SetDefaultProcessorVersionRequest const&
        request) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::"
      "SetDefaultProcessorVersion");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->SetDefaultProcessorVersion(request));
}

StatusOr<google::longrunning::Operation>
DocumentProcessorServiceTracingConnection::SetDefaultProcessorVersion(
    NoAwaitTag,
    google::cloud::documentai::v1::SetDefaultProcessorVersionRequest const&
        request) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::"
      "SetDefaultProcessorVersion");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->SetDefaultProcessorVersion(NoAwaitTag{}, request));
}

future<
    StatusOr<google::cloud::documentai::v1::SetDefaultProcessorVersionResponse>>
DocumentProcessorServiceTracingConnection::SetDefaultProcessorVersion(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::"
      "SetDefaultProcessorVersion");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->SetDefaultProcessorVersion(operation));
}

future<StatusOr<google::cloud::documentai::v1::ReviewDocumentResponse>>
DocumentProcessorServiceTracingConnection::ReviewDocument(
    google::cloud::documentai::v1::ReviewDocumentRequest const& request) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::ReviewDocument");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->ReviewDocument(request));
}

StatusOr<google::longrunning::Operation>
DocumentProcessorServiceTracingConnection::ReviewDocument(
    NoAwaitTag,
    google::cloud::documentai::v1::ReviewDocumentRequest const& request) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::ReviewDocument");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(*span,
                           child_->ReviewDocument(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::documentai::v1::ReviewDocumentResponse>>
DocumentProcessorServiceTracingConnection::ReviewDocument(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::ReviewDocument");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->ReviewDocument(operation));
}

future<
    StatusOr<google::cloud::documentai::v1::EvaluateProcessorVersionResponse>>
DocumentProcessorServiceTracingConnection::EvaluateProcessorVersion(
    google::cloud::documentai::v1::EvaluateProcessorVersionRequest const&
        request) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::"
      "EvaluateProcessorVersion");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->EvaluateProcessorVersion(request));
}

StatusOr<google::longrunning::Operation>
DocumentProcessorServiceTracingConnection::EvaluateProcessorVersion(
    NoAwaitTag,
    google::cloud::documentai::v1::EvaluateProcessorVersionRequest const&
        request) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::"
      "EvaluateProcessorVersion");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->EvaluateProcessorVersion(NoAwaitTag{}, request));
}

future<
    StatusOr<google::cloud::documentai::v1::EvaluateProcessorVersionResponse>>
DocumentProcessorServiceTracingConnection::EvaluateProcessorVersion(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::"
      "EvaluateProcessorVersion");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->EvaluateProcessorVersion(operation));
}

StatusOr<google::cloud::documentai::v1::Evaluation>
DocumentProcessorServiceTracingConnection::GetEvaluation(
    google::cloud::documentai::v1::GetEvaluationRequest const& request) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::GetEvaluation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetEvaluation(request));
}

StreamRange<google::cloud::documentai::v1::Evaluation>
DocumentProcessorServiceTracingConnection::ListEvaluations(
    google::cloud::documentai::v1::ListEvaluationsRequest request) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::ListEvaluations");
  internal::OTelScope scope(span);
  auto sr = child_->ListEvaluations(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::documentai::v1::Evaluation>(std::move(span),
                                                 std::move(sr));
}

StreamRange<google::cloud::location::Location>
DocumentProcessorServiceTracingConnection::ListLocations(
    google::cloud::location::ListLocationsRequest request) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::ListLocations");
  internal::OTelScope scope(span);
  auto sr = child_->ListLocations(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::location::Location>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::location::Location>
DocumentProcessorServiceTracingConnection::GetLocation(
    google::cloud::location::GetLocationRequest const& request) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::GetLocation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetLocation(request));
}

StreamRange<google::longrunning::Operation>
DocumentProcessorServiceTracingConnection::ListOperations(
    google::longrunning::ListOperationsRequest request) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::ListOperations");
  internal::OTelScope scope(span);
  auto sr = child_->ListOperations(std::move(request));
  return internal::MakeTracedStreamRange<google::longrunning::Operation>(
      std::move(span), std::move(sr));
}

StatusOr<google::longrunning::Operation>
DocumentProcessorServiceTracingConnection::GetOperation(
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetOperation(request));
}

Status DocumentProcessorServiceTracingConnection::CancelOperation(
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "documentai_v1::DocumentProcessorServiceConnection::CancelOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CancelOperation(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<documentai_v1::DocumentProcessorServiceConnection>
MakeDocumentProcessorServiceTracingConnection(
    std::shared_ptr<documentai_v1::DocumentProcessorServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<DocumentProcessorServiceTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace documentai_v1_internal
}  // namespace cloud
}  // namespace google
