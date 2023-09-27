#include<iostream>
#include<algorithm>
#define MAX 100
#define INF (1 << 30)
using namespace std;

int n, p[103], m[102][102];

int matrixChainMultiplication(void);

int main() {
	int i;

	cin >> n;
	for (i = 1; i <= n; i++) {
		cin >> p[i - 1] >> p[i];
	}

	cout << matrixChainMultiplication() << endl;

	return 0;
}

int matrixChainMultiplication(void) {
	int i, j, k;
	for (i = 1; i <= n; i++)m[i][i] = 0;
	for (j = 2; j <= n; j++) {
		for (i = j - 1; i >= 1; i--) {
			m[i][j] = INF;
			for (k = i; k <= j - 1; k++) {
				m[i][j] = min(m[i][j], m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j]);
			}
		}
	}
	return m[1][n];
}