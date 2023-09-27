#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int LCS(string X, string Y) {

	int m, n;
	m = X.size();
	n = Y.size();

	int c[m + 1][n + 1];

	for (int i = 0; i <= m; ++i) {
		c[i][0] = 0;
	}
	for (int i = 0; i <= n; ++i) {
		c[0][i] = 0;
	}

	X = ' ' + X;
	Y = ' ' + Y;

	int maxl = 0;
	for (int i = 1; i <= m; ++i) {
		for (int j = 1; j <= n; ++j) {
			if (X[i] == Y[j]) {
				c[i][j] = c[i - 1][j - 1] + 1;
			} else {
				c[i][j] = max(c[i - 1][j], c[i][j - 1]);
			}
			maxl = max(maxl, c[i][j]);
		}
	}

	return maxl;
}

int main() {

	int q;
	scanf("%d", &q);

	for (int i = 0; i < q; ++i) {
		string X, Y;
		cin >> X >> Y;
		cout << LCS(X, Y) << endl;
	}

	return 0;

}