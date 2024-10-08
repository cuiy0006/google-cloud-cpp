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
// source: google/cloud/scheduler/v1/cloudscheduler.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SCHEDULER_V1_CLOUD_SCHEDULER_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SCHEDULER_V1_CLOUD_SCHEDULER_CONNECTION_H

#include "google/cloud/scheduler/v1/cloud_scheduler_connection_idempotency_policy.h"
#include "google/cloud/scheduler/v1/internal/cloud_scheduler_retry_traits.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/scheduler/v1/cloudscheduler.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace scheduler_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `CloudSchedulerConnection`.
class CloudSchedulerRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<CloudSchedulerRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `CloudSchedulerConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class CloudSchedulerLimitedErrorCountRetryPolicy
    : public CloudSchedulerRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit CloudSchedulerLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  CloudSchedulerLimitedErrorCountRetryPolicy(
      CloudSchedulerLimitedErrorCountRetryPolicy&& rhs) noexcept
      : CloudSchedulerLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  CloudSchedulerLimitedErrorCountRetryPolicy(
      CloudSchedulerLimitedErrorCountRetryPolicy const& rhs) noexcept
      : CloudSchedulerLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<CloudSchedulerRetryPolicy> clone() const override {
    return std::make_unique<CloudSchedulerLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = CloudSchedulerRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      scheduler_v1_internal::CloudSchedulerRetryTraits>
      impl_;
};

/**
 * A retry policy for `CloudSchedulerConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class CloudSchedulerLimitedTimeRetryPolicy : public CloudSchedulerRetryPolicy {
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
  explicit CloudSchedulerLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  CloudSchedulerLimitedTimeRetryPolicy(
      CloudSchedulerLimitedTimeRetryPolicy&& rhs) noexcept
      : CloudSchedulerLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  CloudSchedulerLimitedTimeRetryPolicy(
      CloudSchedulerLimitedTimeRetryPolicy const& rhs) noexcept
      : CloudSchedulerLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

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
  std::unique_ptr<CloudSchedulerRetryPolicy> clone() const override {
    return std::make_unique<CloudSchedulerLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = CloudSchedulerRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      scheduler_v1_internal::CloudSchedulerRetryTraits>
      impl_;
};

/**
 * The `CloudSchedulerConnection` object for `CloudSchedulerClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `CloudSchedulerClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `CloudSchedulerClient`.
 *
 * To create a concrete instance, see `MakeCloudSchedulerConnection()`.
 *
 * For mocking, see `scheduler_v1_mocks::MockCloudSchedulerConnection`.
 */
class CloudSchedulerConnection {
 public:
  virtual ~CloudSchedulerConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StreamRange<google::cloud::scheduler::v1::Job> ListJobs(
      google::cloud::scheduler::v1::ListJobsRequest request);

  virtual StatusOr<google::cloud::scheduler::v1::Job> GetJob(
      google::cloud::scheduler::v1::GetJobRequest const& request);

  virtual StatusOr<google::cloud::scheduler::v1::Job> CreateJob(
      google::cloud::scheduler::v1::CreateJobRequest const& request);

  virtual StatusOr<google::cloud::scheduler::v1::Job> UpdateJob(
      google::cloud::scheduler::v1::UpdateJobRequest const& request);

  virtual Status DeleteJob(
      google::cloud::scheduler::v1::DeleteJobRequest const& request);

  virtual StatusOr<google::cloud::scheduler::v1::Job> PauseJob(
      google::cloud::scheduler::v1::PauseJobRequest const& request);

  virtual StatusOr<google::cloud::scheduler::v1::Job> ResumeJob(
      google::cloud::scheduler::v1::ResumeJobRequest const& request);

  virtual StatusOr<google::cloud::scheduler::v1::Job> RunJob(
      google::cloud::scheduler::v1::RunJobRequest const& request);

  virtual StreamRange<google::cloud::location::Location> ListLocations(
      google::cloud::location::ListLocationsRequest request);

  virtual StatusOr<google::cloud::location::Location> GetLocation(
      google::cloud::location::GetLocationRequest const& request);
};

/**
 * A factory function to construct an object of type `CloudSchedulerConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of CloudSchedulerClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `CloudSchedulerConnection`. Expected options are any of the types in
 * the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::scheduler_v1::CloudSchedulerPolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the `CloudSchedulerConnection` created by
 * this function.
 */
std::shared_ptr<CloudSchedulerConnection> MakeCloudSchedulerConnection(
    Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace scheduler_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SCHEDULER_V1_CLOUD_SCHEDULER_CONNECTION_H
