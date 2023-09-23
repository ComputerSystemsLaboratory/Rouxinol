#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a,b,n;
	while(cin>>a>>b,a){
	cin>>n;
	bool out[17][17];
	for(int i=0;i<a;i++)for(int j=0;j<b;j++)out[i][j]=true;
	int u,v;
	for(int i=0;i<n;i++)
	{
		cin>>u>>v;
		u--;v--;
		out[u][v]=false;
	}
	int dp[17][17]={};
	if(out[0][0])dp[0][0]=1;
	for(int i=1;i<a;i++)if(out[i][0])dp[i][0]=dp[i-1][0];
	for(int i=1;i<b;i++)if(out[0][i])dp[0][i]=dp[0][i-1];
	for(int i=1;i<a;i++)
	{
		for(int j=1;j<b;j++)
		{
			if(out[i][j])
			{
				dp[i][j]=dp[i-1][j]+dp[i][j-1];
			}
			else dp[i][j]=0;
		}
	}
	cout<<dp[a-1][b-1]<<endl;}
	return 0;
}