#include <iostream>
#include <algorithm>
using namespace std;
int n, m, v[100], w[100], dp[102][10007];
int main() {
	cin >> n >> m;
	for(int i = 0; i < n; i++) cin >> v[i] >> w[i];
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			dp[i][j] = dp[i - 1][j];
			if(j >= w[i - 1]) dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i - 1]] + v[i - 1]);
		}
	}
	cout << dp[n][m] << endl;
}