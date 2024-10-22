#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_GRPC_GOOGLE_CREDENTIALS_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_GRPC_GOOGLE_CREDENTIALS_H

#include "google/cloud/version.h"
#include "google/cloud/internal/make_status.h"
#include "google/cloud/internal/unified_grpc_credentials.h"
#include "google/cloud/internal/oauth2_google_application_default_credentials_file.h"
#include <fstream>
#include <nlohmann/json.hpp>
#include "google/cloud/internal/json_parsing.h"
#include "absl/strings/str_split.h"
#include "google/cloud/internal/oauth2_impersonate_service_account_credentials.h"
#include "google/cloud/internal/grpc_impersonate_service_account.h"

namespace google {
namespace cloud {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace internal {

StatusOr<std::shared_ptr<GrpcAuthenticationStrategy>> MaybeLoadImpersonationCredentials(CompletionQueue cq, Options const& options);

} // namespace internal
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
} // namespace cloud
} // namespace google

#endif // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_INTERNAL_GRPC_GOOGLE_CREDENTIALS_H