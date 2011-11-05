#include "answer.h"
#include <algorithm>
using namespace std;

void solve(int l, int n, int x[], int &mi, int &ma) {
	int i;

	// min
	mi = 0;
	for (i = 0; i < n; i++) {
		mi = max(mi, min(x[i], l - x[i]));
	}

	// max
	ma = 0;
	for (i = 0; i < n; i++) {
		ma = max(ma, max(x[i], l - x[i]));
	}
}
