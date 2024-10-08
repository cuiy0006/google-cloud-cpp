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
// source: google/cloud/contentwarehouse/v1/pipeline_service.proto

#include "google/cloud/contentwarehouse/v1/pipeline_connection.h"
#include "google/cloud/contentwarehouse/v1/internal/pipeline_connection_impl.h"
#include "google/cloud/contentwarehouse/v1/internal/pipeline_option_defaults.h"
#include "google/cloud/contentwarehouse/v1/internal/pipeline_stub_factory.h"
#include "google/cloud/contentwarehouse/v1/internal/pipeline_tracing_connection.h"
#include "google/cloud/contentwarehouse/v1/pipeline_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace contentwarehouse_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

PipelineServiceConnection::~PipelineServiceConnection() = default;

future<StatusOr<google::cloud::contentwarehouse::v1::RunPipelineResponse>>
PipelineServiceConnection::RunPipeline(
    google::cloud::contentwarehouse::v1::RunPipelineRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::contentwarehouse::v1::RunPipelineResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation> PipelineServiceConnection::RunPipeline(
    NoAwaitTag,
    google::cloud::contentwarehouse::v1::RunPipelineRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::contentwarehouse::v1::RunPipelineResponse>>
PipelineServiceConnection::RunPipeline(google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::contentwarehouse::v1::RunPipelineResponse>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
PipelineServiceConnection::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<PipelineServiceConnection> MakePipelineServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 PipelineServicePolicyOptionList>(options,
                                                                  __func__);
  options = contentwarehouse_v1_internal::PipelineServiceDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = contentwarehouse_v1_internal::CreateDefaultPipelineServiceStub(
      std::move(auth), options);
  return contentwarehouse_v1_internal::MakePipelineServiceTracingConnection(
      std::make_shared<
          contentwarehouse_v1_internal::PipelineServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace contentwarehouse_v1
}  // namespace cloud
}  // namespace google
