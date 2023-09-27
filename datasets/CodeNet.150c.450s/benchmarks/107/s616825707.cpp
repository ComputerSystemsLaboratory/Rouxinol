#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
static const int INF = 1e9;
int dp[1001][1001];

void solve()
{
	string s1, s2;
	cin >> s1 >> s2;
	int m = s1.size();
	int n = s2.size();
	for (int i = 0; i <= m; ++i)
	{
		for (int j = 0; j <= n; ++j)
		{
			dp[i][j] = INF;
		}
	}
	for (int i = 0; i <= m; ++i)
	{
		dp[i][0] = i;
	}
	for (int i = 0; i <= n; ++i)
	{
		dp[0][i] = i;
	}
	for (int i = 1; i <= m; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			if (s1[i - 1] == s2[j - 1])
			{
				dp[i][j] = min(dp[i][j], dp[i - 1][j - 1]);
			}
			else
			{
				dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1;
			}
		}
	}
	cout << dp[m][n] << endl;
}

int main()
{
	solve();
	return(0);
}