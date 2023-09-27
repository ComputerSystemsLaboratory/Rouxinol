#include <bits/stdc++.h>
#define INF 1000000000
#define MAX 100000
using namespace std;

int main()
{
	int N, W;
	cin >> N >> W;
	vector<vector<int>> dp(N + 1, vector<int>(MAX + 1, INF));
	dp[0][0] = 0;
	for (int i = 1, v, w; i <= N; i++) {
		cin >> v >> w;
		for (int j = MAX; j >= 0; j--) {
			if (j < MAX)
				dp[i][j] = min(dp[i][j], dp[i][j + 1]);
			if (j >= v) {
				dp[i][j] = min(dp[i][j], min(dp[i - 1][j], dp[i - 1][j - v] + w));
			}
			else {
				dp[i][j] = min(dp[i][j], dp[i - 1][j]);
			}
		}
	}
	cout << (upper_bound(dp[N].begin(), dp[N].end(), W) - dp[N].begin() - 1) << endl;
	return 0;
}