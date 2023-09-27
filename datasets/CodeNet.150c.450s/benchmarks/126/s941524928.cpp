#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int a,b;
	while(cin>>a>>b,a) 
	{
		int dp[b+1][a+1];
		memset(dp,0,sizeof(dp));
		dp[1][1]=1;
		int n; cin>>n;
		bool flag[b+1][a+1];
		memset(flag,0,sizeof(flag));
		for(int i = 0; i < n; ++i)
		{
			int s,t; cin>>s>>t;
			flag[t][s]=true;
		}

		for(int i = 1; i <= b; ++i)
		{
			for(int j = 1; j <= a; ++j)
			{
				if(flag[i][j]) continue;
				if(0<=i-1) dp[i][j]+=dp[i-1][j];
				if(0<=j-1) dp[i][j]+=dp[i][j-1];
			}	
		}
		cout<<dp[b][a]<<endl;
	}
  return 0;
}