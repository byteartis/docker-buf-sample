// GENERATED CODE -- DO NOT EDIT!

'use strict';
var grpc = require('@grpc/grpc-js');
var account_v1alpha1_account_pb = require('../../account/v1alpha1/account_pb.js');

function serialize_account_v1alpha1_CreateRequest(arg) {
  if (!(arg instanceof account_v1alpha1_account_pb.CreateRequest)) {
    throw new Error('Expected argument of type account.v1alpha1.CreateRequest');
  }
  return Buffer.from(arg.serializeBinary());
}

function deserialize_account_v1alpha1_CreateRequest(buffer_arg) {
  return account_v1alpha1_account_pb.CreateRequest.deserializeBinary(new Uint8Array(buffer_arg));
}

function serialize_account_v1alpha1_CreateResponse(arg) {
  if (!(arg instanceof account_v1alpha1_account_pb.CreateResponse)) {
    throw new Error('Expected argument of type account.v1alpha1.CreateResponse');
  }
  return Buffer.from(arg.serializeBinary());
}

function deserialize_account_v1alpha1_CreateResponse(buffer_arg) {
  return account_v1alpha1_account_pb.CreateResponse.deserializeBinary(new Uint8Array(buffer_arg));
}


var AccountServiceService = exports.AccountServiceService = {
  create: {
    path: '/account.v1alpha1.AccountService/Create',
    requestStream: false,
    responseStream: false,
    requestType: account_v1alpha1_account_pb.CreateRequest,
    responseType: account_v1alpha1_account_pb.CreateResponse,
    requestSerialize: serialize_account_v1alpha1_CreateRequest,
    requestDeserialize: deserialize_account_v1alpha1_CreateRequest,
    responseSerialize: serialize_account_v1alpha1_CreateResponse,
    responseDeserialize: deserialize_account_v1alpha1_CreateResponse,
  },
};

exports.AccountServiceClient = grpc.makeGenericClientConstructor(AccountServiceService);
