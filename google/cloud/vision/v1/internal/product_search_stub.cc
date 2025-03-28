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
// source: google/cloud/vision/v1/product_search_service.proto

#include "google/cloud/vision/v1/internal/product_search_stub.h"
#include "google/cloud/grpc_error_delegate.h"
#include "google/cloud/status_or.h"
#include <google/cloud/vision/v1/product_search_service.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace vision_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

ProductSearchStub::~ProductSearchStub() = default;

StatusOr<google::cloud::vision::v1::ProductSet>
DefaultProductSearchStub::CreateProductSet(
    grpc::ClientContext& context, Options const&,
    google::cloud::vision::v1::CreateProductSetRequest const& request) {
  google::cloud::vision::v1::ProductSet response;
  auto status = grpc_stub_->CreateProductSet(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::vision::v1::ListProductSetsResponse>
DefaultProductSearchStub::ListProductSets(
    grpc::ClientContext& context, Options const&,
    google::cloud::vision::v1::ListProductSetsRequest const& request) {
  google::cloud::vision::v1::ListProductSetsResponse response;
  auto status = grpc_stub_->ListProductSets(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::vision::v1::ProductSet>
DefaultProductSearchStub::GetProductSet(
    grpc::ClientContext& context, Options const&,
    google::cloud::vision::v1::GetProductSetRequest const& request) {
  google::cloud::vision::v1::ProductSet response;
  auto status = grpc_stub_->GetProductSet(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::vision::v1::ProductSet>
DefaultProductSearchStub::UpdateProductSet(
    grpc::ClientContext& context, Options const&,
    google::cloud::vision::v1::UpdateProductSetRequest const& request) {
  google::cloud::vision::v1::ProductSet response;
  auto status = grpc_stub_->UpdateProductSet(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultProductSearchStub::DeleteProductSet(
    grpc::ClientContext& context, Options const&,
    google::cloud::vision::v1::DeleteProductSetRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteProductSet(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::vision::v1::Product>
DefaultProductSearchStub::CreateProduct(
    grpc::ClientContext& context, Options const&,
    google::cloud::vision::v1::CreateProductRequest const& request) {
  google::cloud::vision::v1::Product response;
  auto status = grpc_stub_->CreateProduct(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::vision::v1::ListProductsResponse>
DefaultProductSearchStub::ListProducts(
    grpc::ClientContext& context, Options const&,
    google::cloud::vision::v1::ListProductsRequest const& request) {
  google::cloud::vision::v1::ListProductsResponse response;
  auto status = grpc_stub_->ListProducts(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::vision::v1::Product>
DefaultProductSearchStub::GetProduct(
    grpc::ClientContext& context, Options const&,
    google::cloud::vision::v1::GetProductRequest const& request) {
  google::cloud::vision::v1::Product response;
  auto status = grpc_stub_->GetProduct(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::vision::v1::Product>
DefaultProductSearchStub::UpdateProduct(
    grpc::ClientContext& context, Options const&,
    google::cloud::vision::v1::UpdateProductRequest const& request) {
  google::cloud::vision::v1::Product response;
  auto status = grpc_stub_->UpdateProduct(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultProductSearchStub::DeleteProduct(
    grpc::ClientContext& context, Options const&,
    google::cloud::vision::v1::DeleteProductRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteProduct(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::vision::v1::ReferenceImage>
DefaultProductSearchStub::CreateReferenceImage(
    grpc::ClientContext& context, Options const&,
    google::cloud::vision::v1::CreateReferenceImageRequest const& request) {
  google::cloud::vision::v1::ReferenceImage response;
  auto status = grpc_stub_->CreateReferenceImage(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultProductSearchStub::DeleteReferenceImage(
    grpc::ClientContext& context, Options const&,
    google::cloud::vision::v1::DeleteReferenceImageRequest const& request) {
  google::protobuf::Empty response;
  auto status = grpc_stub_->DeleteReferenceImage(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::vision::v1::ListReferenceImagesResponse>
DefaultProductSearchStub::ListReferenceImages(
    grpc::ClientContext& context, Options const&,
    google::cloud::vision::v1::ListReferenceImagesRequest const& request) {
  google::cloud::vision::v1::ListReferenceImagesResponse response;
  auto status = grpc_stub_->ListReferenceImages(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::cloud::vision::v1::ReferenceImage>
DefaultProductSearchStub::GetReferenceImage(
    grpc::ClientContext& context, Options const&,
    google::cloud::vision::v1::GetReferenceImageRequest const& request) {
  google::cloud::vision::v1::ReferenceImage response;
  auto status = grpc_stub_->GetReferenceImage(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

Status DefaultProductSearchStub::AddProductToProductSet(
    grpc::ClientContext& context, Options const&,
    google::cloud::vision::v1::AddProductToProductSetRequest const& request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->AddProductToProductSet(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

Status DefaultProductSearchStub::RemoveProductFromProductSet(
    grpc::ClientContext& context, Options const&,
    google::cloud::vision::v1::RemoveProductFromProductSetRequest const&
        request) {
  google::protobuf::Empty response;
  auto status =
      grpc_stub_->RemoveProductFromProductSet(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return google::cloud::Status();
}

StatusOr<google::cloud::vision::v1::ListProductsInProductSetResponse>
DefaultProductSearchStub::ListProductsInProductSet(
    grpc::ClientContext& context, Options const&,
    google::cloud::vision::v1::ListProductsInProductSetRequest const& request) {
  google::cloud::vision::v1::ListProductsInProductSetResponse response;
  auto status =
      grpc_stub_->ListProductsInProductSet(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultProductSearchStub::AsyncImportProductSets(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::vision::v1::ImportProductSetsRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::vision::v1::ImportProductSetsRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::vision::v1::ImportProductSetsRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncImportProductSets(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultProductSearchStub::ImportProductSets(
    grpc::ClientContext& context, Options,
    google::cloud::vision::v1::ImportProductSetsRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->ImportProductSets(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultProductSearchStub::AsyncPurgeProducts(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions,
    google::cloud::vision::v1::PurgeProductsRequest const& request) {
  return internal::MakeUnaryRpcImpl<
      google::cloud::vision::v1::PurgeProductsRequest,
      google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::cloud::vision::v1::PurgeProductsRequest const& request,
             grpc::CompletionQueue* cq) {
        return grpc_stub_->AsyncPurgeProducts(context, request, cq);
      },
      request, std::move(context));
}

StatusOr<google::longrunning::Operation>
DefaultProductSearchStub::PurgeProducts(
    grpc::ClientContext& context, Options,
    google::cloud::vision::v1::PurgeProductsRequest const& request) {
  google::longrunning::Operation response;
  auto status = grpc_stub_->PurgeProducts(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

StatusOr<google::longrunning::Operation> DefaultProductSearchStub::GetOperation(
    grpc::ClientContext& context, Options const&,
    google::longrunning::GetOperationRequest const& request) {
  google::longrunning::Operation response;
  auto status = operations_stub_->GetOperation(&context, request, &response);
  if (!status.ok()) {
    return google::cloud::MakeStatusFromRpcError(status);
  }
  return response;
}

future<StatusOr<google::longrunning::Operation>>
DefaultProductSearchStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::GetOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::GetOperationRequest,
                                    google::longrunning::Operation>(
      cq,
      [this](grpc::ClientContext* context,
             google::longrunning::GetOperationRequest const& request,
             grpc::CompletionQueue* cq) {
        return operations_stub_->AsyncGetOperation(context, request, cq);
      },
      request, std::move(context));
}

future<Status> DefaultProductSearchStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    // NOLINTNEXTLINE(performance-unnecessary-value-param)
    google::cloud::internal::ImmutableOptions,
    google::longrunning::CancelOperationRequest const& request) {
  return internal::MakeUnaryRpcImpl<google::longrunning::CancelOperationRequest,
                                    google::protobuf::Empty>(
             cq,
             [this](grpc::ClientContext* context,
                    google::longrunning::CancelOperationRequest const& request,
                    grpc::CompletionQueue* cq) {
               return operations_stub_->AsyncCancelOperation(context, request,
                                                             cq);
             },
             request, std::move(context))
      .then([](future<StatusOr<google::protobuf::Empty>> f) {
        return f.get().status();
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace vision_v1_internal
}  // namespace cloud
}  // namespace google
