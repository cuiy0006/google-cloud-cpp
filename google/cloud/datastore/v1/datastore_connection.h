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
// source: google/datastore/v1/datastore.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATASTORE_V1_DATASTORE_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATASTORE_V1_DATASTORE_CONNECTION_H

#include "google/cloud/datastore/v1/datastore_connection_idempotency_policy.h"
#include "google/cloud/datastore/v1/internal/datastore_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/datastore/v1/datastore.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace datastore_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `DatastoreConnection`.
class DatastoreRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<DatastoreRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `DatastoreConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class DatastoreLimitedErrorCountRetryPolicy : public DatastoreRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit DatastoreLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  DatastoreLimitedErrorCountRetryPolicy(
      DatastoreLimitedErrorCountRetryPolicy&& rhs) noexcept
      : DatastoreLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  DatastoreLimitedErrorCountRetryPolicy(
      DatastoreLimitedErrorCountRetryPolicy const& rhs) noexcept
      : DatastoreLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<DatastoreRetryPolicy> clone() const override {
    return std::make_unique<DatastoreLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = DatastoreRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      datastore_v1_internal::DatastoreRetryTraits>
      impl_;
};

/**
 * A retry policy for `DatastoreConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class DatastoreLimitedTimeRetryPolicy : public DatastoreRetryPolicy {
 public:
  /**
   * Constructor given a `std::chrono::duration<>` object.
   *
   * @tparam DurationRep a placeholder to match the `Rep` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the underlying
   *     arithmetic type used to store the number of ticks. For our purposes it
   *     is simply a formal parameter.
   * @tparam DurationPeriod a placeholder to match the `Period` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the length of the
   *     tick in seconds, expressed as a `std::ratio<>`. For our purposes it is
   *     simply a formal parameter.
   * @param maximum_duration the maximum time allowed before the policy expires.
   *     While the application can express this time in any units they desire,
   *     the class truncates to milliseconds.
   *
   * @see https://en.cppreference.com/w/cpp/chrono/duration for more information
   *     about `std::chrono::duration`.
   */
  template <typename DurationRep, typename DurationPeriod>
  explicit DatastoreLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  DatastoreLimitedTimeRetryPolicy(
      DatastoreLimitedTimeRetryPolicy&& rhs) noexcept
      : DatastoreLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  DatastoreLimitedTimeRetryPolicy(
      DatastoreLimitedTimeRetryPolicy const& rhs) noexcept
      : DatastoreLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

  std::chrono::milliseconds maximum_duration() const {
    return impl_.maximum_duration();
  }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<DatastoreRetryPolicy> clone() const override {
    return std::make_unique<DatastoreLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = DatastoreRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      datastore_v1_internal::DatastoreRetryTraits>
      impl_;
};

/**
 * The `DatastoreConnection` object for `DatastoreClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `DatastoreClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `DatastoreClient`.
 *
 * To create a concrete instance, see `MakeDatastoreConnection()`.
 *
 * For mocking, see `datastore_v1_mocks::MockDatastoreConnection`.
 */
class DatastoreConnection {
 public:
  virtual ~DatastoreConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::datastore::v1::LookupResponse> Lookup(
      google::datastore::v1::LookupRequest const& request);

  virtual StatusOr<google::datastore::v1::RunQueryResponse> RunQuery(
      google::datastore::v1::RunQueryRequest const& request);

  virtual StatusOr<google::datastore::v1::RunAggregationQueryResponse>
  RunAggregationQuery(
      google::datastore::v1::RunAggregationQueryRequest const& request);

  virtual StatusOr<google::datastore::v1::BeginTransactionResponse>
  BeginTransaction(
      google::datastore::v1::BeginTransactionRequest const& request);

  virtual StatusOr<google::datastore::v1::CommitResponse> Commit(
      google::datastore::v1::CommitRequest const& request);

  virtual StatusOr<google::datastore::v1::RollbackResponse> Rollback(
      google::datastore::v1::RollbackRequest const& request);

  virtual StatusOr<google::datastore::v1::AllocateIdsResponse> AllocateIds(
      google::datastore::v1::AllocateIdsRequest const& request);

  virtual StatusOr<google::datastore::v1::ReserveIdsResponse> ReserveIds(
      google::datastore::v1::ReserveIdsRequest const& request);

  virtual StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request);

  virtual Status DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request);

  virtual Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request);
};

/**
 * A factory function to construct an object of type `DatastoreConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of DatastoreClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `DatastoreConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::datastore_v1::DatastorePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `DatastoreConnection` created by
 * this function.
 */
std::shared_ptr<DatastoreConnection> MakeDatastoreConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datastore_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATASTORE_V1_DATASTORE_CONNECTION_H
