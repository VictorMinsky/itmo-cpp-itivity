#include "st_petersburg.h"

#include <gtest/gtest.h>

#include <cmath>

TEST(MonteCarloTest, zero_iterations)
{
    EXPECT_FALSE(std::isnan(calculate_expected_value(0, 1000)));
}

TEST(MonteCarloTest, small_bank)
{
    EXPECT_NEAR(7.56, calculate_expected_value(10000, 100), 5e-1);
    EXPECT_NEAR(7.56, calculate_expected_value(10000000, 100), 5e-2);
}

TEST(MonteCarloTest, medium_bank)
{
    EXPECT_NEAR(20.91, calculate_expected_value(100000000, 1000000), 5e-1);
    EXPECT_NEAR(20.91, calculate_expected_value(1000000000, 1000000), 1e-1);
}
