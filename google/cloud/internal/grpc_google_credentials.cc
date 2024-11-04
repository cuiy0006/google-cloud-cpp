#include "google/cloud/internal/grpc_google_credentials.h"

namespace google {
namespace cloud {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace internal {

StatusOr<std::shared_ptr<GrpcAuthenticationStrategy>> MaybeLoadImpersonationCredentials(CompletionQueue cq, Options const& options) {
    std::string path = std::string(std::getenv("GOOGLE_APPLICATION_CREDENTIALS"));
    auto ec = internal::ErrorContext{};
    if (path.empty()) {
        return {nullptr};
    }
    std::ifstream ifs(path);
    auto const contents = std::string(std::istreambuf_iterator<char>{ifs}, {});
    auto json = nlohmann::json::parse(contents, nullptr, false);

    auto cfg = oauth2_internal::MakeImpersonateServiceAccountConfig(contents, options, internal::ErrorContext{});
    if (!cfg) return std::move(cfg).status();

    return std::shared_ptr<GrpcAuthenticationStrategy>(
        GrpcImpersonateServiceAccount::Create(std::move(cq), *cfg, std::move(options)));

}

} // namespace internal
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
} // namespace cloud
} // namespace google