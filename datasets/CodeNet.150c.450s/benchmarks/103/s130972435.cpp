#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
	int N, S;
	ll dp[11][11][101] = {0}; dp[0][0][0] = 1;
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j <= 10; ++j) {
			for (int k = 0; k <= 100; ++k) {
				if (dp[i][j][k]) {
					dp[i+1][j][k] += dp[i][j][k];
					int nj = j + 1;
					int nk = k + i;
					if (nj <= 10 && nk <= 100) {
						dp[i+1][nj][nk] += dp[i][j][k];
//						cout << i+1 << " " << nj << " " << nk << endl;
					}
				}
			}
		}
	}
	while (cin >> N >> S, N || S) {
		cout << dp[10][N][S] << endl;
	}
}