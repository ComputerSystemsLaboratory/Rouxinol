#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int dp[25][50010];

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> c(m+1);
	for (int i = 1; i <= m; i++)cin >> c[i];
	for (int j = 1; j <= n; j++)dp[0][j] = 100000000;
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			if (j - c[i] < 0)dp[i][j] = dp[i - 1][j];
			else dp[i][j] = min(dp[i - 1][j], dp[i][j - c[i]] + 1);
		}
	}

	cout << dp[m][n] << endl;
}