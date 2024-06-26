// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: account/v1alpha1/account.proto

#include "account/v1alpha1/account.pb.h"
#include "account/v1alpha1/account.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>
namespace account {
namespace v1alpha1 {

static const char* AccountService_method_names[] = {
  "/account.v1alpha1.AccountService/Create",
};

std::unique_ptr< AccountService::Stub> AccountService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< AccountService::Stub> stub(new AccountService::Stub(channel, options));
  return stub;
}

AccountService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_Create_(AccountService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status AccountService::Stub::Create(::grpc::ClientContext* context, const ::account::v1alpha1::CreateRequest& request, ::account::v1alpha1::CreateResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::account::v1alpha1::CreateRequest, ::account::v1alpha1::CreateResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Create_, context, request, response);
}

void AccountService::Stub::async::Create(::grpc::ClientContext* context, const ::account::v1alpha1::CreateRequest* request, ::account::v1alpha1::CreateResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::account::v1alpha1::CreateRequest, ::account::v1alpha1::CreateResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Create_, context, request, response, std::move(f));
}

void AccountService::Stub::async::Create(::grpc::ClientContext* context, const ::account::v1alpha1::CreateRequest* request, ::account::v1alpha1::CreateResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Create_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::account::v1alpha1::CreateResponse>* AccountService::Stub::PrepareAsyncCreateRaw(::grpc::ClientContext* context, const ::account::v1alpha1::CreateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::account::v1alpha1::CreateResponse, ::account::v1alpha1::CreateRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Create_, context, request);
}

::grpc::ClientAsyncResponseReader< ::account::v1alpha1::CreateResponse>* AccountService::Stub::AsyncCreateRaw(::grpc::ClientContext* context, const ::account::v1alpha1::CreateRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncCreateRaw(context, request, cq);
  result->StartCall();
  return result;
}

AccountService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      AccountService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< AccountService::Service, ::account::v1alpha1::CreateRequest, ::account::v1alpha1::CreateResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](AccountService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::account::v1alpha1::CreateRequest* req,
             ::account::v1alpha1::CreateResponse* resp) {
               return service->Create(ctx, req, resp);
             }, this)));
}

AccountService::Service::~Service() {
}

::grpc::Status AccountService::Service::Create(::grpc::ServerContext* context, const ::account::v1alpha1::CreateRequest* request, ::account::v1alpha1::CreateResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace account
}  // namespace v1alpha1

