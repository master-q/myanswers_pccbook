#include "answer.h"
#include "gtest/gtest.h"

TEST(Solve, Test1) {
	int l = 10;
	int n = 3;
	int x[] = {2,6,7};
	int min = 0, max = 0;

	solve(l, n, x, min, max);
	EXPECT_EQ(4, min);
	EXPECT_EQ(8, max);
}
