#include "operations.h"

#include <gtest/gtest.h>

TEST(SumTest, Simple) {
  int s = sum(2, 3);
  EXPECT_EQ(5, s);
}
