// Copyright (c) 2020 The quirkturt developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or https://www.opensource.org/licenses/mit-license.php.

#ifndef quirkturt_SAPLING_TEST_FIXTURE_H
#define quirkturt_SAPLING_TEST_FIXTURE_H

#include "test/test_quirkturt.h"

/**
 * Testing setup that configures a complete environment for Sapling testing.
 */
struct SaplingTestingSetup : public TestingSetup {
    SaplingTestingSetup();
    ~SaplingTestingSetup();
};


#endif //quirkturt_SAPLING_TEST_FIXTURE_H
