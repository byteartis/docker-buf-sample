// Code generated by protoc-gen-connect-go. DO NOT EDIT.
//
// Source: account/v1alpha1/account.proto

package accountv1alpha1connect

import (
	connect "connectrpc.com/connect"
	context "context"
	errors "errors"
	v1alpha1 "github.com/byteartis/docker-buf-sample/gen/go/account/v1alpha1"
	http "net/http"
	strings "strings"
)

// This is a compile-time assertion to ensure that this generated file and the connect package are
// compatible. If you get a compiler error that this constant is not defined, this code was
// generated with a version of connect newer than the one compiled into your binary. You can fix the
// problem by either regenerating this code with an older version of connect or updating the connect
// version compiled into your binary.
const _ = connect.IsAtLeastVersion1_13_0

const (
	// AccountServiceName is the fully-qualified name of the AccountService service.
	AccountServiceName = "account.v1alpha1.AccountService"
)

// These constants are the fully-qualified names of the RPCs defined in this package. They're
// exposed at runtime as Spec.Procedure and as the final two segments of the HTTP route.
//
// Note that these are different from the fully-qualified method names used by
// google.golang.org/protobuf/reflect/protoreflect. To convert from these constants to
// reflection-formatted method names, remove the leading slash and convert the remaining slash to a
// period.
const (
	// AccountServiceCreateProcedure is the fully-qualified name of the AccountService's Create RPC.
	AccountServiceCreateProcedure = "/account.v1alpha1.AccountService/Create"
)

// AccountServiceClient is a client for the account.v1alpha1.AccountService service.
type AccountServiceClient interface {
	Create(context.Context, *connect.Request[v1alpha1.CreateRequest]) (*connect.Response[v1alpha1.CreateResponse], error)
}

// NewAccountServiceClient constructs a client for the account.v1alpha1.AccountService service. By
// default, it uses the Connect protocol with the binary Protobuf Codec, asks for gzipped responses,
// and sends uncompressed requests. To use the gRPC or gRPC-Web protocols, supply the
// connect.WithGRPC() or connect.WithGRPCWeb() options.
//
// The URL supplied here should be the base URL for the Connect or gRPC server (for example,
// http://api.acme.com or https://acme.com/grpc).
func NewAccountServiceClient(httpClient connect.HTTPClient, baseURL string, opts ...connect.ClientOption) AccountServiceClient {
	baseURL = strings.TrimRight(baseURL, "/")
	accountServiceMethods := v1alpha1.File_account_v1alpha1_account_proto.Services().ByName("AccountService").Methods()
	return &accountServiceClient{
		create: connect.NewClient[v1alpha1.CreateRequest, v1alpha1.CreateResponse](
			httpClient,
			baseURL+AccountServiceCreateProcedure,
			connect.WithSchema(accountServiceMethods.ByName("Create")),
			connect.WithClientOptions(opts...),
		),
	}
}

// accountServiceClient implements AccountServiceClient.
type accountServiceClient struct {
	create *connect.Client[v1alpha1.CreateRequest, v1alpha1.CreateResponse]
}

// Create calls account.v1alpha1.AccountService.Create.
func (c *accountServiceClient) Create(ctx context.Context, req *connect.Request[v1alpha1.CreateRequest]) (*connect.Response[v1alpha1.CreateResponse], error) {
	return c.create.CallUnary(ctx, req)
}

// AccountServiceHandler is an implementation of the account.v1alpha1.AccountService service.
type AccountServiceHandler interface {
	Create(context.Context, *connect.Request[v1alpha1.CreateRequest]) (*connect.Response[v1alpha1.CreateResponse], error)
}

// NewAccountServiceHandler builds an HTTP handler from the service implementation. It returns the
// path on which to mount the handler and the handler itself.
//
// By default, handlers support the Connect, gRPC, and gRPC-Web protocols with the binary Protobuf
// and JSON codecs. They also support gzip compression.
func NewAccountServiceHandler(svc AccountServiceHandler, opts ...connect.HandlerOption) (string, http.Handler) {
	accountServiceMethods := v1alpha1.File_account_v1alpha1_account_proto.Services().ByName("AccountService").Methods()
	accountServiceCreateHandler := connect.NewUnaryHandler(
		AccountServiceCreateProcedure,
		svc.Create,
		connect.WithSchema(accountServiceMethods.ByName("Create")),
		connect.WithHandlerOptions(opts...),
	)
	return "/account.v1alpha1.AccountService/", http.HandlerFunc(func(w http.ResponseWriter, r *http.Request) {
		switch r.URL.Path {
		case AccountServiceCreateProcedure:
			accountServiceCreateHandler.ServeHTTP(w, r)
		default:
			http.NotFound(w, r)
		}
	})
}

// UnimplementedAccountServiceHandler returns CodeUnimplemented from all methods.
type UnimplementedAccountServiceHandler struct{}

func (UnimplementedAccountServiceHandler) Create(context.Context, *connect.Request[v1alpha1.CreateRequest]) (*connect.Response[v1alpha1.CreateResponse], error) {
	return nil, connect.NewError(connect.CodeUnimplemented, errors.New("account.v1alpha1.AccountService.Create is not implemented"))
}
