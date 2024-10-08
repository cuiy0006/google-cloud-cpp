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
// source: google/cloud/orchestration/airflow/service/v1/environments.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPOSER_V1_ENVIRONMENTS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPOSER_V1_ENVIRONMENTS_CONNECTION_H

#include "google/cloud/composer/v1/environments_connection_idempotency_policy.h"
#include "google/cloud/composer/v1/internal/environments_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/orchestration/airflow/service/v1/environments.pb.h>
#include <google/cloud/orchestration/airflow/service/v1/operations.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace composer_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `EnvironmentsConnection`.
class EnvironmentsRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<EnvironmentsRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `EnvironmentsConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class EnvironmentsLimitedErrorCountRetryPolicy
    : public EnvironmentsRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit EnvironmentsLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  EnvironmentsLimitedErrorCountRetryPolicy(
      EnvironmentsLimitedErrorCountRetryPolicy&& rhs) noexcept
      : EnvironmentsLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  EnvironmentsLimitedErrorCountRetryPolicy(
      EnvironmentsLimitedErrorCountRetryPolicy const& rhs) noexcept
      : EnvironmentsLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<EnvironmentsRetryPolicy> clone() const override {
    return std::make_unique<EnvironmentsLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = EnvironmentsRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      composer_v1_internal::EnvironmentsRetryTraits>
      impl_;
};

/**
 * A retry policy for `EnvironmentsConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class EnvironmentsLimitedTimeRetryPolicy : public EnvironmentsRetryPolicy {
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
  explicit EnvironmentsLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  EnvironmentsLimitedTimeRetryPolicy(
      EnvironmentsLimitedTimeRetryPolicy&& rhs) noexcept
      : EnvironmentsLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  EnvironmentsLimitedTimeRetryPolicy(
      EnvironmentsLimitedTimeRetryPolicy const& rhs) noexcept
      : EnvironmentsLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<EnvironmentsRetryPolicy> clone() const override {
    return std::make_unique<EnvironmentsLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = EnvironmentsRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      composer_v1_internal::EnvironmentsRetryTraits>
      impl_;
};

/**
 * The `EnvironmentsConnection` object for `EnvironmentsClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `EnvironmentsClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `EnvironmentsClient`.
 *
 * To create a concrete instance, see `MakeEnvironmentsConnection()`.
 *
 * For mocking, see `composer_v1_mocks::MockEnvironmentsConnection`.
 */
class EnvironmentsConnection {
 public:
  virtual ~EnvironmentsConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual future<
      StatusOr<google::cloud::orchestration::airflow::service::v1::Environment>>
  CreateEnvironment(google::cloud::orchestration::airflow::service::v1::
                        CreateEnvironmentRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CreateEnvironment(
      NoAwaitTag, google::cloud::orchestration::airflow::service::v1::
                      CreateEnvironmentRequest const& request);

  virtual future<
      StatusOr<google::cloud::orchestration::airflow::service::v1::Environment>>
  CreateEnvironment(google::longrunning::Operation const& operation);

  virtual StatusOr<
      google::cloud::orchestration::airflow::service::v1::Environment>
  GetEnvironment(google::cloud::orchestration::airflow::service::v1::
                     GetEnvironmentRequest const& request);

  virtual StreamRange<
      google::cloud::orchestration::airflow::service::v1::Environment>
  ListEnvironments(google::cloud::orchestration::airflow::service::v1::
                       ListEnvironmentsRequest request);

  virtual future<
      StatusOr<google::cloud::orchestration::airflow::service::v1::Environment>>
  UpdateEnvironment(google::cloud::orchestration::airflow::service::v1::
                        UpdateEnvironmentRequest const& request);

  virtual StatusOr<google::longrunning::Operation> UpdateEnvironment(
      NoAwaitTag, google::cloud::orchestration::airflow::service::v1::
                      UpdateEnvironmentRequest const& request);

  virtual future<
      StatusOr<google::cloud::orchestration::airflow::service::v1::Environment>>
  UpdateEnvironment(google::longrunning::Operation const& operation);

  virtual future<StatusOr<
      google::cloud::orchestration::airflow::service::v1::OperationMetadata>>
  DeleteEnvironment(google::cloud::orchestration::airflow::service::v1::
                        DeleteEnvironmentRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DeleteEnvironment(
      NoAwaitTag, google::cloud::orchestration::airflow::service::v1::
                      DeleteEnvironmentRequest const& request);

  virtual future<StatusOr<
      google::cloud::orchestration::airflow::service::v1::OperationMetadata>>
  DeleteEnvironment(google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::orchestration::airflow::service::v1::
                       ExecuteAirflowCommandResponse>
  ExecuteAirflowCommand(google::cloud::orchestration::airflow::service::v1::
                            ExecuteAirflowCommandRequest const& request);

  virtual StatusOr<google::cloud::orchestration::airflow::service::v1::
                       StopAirflowCommandResponse>
  StopAirflowCommand(google::cloud::orchestration::airflow::service::v1::
                         StopAirflowCommandRequest const& request);

  virtual StatusOr<google::cloud::orchestration::airflow::service::v1::
                       PollAirflowCommandResponse>
  PollAirflowCommand(google::cloud::orchestration::airflow::service::v1::
                         PollAirflowCommandRequest const& request);

  virtual StreamRange<google::cloud::orchestration::airflow::service::v1::
                          ListWorkloadsResponse::ComposerWorkload>
  ListWorkloads(
      google::cloud::orchestration::airflow::service::v1::ListWorkloadsRequest
          request);

  virtual future<StatusOr<
      google::cloud::orchestration::airflow::service::v1::CheckUpgradeResponse>>
  CheckUpgrade(google::cloud::orchestration::airflow::service::v1::
                   CheckUpgradeRequest const& request);

  virtual StatusOr<google::longrunning::Operation> CheckUpgrade(
      NoAwaitTag, google::cloud::orchestration::airflow::service::v1::
                      CheckUpgradeRequest const& request);

  virtual future<StatusOr<
      google::cloud::orchestration::airflow::service::v1::CheckUpgradeResponse>>
  CheckUpgrade(google::longrunning::Operation const& operation);

  virtual StatusOr<
      google::cloud::orchestration::airflow::service::v1::UserWorkloadsSecret>
  CreateUserWorkloadsSecret(
      google::cloud::orchestration::airflow::service::v1::
          CreateUserWorkloadsSecretRequest const& request);

  virtual StatusOr<
      google::cloud::orchestration::airflow::service::v1::UserWorkloadsSecret>
  GetUserWorkloadsSecret(google::cloud::orchestration::airflow::service::v1::
                             GetUserWorkloadsSecretRequest const& request);

  virtual StreamRange<
      google::cloud::orchestration::airflow::service::v1::UserWorkloadsSecret>
  ListUserWorkloadsSecrets(google::cloud::orchestration::airflow::service::v1::
                               ListUserWorkloadsSecretsRequest request);

  virtual StatusOr<
      google::cloud::orchestration::airflow::service::v1::UserWorkloadsSecret>
  UpdateUserWorkloadsSecret(
      google::cloud::orchestration::airflow::service::v1::
          UpdateUserWorkloadsSecretRequest const& request);

  virtual Status DeleteUserWorkloadsSecret(
      google::cloud::orchestration::airflow::service::v1::
          DeleteUserWorkloadsSecretRequest const& request);

  virtual StatusOr<google::cloud::orchestration::airflow::service::v1::
                       UserWorkloadsConfigMap>
  CreateUserWorkloadsConfigMap(
      google::cloud::orchestration::airflow::service::v1::
          CreateUserWorkloadsConfigMapRequest const& request);

  virtual StatusOr<google::cloud::orchestration::airflow::service::v1::
                       UserWorkloadsConfigMap>
  GetUserWorkloadsConfigMap(
      google::cloud::orchestration::airflow::service::v1::
          GetUserWorkloadsConfigMapRequest const& request);

  virtual StreamRange<google::cloud::orchestration::airflow::service::v1::
                          UserWorkloadsConfigMap>
  ListUserWorkloadsConfigMaps(
      google::cloud::orchestration::airflow::service::v1::
          ListUserWorkloadsConfigMapsRequest request);

  virtual StatusOr<google::cloud::orchestration::airflow::service::v1::
                       UserWorkloadsConfigMap>
  UpdateUserWorkloadsConfigMap(
      google::cloud::orchestration::airflow::service::v1::
          UpdateUserWorkloadsConfigMapRequest const& request);

  virtual Status DeleteUserWorkloadsConfigMap(
      google::cloud::orchestration::airflow::service::v1::
          DeleteUserWorkloadsConfigMapRequest const& request);

  virtual future<StatusOr<
      google::cloud::orchestration::airflow::service::v1::SaveSnapshotResponse>>
  SaveSnapshot(google::cloud::orchestration::airflow::service::v1::
                   SaveSnapshotRequest const& request);

  virtual StatusOr<google::longrunning::Operation> SaveSnapshot(
      NoAwaitTag, google::cloud::orchestration::airflow::service::v1::
                      SaveSnapshotRequest const& request);

  virtual future<StatusOr<
      google::cloud::orchestration::airflow::service::v1::SaveSnapshotResponse>>
  SaveSnapshot(google::longrunning::Operation const& operation);

  virtual future<StatusOr<
      google::cloud::orchestration::airflow::service::v1::LoadSnapshotResponse>>
  LoadSnapshot(google::cloud::orchestration::airflow::service::v1::
                   LoadSnapshotRequest const& request);

  virtual StatusOr<google::longrunning::Operation> LoadSnapshot(
      NoAwaitTag, google::cloud::orchestration::airflow::service::v1::
                      LoadSnapshotRequest const& request);

  virtual future<StatusOr<
      google::cloud::orchestration::airflow::service::v1::LoadSnapshotResponse>>
  LoadSnapshot(google::longrunning::Operation const& operation);

  virtual future<StatusOr<google::cloud::orchestration::airflow::service::v1::
                              DatabaseFailoverResponse>>
  DatabaseFailover(google::cloud::orchestration::airflow::service::v1::
                       DatabaseFailoverRequest const& request);

  virtual StatusOr<google::longrunning::Operation> DatabaseFailover(
      NoAwaitTag, google::cloud::orchestration::airflow::service::v1::
                      DatabaseFailoverRequest const& request);

  virtual future<StatusOr<google::cloud::orchestration::airflow::service::v1::
                              DatabaseFailoverResponse>>
  DatabaseFailover(google::longrunning::Operation const& operation);

  virtual StatusOr<google::cloud::orchestration::airflow::service::v1::
                       FetchDatabasePropertiesResponse>
  FetchDatabaseProperties(google::cloud::orchestration::airflow::service::v1::
                              FetchDatabasePropertiesRequest const& request);

  virtual StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request);

  virtual StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request);

  virtual Status DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request);
};

/**
 * A factory function to construct an object of type `EnvironmentsConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of EnvironmentsClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `EnvironmentsConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::composer_v1::EnvironmentsPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `EnvironmentsConnection` created by
 * this function.
 */
std::shared_ptr<EnvironmentsConnection> MakeEnvironmentsConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace composer_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPOSER_V1_ENVIRONMENTS_CONNECTION_H
