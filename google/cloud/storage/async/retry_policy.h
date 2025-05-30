// Copyright 2025 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGE_ASYNC_RETRY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGE_ASYNC_RETRY_POLICY_H

#include "google/cloud/storage/version.h"
#include "google/cloud/internal/backoff_policy.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/status.h"
#include <memory>

namespace google {
namespace cloud {
namespace storage_experimental {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace internal {
/// Defines what error codes are permanent errors.
struct StatusTraits {
  static bool IsPermanentFailure(Status const& status) {
    return status.code() != StatusCode::kDeadlineExceeded &&
           status.code() != StatusCode::kInternal &&
           status.code() != StatusCode::kResourceExhausted &&
           status.code() != StatusCode::kUnavailable &&
           status.code() != StatusCode::kAborted;
  }
};
}  // namespace internal

/// The base class for the Storage library async retry policies.
class AsyncRetryPolicy : public google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<AsyncRetryPolicy> clone() const = 0;
};

/**
 * A retry policy based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kDeadlineExceeded`](@ref google::cloud::StatusCode)
 * - [`kInternal`](@ref google::cloud::StatusCode)
 * - [`kResourceExhausted`](@ref google::cloud::StatusCode)
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 * - [`kAborted`](@ref google::cloud::StatusCode)
 */
class LimitedErrorCountRetryPolicy : public AsyncRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit LimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  LimitedErrorCountRetryPolicy(LimitedErrorCountRetryPolicy&& rhs) noexcept
      : LimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  LimitedErrorCountRetryPolicy(LimitedErrorCountRetryPolicy const& rhs) noexcept
      : LimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& s) override { return impl_.OnFailure(s); }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& s) const override {
    return impl_.IsPermanentFailure(s);
  }
  std::unique_ptr<AsyncRetryPolicy> clone() const override {
    return std::make_unique<LimitedErrorCountRetryPolicy>(
        impl_.maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = AsyncRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<internal::StatusTraits>
      impl_;
};

/**
 * A retry policy based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kDeadlineExceeded`](@ref google::cloud::StatusCode)
 * - [`kInternal`](@ref google::cloud::StatusCode)
 * - [`kResourceExhausted`](@ref google::cloud::StatusCode)
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 * - [`kAborted`](@ref google::cloud::StatusCode)
 */
class LimitedTimeRetryPolicy : public AsyncRetryPolicy {
 public:
  /**
   * Constructor given a `std::chrono::duration<>` object.
   *
   * @tparam DurationRep a placeholder to match the `Rep` tparam for
   *     @p maximum_duration's type. The semantics of this template parameter
   *     are documented in `std::chrono::duration<>`. In brief, the underlying
   *     arithmetic type used to store the number of ticks. For our purposes it
   *     is simply a formal parameter.
   * @tparam DurationPeriod a placeholder to match the `Period` tparam for
   *     @p maximum_duration's type. The semantics of this template parameter
   *     are documented in `std::chrono::duration<>`. In brief, the length of
   *     the tick in seconds, expressed as a `std::ratio<>`. For our purposes it
   *     is simply a formal parameter.
   * @param maximum_duration the maximum time allowed before the policy expires,
   *     while the application can express this time in any units they desire,
   *     the class truncates to milliseconds.
   *
   * @see https://en.cppreference.com/w/cpp/chrono/duration for more details
   *     about `std::chrono::duration`.
   */
  template <typename DurationRep, typename DurationPeriod>
  explicit LimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  LimitedTimeRetryPolicy(LimitedTimeRetryPolicy&& rhs) noexcept
      : LimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  LimitedTimeRetryPolicy(LimitedTimeRetryPolicy const& rhs) noexcept
      : LimitedTimeRetryPolicy(rhs.maximum_duration()) {}

  std::chrono::milliseconds maximum_duration() const {
    return impl_.maximum_duration();
  }

  bool OnFailure(Status const& s) override { return impl_.OnFailure(s); }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& s) const override {
    return impl_.IsPermanentFailure(s);
  }
  std::unique_ptr<AsyncRetryPolicy> clone() const override {
    return std::make_unique<LimitedTimeRetryPolicy>(impl_.maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = RetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<internal::StatusTraits> impl_;
};

/// The backoff policy base class.
using AsyncBackoffPolicy = ::google::cloud::internal::BackoffPolicy;

/// Implement truncated exponential backoff with randomization.
using ExponentialAsyncBackoffPolicy =
    ::google::cloud::internal::ExponentialBackoffPolicy;

/// Configure the resume policy used in a request, client, or connection.
struct AsyncRetryPolicyOption {
  using Type = std::shared_ptr<AsyncRetryPolicy>;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace storage_experimental
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_STORAGE_ASYNC_RETRY_POLICY_H
