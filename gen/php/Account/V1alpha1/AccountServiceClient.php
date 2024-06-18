<?php
// GENERATED CODE -- DO NOT EDIT!

namespace Account\V1alpha1;

/**
 */
class AccountServiceClient extends \Grpc\BaseStub {

    /**
     * @param string $hostname hostname
     * @param array $opts channel options
     * @param \Grpc\Channel $channel (optional) re-use channel object
     */
    public function __construct($hostname, $opts, $channel = null) {
        parent::__construct($hostname, $opts, $channel);
    }

    /**
     * @param \Account\V1alpha1\CreateRequest $argument input argument
     * @param array $metadata metadata
     * @param array $options call options
     * @return \Grpc\UnaryCall
     */
    public function Create(\Account\V1alpha1\CreateRequest $argument,
      $metadata = [], $options = []) {
        return $this->_simpleRequest('/account.v1alpha1.AccountService/Create',
        $argument,
        ['\Account\V1alpha1\CreateResponse', 'decode'],
        $metadata, $options);
    }

}
