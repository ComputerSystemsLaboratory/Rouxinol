#include <iostream>
#include <algorithm>
#define MAX_R 10
#define MAX_C 10000
using namespace std;

int a[MAX_R][MAX_C];
int b[MAX_R][MAX_C];

void copy(int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			b[i][j] = a[i][j];
		}
	}
}

void bit_reverse(int n, int c) {
	for (int i = 0; i < c; i++) {
		if (b[n][i]) b[n][i] = 0;
		else b[n][i] = 1;
	}
}

int count_one(int r, int n) {
	int count = 0;
	for (int j = 0; j < r; j++) {
		if (b[j][n]) count++;
	}
	return count;
}

int main() {
	while (true) {
		int r, c;
		cin >> r >> c;
		if (r == 0 && c == 0) return 0;
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				cin >> a[i][j];
			}
		}
		
		int ans = 0;
		for (int i = 0; i < ((1 << r)); i++) {
			//cout << "i = " << i << endl;
			copy(r, c);
			for (int j = 0; j < r; j++) {
				if (i & (1 << j)) {
					bit_reverse(j, c);
				}
			}
			/*
			for (int i = 0; i < r; i++) {
				for (int j = 0; j < c; j++) {
					cout << b[i][j] << ' ';
				}
				cout << endl;
			}
			*/

			int count = 0;
			for (int j = 0; j < c; j++) {
				count += max(count_one(r, j), r - count_one(r, j));
			}
			ans = max(ans, count);
		}
		cout << ans << endl;
	}
}