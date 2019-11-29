//
// Created by Haiyang  Li on 11/28/19.
//
#include "gtest/gtest.h"
#include "search/Permutations.hpp"

namespace {
    TEST(PermutationsTest, Success) {
        Permutations subject;
        std::vector<int> nums = { 1, 2, 3 };

        std::vector<std::vector<int>> expected = {
                { 1, 2, 3 },
                { 1, 3, 2 },
                { 2, 1, 3 },
                { 2, 3, 1 },
                { 3, 2, 1 },
                { 3, 1, 2 },
        };
        auto actual = subject.permute(nums);
        EXPECT_EQ(expected, actual);
    }
}
