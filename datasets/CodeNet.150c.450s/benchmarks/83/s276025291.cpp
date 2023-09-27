#include<iostream>
#include<algorithm>

using namespace std;

int N, W, dp[101][10001];
pair<int, int> mono[101];//f:weight s:price

int main()
{
	cin >> N >> W;

	for (int a = 1; a <= N; a++)
	{
		cin >> mono[a].second >> mono[a].first;
	}

	for(int a = 0;a<W;a++)
	{
		dp[0][a] = 0;
	}
	for(int a = 0;a<N;a++)
	{
		dp[a][0] = 0;
	}

	for(int a = 1;a<=N;a++)
	{
		for(int b = 1;b<=W;b++)//dp[a][b]
		{
			if (b - mono[a].first >=0)
			{
				dp[a][b] = max(dp[a-1][b], dp[a - 1][b - mono[a].first] + mono[a].second);
			}
			else
			{
				dp[a][b] = dp[a - 1][b];
			}
		}
	}

	cout << dp[N][W] << endl;

	return 0;
}