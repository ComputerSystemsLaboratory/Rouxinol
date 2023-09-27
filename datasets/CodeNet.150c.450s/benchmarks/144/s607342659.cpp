#include <iostream>
#include <string>
#include <stddef.h>
#include <stack>
#include <queue>

using namespace std;


int main() {
	int n, m, l;
	int a[101][101];
	int b[101][101];
	long long c[101][101];

	cin >> n >> m >> l;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < l; j++) {
			cin >> b[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++) {
			c[i][j] = 0;
			for (int k = 0; k < m; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++) {
			cout << c[i][j];
			if (j < l - 1) cout << ' ';
		}
		cout << endl;
	}
}