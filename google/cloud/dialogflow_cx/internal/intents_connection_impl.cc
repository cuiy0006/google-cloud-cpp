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
// source: google/cloud/dialogflow/cx/v3/intent.proto

#include "google/cloud/dialogflow_cx/internal/intents_connection_impl.h"
#include "google/cloud/dialogflow_cx/internal/intents_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<dialogflow_cx::IntentsRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<dialogflow_cx::IntentsRetryPolicyOption>()->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<dialogflow_cx::IntentsBackoffPolicyOption>()->clone();
}

std::unique_ptr<dialogflow_cx::IntentsConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options.get<dialogflow_cx::IntentsConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<dialogflow_cx::IntentsPollingPolicyOption>()->clone();
}

}  // namespace

IntentsConnectionImpl::IntentsConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<dialogflow_cx_internal::IntentsStub> stub, Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      IntentsConnection::options())) {}

StreamRange<google::cloud::dialogflow::cx::v3::Intent>
IntentsConnectionImpl::ListIntents(
    google::cloud::dialogflow::cx::v3::ListIntentsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListIntents(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::dialogflow::cx::v3::Intent>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<dialogflow_cx::IntentsRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::dialogflow::cx::v3::ListIntentsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::cloud::dialogflow::cx::v3::ListIntentsRequest const&
                       request) {
              return stub->ListIntents(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::dialogflow::cx::v3::ListIntentsResponse r) {
        std::vector<google::cloud::dialogflow::cx::v3::Intent> result(
            r.intents().size());
        auto& messages = *r.mutable_intents();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::dialogflow::cx::v3::Intent>
IntentsConnectionImpl::GetIntent(
    google::cloud::dialogflow::cx::v3::GetIntentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetIntent(request),
      [this](
          grpc::ClientContext& context, Options const& options,
          google::cloud::dialogflow::cx::v3::GetIntentRequest const& request) {
        return stub_->GetIntent(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::dialogflow::cx::v3::Intent>
IntentsConnectionImpl::CreateIntent(
    google::cloud::dialogflow::cx::v3::CreateIntentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateIntent(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::cx::v3::CreateIntentRequest const&
                 request) {
        return stub_->CreateIntent(context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::dialogflow::cx::v3::Intent>
IntentsConnectionImpl::UpdateIntent(
    google::cloud::dialogflow::cx::v3::UpdateIntentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateIntent(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::cx::v3::UpdateIntentRequest const&
                 request) {
        return stub_->UpdateIntent(context, options, request);
      },
      *current, request, __func__);
}

Status IntentsConnectionImpl::DeleteIntent(
    google::cloud::dialogflow::cx::v3::DeleteIntentRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteIntent(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::cx::v3::DeleteIntentRequest const&
                 request) {
        return stub_->DeleteIntent(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::dialogflow::cx::v3::ImportIntentsResponse>>
IntentsConnectionImpl::ImportIntents(
    google::cloud::dialogflow::cx::v3::ImportIntentsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->ImportIntents(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::dialogflow::cx::v3::ImportIntentsResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::dialogflow::cx::v3::ImportIntentsRequest const&
              request) {
        return stub->AsyncImportIntents(cq, std::move(context),
                                        std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::dialogflow::cx::v3::ImportIntentsResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation> IntentsConnectionImpl::ImportIntents(
    NoAwaitTag,
    google::cloud::dialogflow::cx::v3::ImportIntentsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ImportIntents(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::cx::v3::ImportIntentsRequest const&
                 request) {
        return stub_->ImportIntents(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::dialogflow::cx::v3::ImportIntentsResponse>>
IntentsConnectionImpl::ImportIntents(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::cloud::dialogflow::cx::v3::
                   ImportIntentsMetadata>()) {
    return make_ready_future<
        StatusOr<google::cloud::dialogflow::cx::v3::ImportIntentsResponse>>(
        internal::InvalidArgumentError(
            "operation does not correspond to ImportIntents",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::dialogflow::cx::v3::ImportIntentsResponse>(
      background_->cq(), current, operation,
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::dialogflow::cx::v3::ImportIntentsResponse>,
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::dialogflow::cx::v3::ExportIntentsResponse>>
IntentsConnectionImpl::ExportIntents(
    google::cloud::dialogflow::cx::v3::ExportIntentsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto request_copy = request;
  auto const idempotent =
      idempotency_policy(*current)->ExportIntents(request_copy);
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::dialogflow::cx::v3::ExportIntentsResponse>(
      background_->cq(), current, std::move(request_copy),
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::cloud::dialogflow::cx::v3::ExportIntentsRequest const&
              request) {
        return stub->AsyncExportIntents(cq, std::move(context),
                                        std::move(options), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::dialogflow::cx::v3::ExportIntentsResponse>,
      retry_policy(*current), backoff_policy(*current), idempotent,
      polling_policy(*current), __func__);
}

StatusOr<google::longrunning::Operation> IntentsConnectionImpl::ExportIntents(
    NoAwaitTag,
    google::cloud::dialogflow::cx::v3::ExportIntentsRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->ExportIntents(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::dialogflow::cx::v3::ExportIntentsRequest const&
                 request) {
        return stub_->ExportIntents(context, options, request);
      },
      *current, request, __func__);
}

future<StatusOr<google::cloud::dialogflow::cx::v3::ExportIntentsResponse>>
IntentsConnectionImpl::ExportIntents(
    google::longrunning::Operation const& operation) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  if (!operation.metadata()
           .Is<typename google::cloud::dialogflow::cx::v3::
                   ExportIntentsMetadata>()) {
    return make_ready_future<
        StatusOr<google::cloud::dialogflow::cx::v3::ExportIntentsResponse>>(
        internal::InvalidArgumentError(
            "operation does not correspond to ExportIntents",
            GCP_ERROR_INFO().WithMetadata("operation",
                                          operation.metadata().DebugString())));
  }

  return google::cloud::internal::AsyncAwaitLongRunningOperation<
      google::cloud::dialogflow::cx::v3::ExportIntentsResponse>(
      background_->cq(), current, operation,
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::cloud::internal::ImmutableOptions options,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context),
                                       std::move(options), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::internal::ImmutableOptions options,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context),
                                          std::move(options), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::dialogflow::cx::v3::ExportIntentsResponse>,
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::location::Location>
IntentsConnectionImpl::ListLocations(
    google::cloud::location::ListLocationsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListLocations(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::location::Location>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<dialogflow_cx::IntentsRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::location::ListLocationsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context, Options const& options,
                google::cloud::location::ListLocationsRequest const& request) {
              return stub->ListLocations(context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::location::ListLocationsResponse r) {
        std::vector<google::cloud::location::Location> result(
            r.locations().size());
        auto& messages = *r.mutable_locations();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::location::Location> IntentsConnectionImpl::GetLocation(
    google::cloud::location::GetLocationRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetLocation(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::cloud::location::GetLocationRequest const& request) {
        return stub_->GetLocation(context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::longrunning::Operation>
IntentsConnectionImpl::ListOperations(
    google::longrunning::ListOperationsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListOperations(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::longrunning::Operation>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<dialogflow_cx::IntentsRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::longrunning::ListOperationsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context, Options const& options,
                   google::longrunning::ListOperationsRequest const& request) {
              return stub->ListOperations(context, options, request);
            },
            options, r, function_name);
      },
      [](google::longrunning::ListOperationsResponse r) {
        std::vector<google::longrunning::Operation> result(
            r.operations().size());
        auto& messages = *r.mutable_operations();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::longrunning::Operation> IntentsConnectionImpl::GetOperation(
    google::longrunning::GetOperationRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetOperation(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::GetOperationRequest const& request) {
        return stub_->GetOperation(context, options, request);
      },
      *current, request, __func__);
}

Status IntentsConnectionImpl::CancelOperation(
    google::longrunning::CancelOperationRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CancelOperation(request),
      [this](grpc::ClientContext& context, Options const& options,
             google::longrunning::CancelOperationRequest const& request) {
        return stub_->CancelOperation(context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
