#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

const int INF = 1e8;

int main() {
	int n;
	cin >> n;
	vector<int> r(n), c(n);
	rep(i, n) cin >> r[i] >> c[i];
	vector<vector<int>> dp(n + 1, vector<int>(n + 1, INF));
	rep(i, n + 1) dp[i][i] = 0;
	rep(i, n) dp[i][i + 1] = 0;
	for (int w = 2; w <= n; w++) {
		for (int i = 0; i <= n - w; i++) {
			int j = i + w;
			for (int m = i + 1; m < j; m++) {
				int t = r[i] * r[m] * c[j - 1];
				dp[i][j] = min(dp[i][j], dp[i][m] + dp[m][j] + t);
			}
		}
	}
	cout << dp[0][n] << endl;
	return 0;
}
