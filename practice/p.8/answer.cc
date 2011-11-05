#include "answer.h"
#include <algorithm>
using namespace std;

int bin_search(int n, int k[], int f) {
	int i = n / 2;

	if (k[i] == f || k[n] == f) {
		return YES;
	}
	if (n == 0 || i == 0) {
		return NO;
	}

	if (k[i] < f) {
		return bin_search(n - i, k + i, f);
	} else {
		return bin_search(i, k, f);
	}
}

int solve(int n, int m, int k[]) {
	int a, b, c;

	sort(k, k + n);

	for (a = 0; a < n; a++) {
		for (b = 0; b < n; b++) {
			for (c = 0; c < n; c++) {
				int f = m - k[a] - k[b] - k[c];
				if (f > 0 &&
				    YES == bin_search(n, k, f)) {
					return YES;
				}
			}
		}
	}

	return NO;
}
