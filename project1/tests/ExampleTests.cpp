#include <gtest/gtest.h>

#include "../src/Example.h"

TEST(ExampleTests, MAC) {
   int x = 42;
   int y = 16;
   int sum = 100;
   int oldSum = sum;
   EXPECT_EQ(
         oldSum + x * y,
         MAC(x, y, sum)
         );
   EXPECT_EQ(
         oldSum + x * y,
         sum
         );
}
