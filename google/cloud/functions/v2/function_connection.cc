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
// source: google/cloud/functions/v2/functions.proto

#include "google/cloud/functions/v2/function_connection.h"
#include "google/cloud/functions/v2/function_options.h"
#include "google/cloud/functions/v2/internal/function_connection_impl.h"
#include "google/cloud/functions/v2/internal/function_option_defaults.h"
#include "google/cloud/functions/v2/internal/function_stub_factory.h"
#include "google/cloud/functions/v2/internal/function_tracing_connection.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace functions_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

FunctionServiceConnection::~FunctionServiceConnection() = default;

StatusOr<google::cloud::functions::v2::Function>
FunctionServiceConnection::GetFunction(
    google::cloud::functions::v2::GetFunctionRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::functions::v2::Function>
FunctionServiceConnection::ListFunctions(
    google::cloud::functions::v2::
        ListFunctionsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::functions::v2::Function>>();
}

future<StatusOr<google::cloud::functions::v2::Function>>
FunctionServiceConnection::CreateFunction(
    google::cloud::functions::v2::CreateFunctionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::functions::v2::Function>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
FunctionServiceConnection::CreateFunction(
    NoAwaitTag, google::cloud::functions::v2::CreateFunctionRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::functions::v2::Function>>
FunctionServiceConnection::CreateFunction(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::functions::v2::Function>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::functions::v2::Function>>
FunctionServiceConnection::UpdateFunction(
    google::cloud::functions::v2::UpdateFunctionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::functions::v2::Function>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
FunctionServiceConnection::UpdateFunction(
    NoAwaitTag, google::cloud::functions::v2::UpdateFunctionRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::functions::v2::Function>>
FunctionServiceConnection::UpdateFunction(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::functions::v2::Function>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::functions::v2::OperationMetadata>>
FunctionServiceConnection::DeleteFunction(
    google::cloud::functions::v2::DeleteFunctionRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::functions::v2::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::longrunning::Operation>
FunctionServiceConnection::DeleteFunction(
    NoAwaitTag, google::cloud::functions::v2::DeleteFunctionRequest const&) {
  return StatusOr<google::longrunning::Operation>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

future<StatusOr<google::cloud::functions::v2::OperationMetadata>>
FunctionServiceConnection::DeleteFunction(
    google::longrunning::Operation const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::functions::v2::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::functions::v2::GenerateUploadUrlResponse>
FunctionServiceConnection::GenerateUploadUrl(
    google::cloud::functions::v2::GenerateUploadUrlRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::functions::v2::GenerateDownloadUrlResponse>
FunctionServiceConnection::GenerateDownloadUrl(
    google::cloud::functions::v2::GenerateDownloadUrlRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::functions::v2::ListRuntimesResponse>
FunctionServiceConnection::ListRuntimes(
    google::cloud::functions::v2::ListRuntimesRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::location::Location>
FunctionServiceConnection::ListLocations(
    google::cloud::location::
        ListLocationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::location::Location>>();
}

StatusOr<google::iam::v1::Policy> FunctionServiceConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy> FunctionServiceConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
FunctionServiceConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::longrunning::Operation>
FunctionServiceConnection::ListOperations(
    google::longrunning::
        ListOperationsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::longrunning::Operation>>();
}

StatusOr<google::longrunning::Operation>
FunctionServiceConnection::GetOperation(
    google::longrunning::GetOperationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

std::shared_ptr<FunctionServiceConnection> MakeFunctionServiceConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 FunctionServicePolicyOptionList>(options,
                                                                  __func__);
  options =
      functions_v2_internal::FunctionServiceDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto auth = internal::CreateAuthenticationStrategy(background->cq(), options);
  auto stub = functions_v2_internal::CreateDefaultFunctionServiceStub(
      std::move(auth), options);
  return functions_v2_internal::MakeFunctionServiceTracingConnection(
      std::make_shared<functions_v2_internal::FunctionServiceConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace functions_v2
}  // namespace cloud
}  // namespace google
