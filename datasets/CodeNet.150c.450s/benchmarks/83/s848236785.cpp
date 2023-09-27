#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
	int N, W;
	cin >> N >> W;
	vector<int> v(N);
	vector<int> w(N);
	for (int i = 0; i < N; ++i)
	{
		cin >> v[i] >> w[i];
	}
	vector<vector<int> > dp(N + 1, vector<int>(W + 1));
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j <= W; ++j)
		{
			if (j < w[i])
			{
				dp[i + 1][j] = dp[i][j];
			}
			else
			{
				dp[i + 1][j] = max(dp[i][j], dp[i][j - w[i]] + v[i]);
			}
		}
	}
	cout << dp[N][W] << endl;
}

int main()
{
	solve();
	return(0);
}