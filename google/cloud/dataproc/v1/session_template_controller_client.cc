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
// source: google/cloud/dataproc/v1/session_templates.proto

#include "google/cloud/dataproc/v1/session_template_controller_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dataproc_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

SessionTemplateControllerClient::SessionTemplateControllerClient(
    std::shared_ptr<SessionTemplateControllerConnection> connection,
    Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
SessionTemplateControllerClient::~SessionTemplateControllerClient() = default;

StatusOr<google::cloud::dataproc::v1::SessionTemplate>
SessionTemplateControllerClient::CreateSessionTemplate(
    std::string const& parent,
    google::cloud::dataproc::v1::SessionTemplate const& session_template,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataproc::v1::CreateSessionTemplateRequest request;
  request.set_parent(parent);
  *request.mutable_session_template() = session_template;
  return connection_->CreateSessionTemplate(request);
}

StatusOr<google::cloud::dataproc::v1::SessionTemplate>
SessionTemplateControllerClient::CreateSessionTemplate(
    google::cloud::dataproc::v1::CreateSessionTemplateRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CreateSessionTemplate(request);
}

StatusOr<google::cloud::dataproc::v1::SessionTemplate>
SessionTemplateControllerClient::UpdateSessionTemplate(
    google::cloud::dataproc::v1::SessionTemplate const& session_template,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataproc::v1::UpdateSessionTemplateRequest request;
  *request.mutable_session_template() = session_template;
  return connection_->UpdateSessionTemplate(request);
}

StatusOr<google::cloud::dataproc::v1::SessionTemplate>
SessionTemplateControllerClient::UpdateSessionTemplate(
    google::cloud::dataproc::v1::UpdateSessionTemplateRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->UpdateSessionTemplate(request);
}

StatusOr<google::cloud::dataproc::v1::SessionTemplate>
SessionTemplateControllerClient::GetSessionTemplate(std::string const& name,
                                                    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataproc::v1::GetSessionTemplateRequest request;
  request.set_name(name);
  return connection_->GetSessionTemplate(request);
}

StatusOr<google::cloud::dataproc::v1::SessionTemplate>
SessionTemplateControllerClient::GetSessionTemplate(
    google::cloud::dataproc::v1::GetSessionTemplateRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetSessionTemplate(request);
}

StreamRange<google::cloud::dataproc::v1::SessionTemplate>
SessionTemplateControllerClient::ListSessionTemplates(std::string const& parent,
                                                      Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataproc::v1::ListSessionTemplatesRequest request;
  request.set_parent(parent);
  return connection_->ListSessionTemplates(request);
}

StreamRange<google::cloud::dataproc::v1::SessionTemplate>
SessionTemplateControllerClient::ListSessionTemplates(
    google::cloud::dataproc::v1::ListSessionTemplatesRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListSessionTemplates(std::move(request));
}

Status SessionTemplateControllerClient::DeleteSessionTemplate(
    std::string const& name, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::dataproc::v1::DeleteSessionTemplateRequest request;
  request.set_name(name);
  return connection_->DeleteSessionTemplate(request);
}

Status SessionTemplateControllerClient::DeleteSessionTemplate(
    google::cloud::dataproc::v1::DeleteSessionTemplateRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteSessionTemplate(request);
}

StatusOr<google::iam::v1::Policy> SessionTemplateControllerClient::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetIamPolicy(request);
}

StatusOr<google::iam::v1::Policy> SessionTemplateControllerClient::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetIamPolicy(request);
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
SessionTemplateControllerClient::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TestIamPermissions(request);
}

StreamRange<google::longrunning::Operation>
SessionTemplateControllerClient::ListOperations(std::string const& name,
                                                std::string const& filter,
                                                Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::ListOperationsRequest request;
  request.set_name(name);
  request.set_filter(filter);
  return connection_->ListOperations(request);
}

StreamRange<google::longrunning::Operation>
SessionTemplateControllerClient::ListOperations(
    google::longrunning::ListOperationsRequest request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListOperations(std::move(request));
}

StatusOr<google::longrunning::Operation>
SessionTemplateControllerClient::GetOperation(std::string const& name,
                                              Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::GetOperationRequest request;
  request.set_name(name);
  return connection_->GetOperation(request);
}

StatusOr<google::longrunning::Operation>
SessionTemplateControllerClient::GetOperation(
    google::longrunning::GetOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetOperation(request);
}

Status SessionTemplateControllerClient::DeleteOperation(std::string const& name,
                                                        Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::DeleteOperationRequest request;
  request.set_name(name);
  return connection_->DeleteOperation(request);
}

Status SessionTemplateControllerClient::DeleteOperation(
    google::longrunning::DeleteOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteOperation(request);
}

Status SessionTemplateControllerClient::CancelOperation(std::string const& name,
                                                        Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::longrunning::CancelOperationRequest request;
  request.set_name(name);
  return connection_->CancelOperation(request);
}

Status SessionTemplateControllerClient::CancelOperation(
    google::longrunning::CancelOperationRequest const& request, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->CancelOperation(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc_v1
}  // namespace cloud
}  // namespace google
