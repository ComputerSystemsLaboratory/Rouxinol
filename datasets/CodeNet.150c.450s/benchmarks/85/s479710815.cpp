#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll dp[101][101];

int main()
{
	int n;
	cin >> n;
	for(int i = 0;i<=n;i++)
	{
		for(int j = 0;j<=n;j++)
		{
			dp[i][j] = 1e18;
		}
	}
	for(int i =0 ;i<=n;i++)
	{
		dp[i][i] = 0;
		dp[i][i+1] = 0;

	}
	vector<ll> r(n),c(n);
	for(int i = 0;i<n;i++)cin >> r[i] >> c[i];

	for(int i =0;i<n-1;i++)
	{
		dp[i][i+2] = r[i] * c[i] * c[i+1];
	}
	for(int haba = 3;haba<=n;haba++)
	{
		for(int i = 0;i<=n-haba;i++)
		{
			for(int j = 1;j<haba;j++)
			{
				ll now = dp[i][i+j]+dp[i+j][i+haba]+r[i]*r[i+j]*c[i+haba-1];
				//if(i==0&&haba==4)
				//{
					//cout<<';'<<i<<' '<<i+j<<' '<<i+haba<<endl;
					//cout<<dp[i][i+j]<<' '<<dp[i+j][i+haba]<<';'<<r[i]<<' '<<r[i+j]<<' '<<c[i+haba-1]<<endl;
					//cout<<' '<<now<<endl;
				//}
				dp[i][i+haba] = min(dp[i][i+haba],now);
			}
		}
	}
	//for(int i = 0;i<n-1;i++){cout<<dp[i][i+2]<<endl;}
	//cout<<dp[1][4]<<endl;
	cout<<dp[0][n]<<endl;
}
