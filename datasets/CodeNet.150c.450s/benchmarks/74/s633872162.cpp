#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	int c[m];
	for (int i = 0; i < m; ++i) cin>>c[i];
	int dp[n+5];
	for (int i = 0; i < n+5; ++i) dp[i]=100000000;
	dp[0]=0;
	for (int i = 0; i < n+5; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if(i+c[j]<=n) dp[i+c[j]]=min(dp[i+c[j]],dp[i]+1);
		}
	}
	cout<<dp[n]<<endl;
	return 0;
}

