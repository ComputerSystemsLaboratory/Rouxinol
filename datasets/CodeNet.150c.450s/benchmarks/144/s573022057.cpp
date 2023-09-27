#include <iostream>
#include <cstdio>

using namespace std;

int main() {

	int n, m, l;
	cin >> n >> m >> l;

	int a[100][100] = {};

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}

	int b[100][100] = {};

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < l; j++) {
			cin >> b[i][j];
		}
	}

	long long int c[100][100] = {};

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++) {
			for (int k = 0; k < m; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++) {
			if (j != l - 1) {
				printf("%lld ", c[i][j]);
			}
			else {
				printf("%lld\n", c[i][j]);
			}
		}
	}

	return 0;
}