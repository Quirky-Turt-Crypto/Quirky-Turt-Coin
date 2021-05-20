// Copyright (c) 2020 The PIVX developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or https://www.opensource.org/licenses/mit-license.php.

#ifndef quirkyturt_SAPLING_TEST_FIXTURE_H
#define quirkyturt_SAPLING_TEST_FIXTURE_H

#include "test/test_quirkyturt.h"

/**
 * Testing setup that configures a complete environment for Sapling testing.
 */
struct SaplingTestingSetup : public TestingSetup {
    SaplingTestingSetup();
    ~SaplingTestingSetup();
};


#endif //quirkyturt_SAPLING_TEST_FIXTURE_H
