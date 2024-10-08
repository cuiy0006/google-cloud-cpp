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
// source: google/cloud/dialogflow/v2/conversation_model.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_MOCKS_MOCK_CONVERSATION_MODELS_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_MOCKS_MOCK_CONVERSATION_MODELS_CONNECTION_H

#include "google/cloud/dialogflow_es/conversation_models_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace dialogflow_es_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `ConversationModelsConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `ConversationModelsClient`. To do
 * so, construct an object of type `ConversationModelsClient` with an instance
 * of this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockConversationModelsConnection
    : public dialogflow_es::ConversationModelsConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateConversationModel(Matcher<google::cloud::dialogflow::v2::CreateConversationModelRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::dialogflow::v2::ConversationModel>>,
      CreateConversationModel,
      (google::cloud::dialogflow::v2::CreateConversationModelRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateConversationModel(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, CreateConversationModel,
      (NoAwaitTag,
       google::cloud::dialogflow::v2::CreateConversationModelRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateConversationModel(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::dialogflow::v2::ConversationModel>>,
      CreateConversationModel,
      (google::longrunning::Operation const& operation), (override));

  MOCK_METHOD(StatusOr<google::cloud::dialogflow::v2::ConversationModel>,
              GetConversationModel,
              (google::cloud::dialogflow::v2::GetConversationModelRequest const&
                   request),
              (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::dialogflow::v2::ConversationModel>),
      ListConversationModels,
      (google::cloud::dialogflow::v2::ListConversationModelsRequest request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteConversationModel(Matcher<google::cloud::dialogflow::v2::DeleteConversationModelRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::dialogflow::v2::
                          DeleteConversationModelOperationMetadata>>,
      DeleteConversationModel,
      (google::cloud::dialogflow::v2::DeleteConversationModelRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeleteConversationModel(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeleteConversationModel,
      (NoAwaitTag,
       google::cloud::dialogflow::v2::DeleteConversationModelRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeleteConversationModel(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::dialogflow::v2::
                                  DeleteConversationModelOperationMetadata>>,
              DeleteConversationModel,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeployConversationModel(Matcher<google::cloud::dialogflow::v2::DeployConversationModelRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::dialogflow::v2::
                          DeployConversationModelOperationMetadata>>,
      DeployConversationModel,
      (google::cloud::dialogflow::v2::DeployConversationModelRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, DeployConversationModel(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, DeployConversationModel,
      (NoAwaitTag,
       google::cloud::dialogflow::v2::DeployConversationModelRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// DeployConversationModel(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::dialogflow::v2::
                                  DeployConversationModelOperationMetadata>>,
              DeployConversationModel,
              (google::longrunning::Operation const& operation), (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UndeployConversationModel(Matcher<google::cloud::dialogflow::v2::UndeployConversationModelRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<StatusOr<google::cloud::dialogflow::v2::
                          UndeployConversationModelOperationMetadata>>,
      UndeployConversationModel,
      (google::cloud::dialogflow::v2::UndeployConversationModelRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, UndeployConversationModel(_, _))
  /// @endcode
  MOCK_METHOD(
      StatusOr<google::longrunning::Operation>, UndeployConversationModel,
      (NoAwaitTag,
       google::cloud::dialogflow::v2::UndeployConversationModelRequest const&
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// UndeployConversationModel(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(future<StatusOr<google::cloud::dialogflow::v2::
                                  UndeployConversationModelOperationMetadata>>,
              UndeployConversationModel,
              (google::longrunning::Operation const& operation), (override));

  MOCK_METHOD(
      StatusOr<google::cloud::dialogflow::v2::ConversationModelEvaluation>,
      GetConversationModelEvaluation,
      (google::cloud::dialogflow::v2::
           GetConversationModelEvaluationRequest const& request),
      (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::dialogflow::v2::ConversationModelEvaluation>),
      ListConversationModelEvaluations,
      (google::cloud::dialogflow::v2::ListConversationModelEvaluationsRequest
           request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateConversationModelEvaluation(Matcher<google::cloud::dialogflow::v2::CreateConversationModelEvaluationRequest
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<
          StatusOr<google::cloud::dialogflow::v2::ConversationModelEvaluation>>,
      CreateConversationModelEvaluation,
      (google::cloud::dialogflow::v2::
           CreateConversationModelEvaluationRequest const& request),
      (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// EXPECT_CALL(*mock, CreateConversationModelEvaluation(_, _))
  /// @endcode
  MOCK_METHOD(StatusOr<google::longrunning::Operation>,
              CreateConversationModelEvaluation,
              (NoAwaitTag,
               google::cloud::dialogflow::v2::
                   CreateConversationModelEvaluationRequest const& request),
              (override));

  /// To disambiguate calls, use:
  ///
  /// @code
  /// using ::testing::_;
  /// using ::testing::Matcher;
  /// EXPECT_CALL(*mock,
  /// CreateConversationModelEvaluation(Matcher<google::longrunning::Operation
  /// const&>(_)))
  /// @endcode
  MOCK_METHOD(
      future<
          StatusOr<google::cloud::dialogflow::v2::ConversationModelEvaluation>>,
      CreateConversationModelEvaluation,
      (google::longrunning::Operation const& operation), (override));

  MOCK_METHOD((StreamRange<google::cloud::location::Location>), ListLocations,
              (google::cloud::location::ListLocationsRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::location::Location>, GetLocation,
              (google::cloud::location::GetLocationRequest const& request),
              (override));

  MOCK_METHOD((StreamRange<google::longrunning::Operation>), ListOperations,
              (google::longrunning::ListOperationsRequest request), (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>, GetOperation,
              (google::longrunning::GetOperationRequest const& request),
              (override));

  MOCK_METHOD(Status, CancelOperation,
              (google::longrunning::CancelOperationRequest const& request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_es_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_ES_MOCKS_MOCK_CONVERSATION_MODELS_CONNECTION_H
