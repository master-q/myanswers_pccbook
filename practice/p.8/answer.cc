#include "answer.h"
#include <algorithm>
using namespace std;

int solve(int n, int m, int k[]) {
	int a, b, c, d;

	for (a = 0; a < n; a++) {
		for (b = 0; b < n; b++) {
			for (c = 0; c < n; c++) {
				for (d = 0; d < n; d++) {
					if (m == k[a] + k[b] + k[c] + k[d]) {
						return YES;
					}
				}
			}
		}
	}

	return NO;
}
