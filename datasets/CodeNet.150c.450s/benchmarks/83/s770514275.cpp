#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
/*
int dfs(int pos, int nowW) {
	if (pos == N) return 0;
	if (nowW+w[pos] > W) return dfs(pos+1, nowW);
	return max(dfs(pos+1, nowW+w[pos])+v[pos], dfs(pos+1, nowW));
}
*/

int main() {
	int N,W;
	cin>>N>>W;
	vector<int> v(N), w(N);
	for (auto i = 0; i < N; i++)
		cin>>v[i]>>w[i];
	vector<vector<int>> dp(N+1, vector<int>(W+1, 0));
	//dp[position][current weight]
	for (auto i = N-1; i >= 0; i--) {
		for (auto j = 0; j <= W; j++) {
			if (j+w[i] > W) dp[i][j] = dp[i+1][j];
			else dp[i][j] = max(dp[i+1][j+w[i]]+v[i], dp[i+1][j]);
		}
	}
	cout << dp[0][0] << endl;
	return 0;
}