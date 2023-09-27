# include <iostream>
# include <algorithm>

using namespace std;
int N, W;
const int MAX_N = 100, MAX_W = 10000;
int v[MAX_N],w[MAX_N];
int dp[MAX_N + 1][MAX_W + 1]; //dp????????????

void solve() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= W; j++) {
			if (j < w[i]) {
				dp[i + 1][j] = dp[i][j];
			}
			else {
				dp[i + 1][j] = max(dp[i][j], dp[i][j - w[i]] + v[i]);
			}
		}
	}
	cout << dp[N][W] << endl;
}

int main() {
	cin >> N >> W;
	for (int i = 0; i < N; i++) {
		cin >> v[i] >> w[i];
	}
	solve();
	return 0;
}