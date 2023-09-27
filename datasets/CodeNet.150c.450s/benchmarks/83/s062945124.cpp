#include <iostream>
#include <vector>
#include <algorithm>
#define INF (1<<30)
using namespace std;

int knapsack(int n, int wei,int W,vector<int>&v,vector<int>& w,vector<vector<int>>& dp) {
	if (wei > W) return -INF;
	if (n == v.size()) return 0;
	if (dp[n][wei] >= 0) return dp[n][wei];
	return dp[n][wei] = max(knapsack(n + 1, wei, W, v, w, dp), knapsack(n + 1, wei + w[n], W, v, w, dp) + v[n]);
}

int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	int N, W; cin >> N >> W;
	vector<int> v(N), w(N);
	for (int i = 0; i < N;i++) {
		cin >> v[i] >> w[i];
	} 
	/* dp */
	/*
	vector<vector<int>> dp(N + 1, vector<int>(W + 1, 0));
	for (int i = 0; i < N; i++) {
		for (int j = 1; j <= W;j++) {
			if (j - w[i] < 0) { dp[i + 1][j] = dp[i][j]; }
			else { dp[i + 1][j] = max(dp[i][j], dp[i][j - w[i]] + v[i]); }
		}
	}
	cout << dp[N][W] << endl;
	*/

	/* dps + memo */
	vector<vector<int>> dp(N + 1, vector<int>(W + 1, -INF));
	cout << knapsack(0, 0, W, v, w, dp) << endl;
}