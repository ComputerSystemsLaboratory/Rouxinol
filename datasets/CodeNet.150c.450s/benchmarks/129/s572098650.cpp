#include <iostream>
#include <cstdio>

using namespace std;

int main() {

	int r, c;
	cin >> r >> c;

	int a[101][101] = {};
	int r_total = 0;

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> a[i][j];
			r_total += a[i][j];
		}
		a[i][c] = r_total;
		r_total = 0;
	}

	int c_total = 0;
	for (int j = 0; j <= c; j++) {
		for (int i = 0; i <= r; i++) {
			c_total += a[i][j];
		}
		a[r][j] = c_total;
		c_total = 0;
	}

	int total;

	for (int i = 0; i <= r; i++) {
		for (int j = 0; j <= c; j++) {
			printf("%d%c", a[i][j], j < c ? ' ' : '\n');
		}
	}

	return 0;
}