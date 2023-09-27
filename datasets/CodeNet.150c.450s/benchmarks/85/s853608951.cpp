#include <algorithm>
#include <cstdio>
#include <iostream>

using namespace std;

int main() {
	int INFTY = 1000000000;

	int n;
	scanf("%d", &n);

	int p[n + 1];
	for (int i = 0; i < n; i++) {
		scanf("%d %d", p + i, p + i + 1);
	}

	int m[n + 1][n + 1];

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			m[i][j] = 0;
		}
	}

	for (int l = 2; l <= n; ++l) {
		for (int i = 1; i <= n - l + 1; ++i) {
			int j = i + l - 1;
			m[i][j] = INFTY;
			for (int k = i; k < j; ++k) {
				m[i][j] = min(m[i][j], m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j]);
			}
		}
	}
	cout << m[1][n] << endl;

	return 0;
}