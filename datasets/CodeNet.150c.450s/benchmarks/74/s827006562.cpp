#include <bits/stdc++.h>
#define INF 1000000000
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> dp(n+1, INF);
	dp[0] = 0;
	for (int i = 0, c; i < m; i++) {
		cin >> c;
		for (int j = c; j <= n; j++) {
			if (dp[j - c] != INF && dp[j] > dp[j - c] + 1) {
				dp[j] = dp[j - c] + 1;
			}
		}
	}
	cout << dp[n] << endl;
	return 0;
}