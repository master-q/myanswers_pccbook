#include "answer.h"
#include <algorithm>
using namespace std;

int dfs(int n, int a[], int k, int sum) {
	if (sum == k || sum + a[0] == k) {
		return YES;
	}
	if (0 == n) {
		return NO;
	}

	if (YES == dfs(n - 1, a + 1, k, sum)) {
		return YES;
	} else {
		return dfs(n -1, a + 1, k, sum + a[0]);
	}
}

int solve(int n, int a[], int k) {
	return dfs(n, a, k, 0);
}
