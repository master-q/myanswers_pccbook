#include "answer.h"
#include <algorithm>
using namespace std;

int solve(int n, int a[]) {
	int i, j, k, r = 0;

	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			for (k = j + 1; k < n; k++) {
				int s = a[i] + a[j] + a[k];
				int m = max(a[i], max(a[j], a[k]));
				int rest = s - m;
				if (rest > m && s > r) {
					r = s;
				}
			}
		}
	}

	return r;
}
