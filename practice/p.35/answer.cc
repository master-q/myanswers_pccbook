#include "answer.h"
#include <algorithm>
#include <iostream>
using namespace std;

char read_field(int m, char *field, int x, int y) {
	return field[x + y * m];
}

void write_field(int m, char *field, int x, int y, char v) {
	field[x + y * m] = v;
}

void show_field(int n, int m, char *field) {
	int x, y;

	for (y = 0; y < n; y++) {
		for (x = 0; x < m; x++) {
			cout << read_field(m, field, x, y);
		}
		cout << "\n";
	}
}

void dfs(int n, int m, char *field, int x, int y) {
	int xi, yj;

//	cout << "x:" << x << " y:" << y << "\n";

	if ('.' == read_field(m, field, x, y)) {
		return;
	}

	write_field(m, field, x, y, '.');

	for (yj = y - 1; yj <= y + 1; yj++) {
		for (xi = x - 1; xi <= x + 1; xi++) {
			if (xi == x && yj == y) {
				// nothing to do
			} else if (xi >= 0 && xi < m && yj >= 0 && yj < n) {
				dfs(n, m, field, xi, yj);
			}
		}
	}
}

int solve(int n, int m, char field[]) {
	int x, y, r = 0;

	for (y = 0; y < n; y++) {
		for (x = 0; x < m; x++) {
			if ('W' == read_field(m, field, x, y)) {
//				show_field(n, m, field);
				dfs(n, m, field, x, y);
				r++;
			}
		}
	}


	return r;
}
