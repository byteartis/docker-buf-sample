// @generated by protoc-gen-es v2.2.3
// @generated from file account/v1alpha1/account.proto (package account.v1alpha1, syntax proto3)
/* eslint-disable */

import type { GenFile, GenMessage, GenService } from "@bufbuild/protobuf/codegenv1";
import type { Message } from "@bufbuild/protobuf";

/**
 * Describes the file account/v1alpha1/account.proto.
 */
export declare const file_account_v1alpha1_account: GenFile;

/**
 * @generated from message account.v1alpha1.CreateRequest
 */
export declare type CreateRequest = Message<"account.v1alpha1.CreateRequest"> & {
  /**
   * @generated from field: string email = 1;
   */
  email: string;

  /**
   * @generated from field: string password = 2;
   */
  password: string;
};

/**
 * Describes the message account.v1alpha1.CreateRequest.
 * Use `create(CreateRequestSchema)` to create a new message.
 */
export declare const CreateRequestSchema: GenMessage<CreateRequest>;

/**
 * @generated from message account.v1alpha1.CreateResponse
 */
export declare type CreateResponse = Message<"account.v1alpha1.CreateResponse"> & {
  /**
   * @generated from field: string id = 1;
   */
  id: string;
};

/**
 * Describes the message account.v1alpha1.CreateResponse.
 * Use `create(CreateResponseSchema)` to create a new message.
 */
export declare const CreateResponseSchema: GenMessage<CreateResponse>;

/**
 * @generated from service account.v1alpha1.AccountService
 */
export declare const AccountService: GenService<{
  /**
   * @generated from rpc account.v1alpha1.AccountService.Create
   */
  create: {
    methodKind: "unary";
    input: typeof CreateRequestSchema;
    output: typeof CreateResponseSchema;
  },
}>;

