#include <bits/stdc++.h>
using namespace std;

int main()
{

	int v,e;
	cin >> v >> e;

	const int infinity=65536*32766;
	vector<vector<int>> dp(v,vector<int>(v));
	for (int i=0;i<v;++i)
	{
		for (int j=0;j<v;++j)
		{
			if (i==j)
			{
				dp[i][j]=0;
			}
			else
			{
				dp[i][j]=infinity;
			}
		}
	}

	for (int i=0;i<e;++i)
	{
		int s,t,d;
		cin >> s >> t >> d;
		dp[s][t]=d;
	}

	for (int k=0;k<v;++k)
	{
		for (int i=0;i<v;++i)
		{
			for (int j=0;j<v;++j)
			{
				if ((dp[i][k]==infinity)||(dp[k][j]==infinity))
				{
					continue;
				}
				dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
			}
		}
	}

	// check negative cycle
	for (int i=0;i<v;++i)
	{
		if (dp[i][i]<0)
		{
			cout << "NEGATIVE CYCLE" << endl;
			return 0;
		}
	}

	for (int i=0;i<v;++i)
	{
		for (int j=0;j<v;++j)
		{
			if (j>0)
			{
				cout << " ";
			}
			if (dp[i][j]!=infinity)
			{
				cout << dp[i][j];
			}
			else
			{
				cout << "INF";
			}
		}
		cout << endl;
	}
}


