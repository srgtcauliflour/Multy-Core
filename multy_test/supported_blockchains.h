/* Copyright 2018 by Multy.io
 * Licensed under Multy.io license.
 *
 * See LICENSE for details
 */

#ifndef MULTY_TEST_SUPPORTED_BLOCKCHAINS_H
#define MULTY_TEST_SUPPORTED_BLOCKCHAINS_H

#include "multy_core/account.h"
#include "multy_core/bitcoin.h"
#include "multy_core/ethereum.h"
#include "multy_core/golos.h"

const BlockchainType BITCOIN_MAIN_NET {BLOCKCHAIN_BITCOIN, BITCOIN_NET_TYPE_MAINNET};
const BlockchainType BITCOIN_TEST_NET {BLOCKCHAIN_BITCOIN, BITCOIN_NET_TYPE_TESTNET};
const BlockchainType ETHEREUM_MAIN_NET { BLOCKCHAIN_ETHEREUM, ETHEREUM_CHAIN_ID_MAINNET };
const BlockchainType ETHEREUM_TEST_NET { BLOCKCHAIN_ETHEREUM, ETHEREUM_CHAIN_ID_RINKEBY };
const BlockchainType GOLOS_MAIN_NET { BLOCKCHAIN_GOLOS, GOLOS_NET_TYPE_MAINNET };
const BlockchainType GOLOS_TEST_NET { BLOCKCHAIN_GOLOS, GOLOS_NET_TYPE_TESTNET };

const BlockchainType SUPPORTED_BLOCKCHAINS[] =
{
    BITCOIN_MAIN_NET,
    BITCOIN_TEST_NET,
    ETHEREUM_MAIN_NET,
    ETHEREUM_TEST_NET,
    GOLOS_MAIN_NET,
    GOLOS_TEST_NET
};

const BlockchainType SUPPORTED_BLOCKCHAIN_TESTNETS[] =
{
    BITCOIN_TEST_NET,
    ETHEREUM_TEST_NET,
    GOLOS_TEST_NET,
};

#endif // MULTY_TEST_SUPPORTED_BLOCKCHAINS_H
