#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	int N, W; cin >> N >> W;
	vector<int> v(N), w(N);
	for (int i = 0; i < N;i++) {
		cin >> v[i] >> w[i];
	} 
	vector<vector<int>> dp(N + 1, vector<int>(W + 1, 0));
	for (int i = 0; i < N; i++) {
		for (int j = 1; j <= W;j++) {
			if (j - w[i] < 0) { dp[i + 1][j] = dp[i][j]; }
			else { dp[i + 1][j] = max(dp[i][j], dp[i][j - w[i]] + v[i]); }
		}
	}
	cout << dp[N][W] << endl;
}