#include<iostream>
#include<algorithm>
const int INF=(1<<22);
int dp[1000000];
int d[20];
int main()
{
	std::cin.tie(0);
	std::ios_base::sync_with_stdio(false);
	int n, m; std::cin >> n >> m;
	std::fill(dp, dp + n + 1 , INF);
	for (int i = 0; i < m; ++i) {
		std::cin >> d[i];
	}
	dp[0] = 0;
	for (int i = 0; i < m; ++i) {
		for (int j = d[i]; j <= n; ++j) {
			dp[j] = std::min(dp[j], dp[j - d[i]] + 1);
		}
	}
	std::cout << dp[n] << std::endl;
}