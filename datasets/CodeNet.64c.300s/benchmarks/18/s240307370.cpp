#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int dp[31];
	dp[0]=1;
	for(int i = 1; i < 31; ++i)
	{
		dp[i]=dp[i-1];
		if(2<=i) dp[i]+=dp[i-2];
		if(3<=i) dp[i]+=dp[i-3];
	}

	int n;
	while(cin>>n,n) 
	{
		int comb=dp[n];
		int ans=0;
		while(comb>0) 
		{
			comb-=3650;
			ans++;
		}
		cout<<ans<<endl;
	}
  return 0;
}