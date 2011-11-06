#include "answer.h"
#include "gtest/gtest.h"

#include <iostream>
using namespace std;

TEST(Solve, Test1) {
	int r;
	char field[] =
	    "W........WW."
	    ".WWW.....WWW"
	    "....WW...WW."
	    ".........WW."
	    ".........W.."
	    "..W......W.."
	    ".W.W.....WW."
	    "W.W.W.....W."
	    ".W.W......W."
	    "..W.......W.";

	r = solve(10, 12, field);
	EXPECT_EQ(3, r);
}
