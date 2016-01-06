#include "operations.h"

#include <gtest/gtest.h>

TEST(SumTest, Sum) {
  EXPECT_EQ(5, sum(2, 3));
}

TEST(SumTest, Minus) {
  EXPECT_EQ(5, minus(2, 3));
}
