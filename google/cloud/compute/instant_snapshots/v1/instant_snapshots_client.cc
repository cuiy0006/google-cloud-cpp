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
// source: google/cloud/compute/instant_snapshots/v1/instant_snapshots.proto

#include "google/cloud/compute/instant_snapshots/v1/instant_snapshots_client.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_instant_snapshots_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

InstantSnapshotsClient::InstantSnapshotsClient(
    std::shared_ptr<InstantSnapshotsConnection> connection, Options opts)
    : connection_(std::move(connection)),
      options_(
          internal::MergeOptions(std::move(opts), connection_->options())) {}
InstantSnapshotsClient::~InstantSnapshotsClient() = default;

StreamRange<std::pair<
    std::string, google::cloud::cpp::compute::v1::InstantSnapshotsScopedList>>
InstantSnapshotsClient::AggregatedListInstantSnapshots(
    std::string const& project, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::instant_snapshots::v1::
      AggregatedListInstantSnapshotsRequest request;
  request.set_project(project);
  return connection_->AggregatedListInstantSnapshots(request);
}

StreamRange<std::pair<
    std::string, google::cloud::cpp::compute::v1::InstantSnapshotsScopedList>>
InstantSnapshotsClient::AggregatedListInstantSnapshots(
    google::cloud::cpp::compute::instant_snapshots::v1::
        AggregatedListInstantSnapshotsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->AggregatedListInstantSnapshots(std::move(request));
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstantSnapshotsClient::DeleteInstantSnapshot(
    std::string const& project, std::string const& zone,
    std::string const& instant_snapshot, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::instant_snapshots::v1::
      DeleteInstantSnapshotRequest request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_instant_snapshot(instant_snapshot);
  return connection_->DeleteInstantSnapshot(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InstantSnapshotsClient::DeleteInstantSnapshot(
    NoAwaitTag, std::string const& project, std::string const& zone,
    std::string const& instant_snapshot, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::instant_snapshots::v1::
      DeleteInstantSnapshotRequest request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_instant_snapshot(instant_snapshot);
  return connection_->DeleteInstantSnapshot(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstantSnapshotsClient::DeleteInstantSnapshot(
    google::cloud::cpp::compute::instant_snapshots::v1::
        DeleteInstantSnapshotRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteInstantSnapshot(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InstantSnapshotsClient::DeleteInstantSnapshot(
    NoAwaitTag,
    google::cloud::cpp::compute::instant_snapshots::v1::
        DeleteInstantSnapshotRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteInstantSnapshot(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstantSnapshotsClient::DeleteInstantSnapshot(
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->DeleteInstantSnapshot(operation);
}

StatusOr<google::cloud::cpp::compute::v1::InstantSnapshot>
InstantSnapshotsClient::GetInstantSnapshot(std::string const& project,
                                           std::string const& zone,
                                           std::string const& instant_snapshot,
                                           Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::instant_snapshots::v1::GetInstantSnapshotRequest
      request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_instant_snapshot(instant_snapshot);
  return connection_->GetInstantSnapshot(request);
}

StatusOr<google::cloud::cpp::compute::v1::InstantSnapshot>
InstantSnapshotsClient::GetInstantSnapshot(
    google::cloud::cpp::compute::instant_snapshots::v1::
        GetInstantSnapshotRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetInstantSnapshot(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
InstantSnapshotsClient::GetIamPolicy(std::string const& project,
                                     std::string const& zone,
                                     std::string const& resource,
                                     Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::instant_snapshots::v1::GetIamPolicyRequest
      request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_resource(resource);
  return connection_->GetIamPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
InstantSnapshotsClient::GetIamPolicy(
    google::cloud::cpp::compute::instant_snapshots::v1::
        GetIamPolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->GetIamPolicy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstantSnapshotsClient::InsertInstantSnapshot(
    std::string const& project, std::string const& zone,
    google::cloud::cpp::compute::v1::InstantSnapshot const&
        instant_snapshot_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::instant_snapshots::v1::
      InsertInstantSnapshotRequest request;
  request.set_project(project);
  request.set_zone(zone);
  *request.mutable_instant_snapshot_resource() = instant_snapshot_resource;
  return connection_->InsertInstantSnapshot(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InstantSnapshotsClient::InsertInstantSnapshot(
    NoAwaitTag, std::string const& project, std::string const& zone,
    google::cloud::cpp::compute::v1::InstantSnapshot const&
        instant_snapshot_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::instant_snapshots::v1::
      InsertInstantSnapshotRequest request;
  request.set_project(project);
  request.set_zone(zone);
  *request.mutable_instant_snapshot_resource() = instant_snapshot_resource;
  return connection_->InsertInstantSnapshot(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstantSnapshotsClient::InsertInstantSnapshot(
    google::cloud::cpp::compute::instant_snapshots::v1::
        InsertInstantSnapshotRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertInstantSnapshot(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InstantSnapshotsClient::InsertInstantSnapshot(
    NoAwaitTag,
    google::cloud::cpp::compute::instant_snapshots::v1::
        InsertInstantSnapshotRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertInstantSnapshot(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstantSnapshotsClient::InsertInstantSnapshot(
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->InsertInstantSnapshot(operation);
}

StreamRange<google::cloud::cpp::compute::v1::InstantSnapshot>
InstantSnapshotsClient::ListInstantSnapshots(std::string const& project,
                                             std::string const& zone,
                                             Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::instant_snapshots::v1::
      ListInstantSnapshotsRequest request;
  request.set_project(project);
  request.set_zone(zone);
  return connection_->ListInstantSnapshots(request);
}

StreamRange<google::cloud::cpp::compute::v1::InstantSnapshot>
InstantSnapshotsClient::ListInstantSnapshots(
    google::cloud::cpp::compute::instant_snapshots::v1::
        ListInstantSnapshotsRequest request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->ListInstantSnapshots(std::move(request));
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
InstantSnapshotsClient::SetIamPolicy(
    std::string const& project, std::string const& zone,
    std::string const& resource,
    google::cloud::cpp::compute::v1::ZoneSetPolicyRequest const&
        zone_set_policy_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::instant_snapshots::v1::SetIamPolicyRequest
      request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_resource(resource);
  *request.mutable_zone_set_policy_request_resource() =
      zone_set_policy_request_resource;
  return connection_->SetIamPolicy(request);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
InstantSnapshotsClient::SetIamPolicy(
    google::cloud::cpp::compute::instant_snapshots::v1::
        SetIamPolicyRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetIamPolicy(request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstantSnapshotsClient::SetLabels(
    std::string const& project, std::string const& zone,
    std::string const& resource,
    google::cloud::cpp::compute::v1::ZoneSetLabelsRequest const&
        zone_set_labels_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::instant_snapshots::v1::SetLabelsRequest request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_resource(resource);
  *request.mutable_zone_set_labels_request_resource() =
      zone_set_labels_request_resource;
  return connection_->SetLabels(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InstantSnapshotsClient::SetLabels(
    NoAwaitTag, std::string const& project, std::string const& zone,
    std::string const& resource,
    google::cloud::cpp::compute::v1::ZoneSetLabelsRequest const&
        zone_set_labels_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::instant_snapshots::v1::SetLabelsRequest request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_resource(resource);
  *request.mutable_zone_set_labels_request_resource() =
      zone_set_labels_request_resource;
  return connection_->SetLabels(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstantSnapshotsClient::SetLabels(
    google::cloud::cpp::compute::instant_snapshots::v1::SetLabelsRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetLabels(request);
}

StatusOr<google::cloud::cpp::compute::v1::Operation>
InstantSnapshotsClient::SetLabels(
    NoAwaitTag,
    google::cloud::cpp::compute::instant_snapshots::v1::SetLabelsRequest const&
        request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetLabels(NoAwaitTag{}, request);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
InstantSnapshotsClient::SetLabels(
    google::cloud::cpp::compute::v1::Operation const& operation, Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->SetLabels(operation);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
InstantSnapshotsClient::TestIamPermissions(
    std::string const& project, std::string const& zone,
    std::string const& resource,
    google::cloud::cpp::compute::v1::TestPermissionsRequest const&
        test_permissions_request_resource,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  google::cloud::cpp::compute::instant_snapshots::v1::TestIamPermissionsRequest
      request;
  request.set_project(project);
  request.set_zone(zone);
  request.set_resource(resource);
  *request.mutable_test_permissions_request_resource() =
      test_permissions_request_resource;
  return connection_->TestIamPermissions(request);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
InstantSnapshotsClient::TestIamPermissions(
    google::cloud::cpp::compute::instant_snapshots::v1::
        TestIamPermissionsRequest const& request,
    Options opts) {
  internal::OptionsSpan span(internal::MergeOptions(std::move(opts), options_));
  return connection_->TestIamPermissions(request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_instant_snapshots_v1
}  // namespace cloud
}  // namespace google
