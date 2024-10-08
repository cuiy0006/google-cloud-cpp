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
// source: google/cloud/dialogflow/v2/conversation_dataset.proto

#include "google/cloud/dialogflow_es/internal/conversation_datasets_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_es_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ConversationDatasetsTracingConnection::ConversationDatasetsTracingConnection(
    std::shared_ptr<dialogflow_es::ConversationDatasetsConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::dialogflow::v2::ConversationDataset>>
ConversationDatasetsTracingConnection::CreateConversationDataset(
    google::cloud::dialogflow::v2::CreateConversationDatasetRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationDatasetsConnection::"
      "CreateConversationDataset");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateConversationDataset(request));
}

StatusOr<google::longrunning::Operation>
ConversationDatasetsTracingConnection::CreateConversationDataset(
    NoAwaitTag,
    google::cloud::dialogflow::v2::CreateConversationDatasetRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationDatasetsConnection::"
      "CreateConversationDataset");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->CreateConversationDataset(NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::dialogflow::v2::ConversationDataset>>
ConversationDatasetsTracingConnection::CreateConversationDataset(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationDatasetsConnection::"
      "CreateConversationDataset");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->CreateConversationDataset(operation));
}

StatusOr<google::cloud::dialogflow::v2::ConversationDataset>
ConversationDatasetsTracingConnection::GetConversationDataset(
    google::cloud::dialogflow::v2::GetConversationDatasetRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationDatasetsConnection::GetConversationDataset");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetConversationDataset(request));
}

StreamRange<google::cloud::dialogflow::v2::ConversationDataset>
ConversationDatasetsTracingConnection::ListConversationDatasets(
    google::cloud::dialogflow::v2::ListConversationDatasetsRequest request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationDatasetsConnection::"
      "ListConversationDatasets");
  internal::OTelScope scope(span);
  auto sr = child_->ListConversationDatasets(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::dialogflow::v2::ConversationDataset>(std::move(span),
                                                          std::move(sr));
}

future<StatusOr<
    google::cloud::dialogflow::v2::DeleteConversationDatasetOperationMetadata>>
ConversationDatasetsTracingConnection::DeleteConversationDataset(
    google::cloud::dialogflow::v2::DeleteConversationDatasetRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationDatasetsConnection::"
      "DeleteConversationDataset");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteConversationDataset(request));
}

StatusOr<google::longrunning::Operation>
ConversationDatasetsTracingConnection::DeleteConversationDataset(
    NoAwaitTag,
    google::cloud::dialogflow::v2::DeleteConversationDatasetRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationDatasetsConnection::"
      "DeleteConversationDataset");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->DeleteConversationDataset(NoAwaitTag{}, request));
}

future<StatusOr<
    google::cloud::dialogflow::v2::DeleteConversationDatasetOperationMetadata>>
ConversationDatasetsTracingConnection::DeleteConversationDataset(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationDatasetsConnection::"
      "DeleteConversationDataset");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->DeleteConversationDataset(operation));
}

future<StatusOr<
    google::cloud::dialogflow::v2::ImportConversationDataOperationResponse>>
ConversationDatasetsTracingConnection::ImportConversationData(
    google::cloud::dialogflow::v2::ImportConversationDataRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationDatasetsConnection::ImportConversationData");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ImportConversationData(request));
}

StatusOr<google::longrunning::Operation>
ConversationDatasetsTracingConnection::ImportConversationData(
    NoAwaitTag,
    google::cloud::dialogflow::v2::ImportConversationDataRequest const&
        request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationDatasetsConnection::ImportConversationData");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span, child_->ImportConversationData(NoAwaitTag{}, request));
}

future<StatusOr<
    google::cloud::dialogflow::v2::ImportConversationDataOperationResponse>>
ConversationDatasetsTracingConnection::ImportConversationData(
    google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationDatasetsConnection::ImportConversationData");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span),
                           child_->ImportConversationData(operation));
}

StreamRange<google::cloud::location::Location>
ConversationDatasetsTracingConnection::ListLocations(
    google::cloud::location::ListLocationsRequest request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationDatasetsConnection::ListLocations");
  internal::OTelScope scope(span);
  auto sr = child_->ListLocations(std::move(request));
  return internal::MakeTracedStreamRange<google::cloud::location::Location>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::location::Location>
ConversationDatasetsTracingConnection::GetLocation(
    google::cloud::location::GetLocationRequest const& request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationDatasetsConnection::GetLocation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetLocation(request));
}

StreamRange<google::longrunning::Operation>
ConversationDatasetsTracingConnection::ListOperations(
    google::longrunning::ListOperationsRequest request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationDatasetsConnection::ListOperations");
  internal::OTelScope scope(span);
  auto sr = child_->ListOperations(std::move(request));
  return internal::MakeTracedStreamRange<google::longrunning::Operation>(
      std::move(span), std::move(sr));
}

StatusOr<google::longrunning::Operation>
ConversationDatasetsTracingConnection::GetOperation(
    google::longrunning::GetOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationDatasetsConnection::GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetOperation(request));
}

Status ConversationDatasetsTracingConnection::CancelOperation(
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpan(
      "dialogflow_es::ConversationDatasetsConnection::CancelOperation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CancelOperation(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<dialogflow_es::ConversationDatasetsConnection>
MakeConversationDatasetsTracingConnection(
    std::shared_ptr<dialogflow_es::ConversationDatasetsConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<ConversationDatasetsTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_internal
}  // namespace cloud
}  // namespace google
