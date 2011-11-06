#include "answer.h"
#include "gtest/gtest.h"

TEST(Solve, Test1) {
	int r;
	int a[] = {1,2,4,7};

	r = solve(4, a, 13);
	EXPECT_EQ(YES, r);
}

TEST(Solve, Test2) {
	int r;
	int a[] = {1,2,4,7};

	r = solve(4, a, 15);
	EXPECT_EQ(NO, r);
}
