#include<iostream>
#include<algorithm>
using namespace std;
#define REP(i,n) for(int i=0;i<(n);i++)
#define PII pair<int,int>

int dp[101][10001];
PII p[101];
int main()
{
	int N, W;
	cin >> N >> W;
	REP(i, N)cin >> p[i].first >> p[i].second;
	REP(i, N + 1)REP(j, W + 1)dp[i][j] = -1;
	REP(i, N)dp[i][0] = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j <= W; j++)
		{
			if (dp[i][j] != -1)
			{
				dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);
				int temp = j + p[i].second;
				if (temp <= W)
				{
					dp[i + 1][temp] = max(dp[i + 1][temp], dp[i][j] + p[i].first);
				}
			}
		}
	}
	int ans = 0;
	for (int i = W; i >= 0; i--)
	{
		if (ans < dp[N][i])
		{
			ans = dp[N][i];
		}
	}
	cout << ans << endl;
	return 0;
}