#include<iostream>
#include<algorithm>
using namespace std;
int dp[2][1000000];
int v[250];
int main()
{
	int n;
	for (int j = 0; j < 1000000; j++)
	{
		dp[0][j] = 999999;
		dp[1][j] = 999999;
	}
	dp[0][0] = 0;
	dp[1][0] = 0;
	for (int i = 1;i < 250; i++)
	{
		int k = i * (i + 1) * (i + 2) / 6;
		if (k >= 1000000)break;
		v[i - 1] = k;
	}
	for (int i = 0; i < 1000000; i++)
	{
		for (int j = 0;j < 250; j++)
		{
			if (i + v[j] >= 1000000)break;
			dp[0][i + v[j]] = min(dp[0][i + v[j]], dp[0][i] + 1);
			if (v[j] % 2 == 0)continue;
			dp[1][i + v[j]] = min(dp[1][i + v[j]], dp[1][i] + 1);
		}
	}
	while (cin >> n && n != 0)
	{
		cout << dp[0][n] << " " << dp[1][n] << endl;
	}
	return 0;
}