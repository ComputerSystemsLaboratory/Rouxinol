#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
static const int INF = 1e9;
int dp[21][50001];

void solve()
{
	int n, m;
	cin >> n >> m;
	vector<int> coin(m);
	for (int i = 0; i < m; ++i)
	{
		cin >> coin[i];
	}
	for (int i = 0; i < 50001; ++i)
	{
		dp[0][i] = INF;
	}
	for (int i = 0; i < 21; ++i)
	{
		dp[i][0] = 0;
	}
	for (int i = 1; i <= m; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			if (j < coin[i - 1])
			{
				dp[i][j] = dp[i - 1][j];
			}
			else
			{
				dp[i][j] = min(dp[i - 1][j], dp[i][j - coin[i - 1]] + 1);
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