#include <iostream>
#include <algorithm>

using namespace std;

int n, m;
const int MAX_N = 50000, MAX_M = 20, INF = 1000000;
int c[MAX_M + 2];
int dp[MAX_M + 2][MAX_N + 2];


void solve() {
	for (int j = 0; j <= n; j++) {
		dp[0][j] = INF;
	}

	for (int i = 0; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			if (j < c[i]) {
				dp[i + 1][j] = dp[i][j];
			}
			else {
				dp[i + 1][j] = min(dp[i][j], dp[i + 1][j - c[i]] + 1);
			}
		}
	}
	cout << dp[m][n] << endl;
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> c[i];
	}
	solve();
	return 0;
}