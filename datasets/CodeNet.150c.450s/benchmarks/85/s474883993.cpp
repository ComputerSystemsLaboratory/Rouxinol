#include<iostream>
#include<algorithm>
using namespace std;

void MatrixChainMultiplication(int n,int p[],int m[101][101]) {
	int i, j, k,l;
	for (i = 1; i <= n; i++) m[i][i] = 0;
	for (l = 2; l <= n; l++) {
		for (i = 1; i <= n - l +1; i++) {
			j = i + l - 1;
			m[i][j] = (1<<21);
			for (k = i; k <= j - 1; k++) {
				
				m[i][j] = min(m[i][j], m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j]);
			}
		}
	}
}

int main() {
	int n, p[101], m[101][101];
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> p[i - 1] >> p[i];
	MatrixChainMultiplication(n, p, m);
	cout << m[1][n] << endl;

	
}