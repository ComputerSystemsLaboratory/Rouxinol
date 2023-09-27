#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include<bits/stdc++.h>

const static int NMAX = 50000;
const static int MMAX = 20;
static const int INF = (1 << 29);

int main() {
	int C[MMAX+1];
	int T[MMAX+1][NMAX + 1];
	int n, m;
	cin >> n >> m;
	C[0] = 0;
	for (int i = 1; i <= m; i++) {
		cin >> C[i];
	}
	fill(T[0], T[0] + n + 1, INF);
	for (int i = 0; i < m + 1; i++) {
		T[i][0] = 0;
	}
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			if (j >= C[i]) {
				T[i][j] = min(T[i - 1][j], T[i][j - C[i]] + 1);
			}
			else {
				T[i][j] = T[i - 1][j];
			}
		}
	}
	cout << T[m][n] << endl;
}