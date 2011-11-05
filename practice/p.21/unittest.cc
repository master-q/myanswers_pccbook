#include "answer.h"
#include "gtest/gtest.h"

TEST(Solve, Test1) {
	int r;
	int n = 5;
	int a[] = {2,3,4,5,10};

	r = solve(n, a);
	EXPECT_EQ(12, r);
}

TEST(Solve, Test2) {
	int r;
	int n = 4;
	int a[] = {4,5,10,20};

	r = solve(n, a);
	EXPECT_EQ(0, r);
}
