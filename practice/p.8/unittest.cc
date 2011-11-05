#include "answer.h"
#include "gtest/gtest.h"

TEST(Solve, Test1) {
	int r;
	int k[] = {1,3,5};

	r = solve(3, 10, k);
	EXPECT_EQ(YES, r);
}

TEST(Solve, Test2) {
	int r;
	int k[] = {1,3,5};

	r = solve(3, 9, k);
	EXPECT_EQ(NO, r);
}
