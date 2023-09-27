#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n,m;
	int i,j;
	cin >> n >> m;
	int coins[m];
	for(int i=0;i<m;i++)
	{
		cin >> coins[i];	
	}
	sort(coins, coins+m);
	int dp[n+1][m+1];
	for(i=0;i<=n;i++)
		for(j=0;j<=m;j++)
			dp[i][j]=0;

	for(i=0;i<=n;i++)
	{
		dp[i][1]=i;
	}


	for(i=2;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j-coins[i-1] >= 0)
			dp[j][i] = min(dp[j][i-1], dp[j-coins[i-1]][i]+1);
			else
				dp[j][i] = dp[j][i-1];
		}
	}
	/*for(i=0;i<=n;i++)
	{
		for(j=0;j<=m;j++)
		{
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}*/
	cout << dp[n][m] << endl;
	return 0;
}