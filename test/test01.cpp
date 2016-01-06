#include "operations.h"

#include <gtest/gtest.h>

TEST(OperationsTest, Sum) {
  EXPECT_EQ(5, sum(3, 2));
}

TEST(OperationsTest, Minus) {
  EXPECT_EQ(1, minus(3, 2));
}
