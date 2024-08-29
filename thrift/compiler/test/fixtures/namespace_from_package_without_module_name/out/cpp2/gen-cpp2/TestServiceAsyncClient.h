/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/namespace_from_package_without_module_name/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/client_h.h>

#include "thrift/compiler/test/fixtures/namespace_from_package_without_module_name/gen-cpp2/module_types.h"

namespace apache { namespace thrift {
  class Cpp2RequestContext;
  namespace detail { namespace ac { struct ClientRequestContext; }}
  namespace transport { class THeader; }
}}

namespace test::namespace_from_package_without_module_name {
class TestService;
} // namespace test::namespace_from_package_without_module_name
namespace apache::thrift {

template <>
class Client<::test::namespace_from_package_without_module_name::TestService> : public apache::thrift::GeneratedAsyncClient {
 public:
  using apache::thrift::GeneratedAsyncClient::GeneratedAsyncClient;

  char const* getServiceName() const noexcept override {
    return "TestService";
  }

  static const char* __fbthrift_thrift_uri() {
    return "test.dev/namespace_from_package_without_module_name/TestService";
  }


  /** Glean {"file": "thrift/compiler/test/fixtures/namespace_from_package_without_module_name/src/module.thrift", "service": "TestService", "function": "init"} */
  virtual void init(std::unique_ptr<apache::thrift::RequestCallback> callback, ::std::int64_t p_int1);
  /** Glean {"file": "thrift/compiler/test/fixtures/namespace_from_package_without_module_name/src/module.thrift", "service": "TestService", "function": "init"} */
  virtual void init(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, ::std::int64_t p_int1);
 protected:
  void fbthrift_serialize_and_send_init(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, ::std::int64_t p_int1, bool stealRpcOptions = false);
 public:

  /** Glean {"file": "thrift/compiler/test/fixtures/namespace_from_package_without_module_name/src/module.thrift", "service": "TestService", "function": "init"} */
  virtual ::std::int64_t sync_init(::std::int64_t p_int1);
  /** Glean {"file": "thrift/compiler/test/fixtures/namespace_from_package_without_module_name/src/module.thrift", "service": "TestService", "function": "init"} */
  virtual ::std::int64_t sync_init(apache::thrift::RpcOptions& rpcOptions, ::std::int64_t p_int1);

  /** Glean {"file": "thrift/compiler/test/fixtures/namespace_from_package_without_module_name/src/module.thrift", "service": "TestService", "function": "init"} */
  virtual folly::Future<::std::int64_t> future_init(::std::int64_t p_int1);
  /** Glean {"file": "thrift/compiler/test/fixtures/namespace_from_package_without_module_name/src/module.thrift", "service": "TestService", "function": "init"} */
  virtual folly::SemiFuture<::std::int64_t> semifuture_init(::std::int64_t p_int1);
  /** Glean {"file": "thrift/compiler/test/fixtures/namespace_from_package_without_module_name/src/module.thrift", "service": "TestService", "function": "init"} */
  virtual folly::Future<::std::int64_t> future_init(apache::thrift::RpcOptions& rpcOptions, ::std::int64_t p_int1);
  /** Glean {"file": "thrift/compiler/test/fixtures/namespace_from_package_without_module_name/src/module.thrift", "service": "TestService", "function": "init"} */
  virtual folly::SemiFuture<::std::int64_t> semifuture_init(apache::thrift::RpcOptions& rpcOptions, ::std::int64_t p_int1);

#if FOLLY_HAS_COROUTINES
#if __clang__
  /** Glean {"file": "thrift/compiler/test/fixtures/namespace_from_package_without_module_name/src/module.thrift", "service": "TestService", "function": "init"} */
  template <int = 0>
  folly::coro::Task<::std::int64_t> co_init(::std::int64_t p_int1) {
    return co_init<false>(nullptr, p_int1);
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/namespace_from_package_without_module_name/src/module.thrift", "service": "TestService", "function": "init"} */
  template <int = 0>
  folly::coro::Task<::std::int64_t> co_init(apache::thrift::RpcOptions& rpcOptions, ::std::int64_t p_int1) {
    return co_init<true>(&rpcOptions, p_int1);
  }
#else
  /** Glean {"file": "thrift/compiler/test/fixtures/namespace_from_package_without_module_name/src/module.thrift", "service": "TestService", "function": "init"} */
  folly::coro::Task<::std::int64_t> co_init(::std::int64_t p_int1) {
    co_return co_await folly::coro::detachOnCancel(semifuture_init(p_int1));
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/namespace_from_package_without_module_name/src/module.thrift", "service": "TestService", "function": "init"} */
  folly::coro::Task<::std::int64_t> co_init(apache::thrift::RpcOptions& rpcOptions, ::std::int64_t p_int1) {
    co_return co_await folly::coro::detachOnCancel(semifuture_init(rpcOptions, p_int1));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<::std::int64_t> co_init(apache::thrift::RpcOptions* rpcOptions, ::std::int64_t p_int1) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = initCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions* defaultRpcOptions = new apache::thrift::RpcOptions();
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    const bool shouldProcessClientInterceptors = ctx && ctx->shouldProcessClientInterceptors();
    if (shouldProcessClientInterceptors) {
      co_await ctx->processClientInterceptorsOnRequest();
    }
    if constexpr (hasRpcOptions) {
      fbthrift_serialize_and_send_init(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback), p_int1);
    } else {
      fbthrift_serialize_and_send_init(*defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback), p_int1);
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (shouldProcessClientInterceptors) {
      co_await ctx->processClientInterceptorsOnResponse();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
    returnState.resetProtocolId(protocolId);
    returnState.resetCtx(std::move(ctx));
    SCOPE_EXIT {
      if (hasRpcOptions && returnState.header()) {
        auto* rheader = returnState.header();
        if (!rheader->getHeaders().empty()) {
          rpcOptions->setReadHeaders(rheader->releaseHeaders());
        }
        rpcOptions->setRoutingData(rheader->releaseRoutingData());
      }
    };
    ::std::int64_t _return;
    if (auto ew = recv_wrapped_init(_return, returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
    co_return _return;
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  /** Glean {"file": "thrift/compiler/test/fixtures/namespace_from_package_without_module_name/src/module.thrift", "service": "TestService", "function": "init"} */
  virtual void init(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, ::std::int64_t p_int1);


  /** Glean {"file": "thrift/compiler/test/fixtures/namespace_from_package_without_module_name/src/module.thrift", "service": "TestService", "function": "init"} */
  static folly::exception_wrapper recv_wrapped_init(::std::int64_t& _return, ::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/namespace_from_package_without_module_name/src/module.thrift", "service": "TestService", "function": "init"} */
  static ::std::int64_t recv_init(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  /** Glean {"file": "thrift/compiler/test/fixtures/namespace_from_package_without_module_name/src/module.thrift", "service": "TestService", "function": "init"} */
  virtual ::std::int64_t recv_instance_init(::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/namespace_from_package_without_module_name/src/module.thrift", "service": "TestService", "function": "init"} */
  virtual folly::exception_wrapper recv_instance_wrapped_init(::std::int64_t& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  apache::thrift::SerializedRequest fbthrift_serialize_init(const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack, ::std::int64_t p_int1);
  template <typename RpcOptions>
  void fbthrift_send_init(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback);
  std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> initCtx(apache::thrift::RpcOptions* rpcOptions);
  template <typename CallbackType>
  folly::SemiFuture<::std::int64_t> fbthrift_semifuture_init(apache::thrift::RpcOptions& rpcOptions, ::std::int64_t p_int1);
 public:
};

} // namespace apache::thrift

namespace test::namespace_from_package_without_module_name {
using TestServiceAsyncClient [[deprecated("Use apache::thrift::Client<TestService> instead")]] = ::apache::thrift::Client<TestService>;
} // namespace test::namespace_from_package_without_module_name
