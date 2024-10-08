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
// source: google/pubsub/v1/pubsub.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUB_ADMIN_MOCKS_MOCK_TOPIC_ADMIN_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUB_ADMIN_MOCKS_MOCK_TOPIC_ADMIN_CONNECTION_H

#include "google/cloud/pubsub/admin/topic_admin_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace pubsub_admin_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `TopicAdminConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `TopicAdminClient`. To do so,
 * construct an object of type `TopicAdminClient` with an instance of this
 * class. Then use the Google Test framework functions to program the behavior
 * of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockTopicAdminConnection : public pubsub_admin::TopicAdminConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(StatusOr<google::pubsub::v1::Topic>, CreateTopic,
              (google::pubsub::v1::Topic const& request), (override));

  MOCK_METHOD(StatusOr<google::pubsub::v1::Topic>, UpdateTopic,
              (google::pubsub::v1::UpdateTopicRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::pubsub::v1::Topic>, GetTopic,
              (google::pubsub::v1::GetTopicRequest const& request), (override));

  MOCK_METHOD((StreamRange<google::pubsub::v1::Topic>), ListTopics,
              (google::pubsub::v1::ListTopicsRequest request), (override));

  MOCK_METHOD((StreamRange<std::string>), ListTopicSubscriptions,
              (google::pubsub::v1::ListTopicSubscriptionsRequest request),
              (override));

  MOCK_METHOD((StreamRange<std::string>), ListTopicSnapshots,
              (google::pubsub::v1::ListTopicSnapshotsRequest request),
              (override));

  MOCK_METHOD(Status, DeleteTopic,
              (google::pubsub::v1::DeleteTopicRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::pubsub::v1::DetachSubscriptionResponse>,
              DetachSubscription,
              (google::pubsub::v1::DetachSubscriptionRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::Policy>, SetIamPolicy,
              (google::iam::v1::SetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::Policy>, GetIamPolicy,
              (google::iam::v1::GetIamPolicyRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::iam::v1::TestIamPermissionsResponse>,
              TestIamPermissions,
              (google::iam::v1::TestIamPermissionsRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsub_admin_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PUBSUB_ADMIN_MOCKS_MOCK_TOPIC_ADMIN_CONNECTION_H
