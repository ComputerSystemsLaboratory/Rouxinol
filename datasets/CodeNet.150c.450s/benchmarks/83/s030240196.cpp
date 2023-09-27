#include<iostream>
#include <algorithm>

using namespace std;

int n, W, v[110], w[110], dp[110][10010];
int calc() {
	for (int i = n - 1; i >= 0; i--) {
		for (int j = 0; j <= W; j++) {
			if (j < w[i])dp[i][j] = dp[i + 1][j];
			else dp[i][j] = max(dp[i + 1][j], dp[i + 1][j - w[i]] + v[i]);
		}
	}
	return dp[0][W];
}
int main() {
	int ans;
	cin >> n >> W;
	for (int i = 0; i < n; i++) {
		cin >> v[i] >> w[i];
	}
	ans = calc();
	cout << ans << endl;
	return 0;

}