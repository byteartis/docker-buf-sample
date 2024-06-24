import * as grpcWeb from 'grpc-web';

import * as account_v1alpha1_account_pb from '../../account/v1alpha1/account_pb'; // proto import: "account/v1alpha1/account.proto"


export class AccountServiceClient {
  constructor (hostname: string,
               credentials?: null | { [index: string]: string; },
               options?: null | { [index: string]: any; });

  create(
    request: account_v1alpha1_account_pb.CreateRequest,
    metadata: grpcWeb.Metadata | undefined,
    callback: (err: grpcWeb.RpcError,
               response: account_v1alpha1_account_pb.CreateResponse) => void
  ): grpcWeb.ClientReadableStream<account_v1alpha1_account_pb.CreateResponse>;

}

export class AccountServicePromiseClient {
  constructor (hostname: string,
               credentials?: null | { [index: string]: string; },
               options?: null | { [index: string]: any; });

  create(
    request: account_v1alpha1_account_pb.CreateRequest,
    metadata?: grpcWeb.Metadata
  ): Promise<account_v1alpha1_account_pb.CreateResponse>;

}

