#include<bits/stdc++.h>
#define INF 1000000
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	vector<vector<int> > dp(m+1,vector<int>(n+1,INF));
	int coin[m+1];
	for(int i=1; i<=m; i++)
	{
		scanf("%d",&coin[i]);
	}
	for(int i=0; i<=m; i++)
		dp[i][0] = 0;
	for(int i=1; i<=m; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if(j - coin[i] < 0) dp[i][j] = dp[i-1][j];
			else dp[i][j] = min(dp[i-1][j], dp[i][j-coin[i]] + 1);
		}
	}/*
	for(int i=0; i<=m; i++)
	{
		for(int j=0; j<=n; j++)
			cout << dp[i][j] << " ";
		cout << endl;
	}*/
	cout << dp[m][n] << endl;
	return 0;
}
