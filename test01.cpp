#include "sum.h"

#include <gtest/gtest.h>

TEST(SumTest, Simple) {
  EXPECT_EQ(5, sum(2, 3));
}
