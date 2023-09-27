#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdio>
#include <algorithm>
using namespace std;

int dp[50001];

int main(void)
{
	ios::sync_with_stdio(false);
	int n, m;
	int coins[20];
	cin >> n >> m;
	for (int i = 0; i < m; ++i)
		cin >> coins[i];
	for (int i = 0; i <= n; ++i)
		dp[i] = i;
	for (int i = 1; i < m; ++i)
	{
		for (int j = coins[i]; j <= n; ++j)
		{
			dp[j] = min(dp[j], dp[j - coins[i]] + 1);
		}
	}
	cout << dp[n] << endl;
	return 0;
}