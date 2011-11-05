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
	int a, b;
	int *kk;

	kk = (int *) malloc(n * n * sizeof(int));
	// if (kk == NULL) { xxx }
	for (a = 0; a < n; a++) {
		for (b = 0; b < n; b++) {
			kk[a + b * n] = k[a] + k[b];
		}
	}

	sort(kk, kk + n * n);

	for (a = 0; a < n; a++) {
		for (b = 0; b < n; b++) {
			int f = m - k[a] - k[b];
			if (f > 0 &&
			    YES == bin_search(n * n, kk, f)) {
				return YES;
			}
		}
	}

	free(kk);

	return NO;
}
