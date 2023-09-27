#include<iostream>
#include<algorithm>
#define MAX 100
#define INFTY (1 << 21)
using namespace std;

int p[MAX + 1], mat[MAX + 1][MAX + 1];

void matrixChainMultiplication(int n) {
	for (int i = 1; i <= n; i++) {
		mat[i][i] = 0;
	}
	for (int l = 2; l <= n; l++) {
		for (int i = 1; i <= n - l + 1; i++) {
			int j = i + l - 1;
			mat[i][j] = INFTY;
			for (int k = i; k <= j - 1; k++) {
				mat[i][j] = min(mat[i][j], (mat[i][k] + mat[k + 1][j] + (p[i - 1] * p[k] * p[j])));
			}
		}
	}
}

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> p[i - 1] >> p[i];
	}
	matrixChainMultiplication(n);
	cout << mat[1][n] << endl;
	return 0;
}