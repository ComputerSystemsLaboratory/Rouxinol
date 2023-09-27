#include<iostream>
#include<string.h>
using namespace std;
int a[15],dp[15];
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		memset(dp,0,sizeof(dp));
		for(int i=1;i<=10;i++)
		 cin>>a[i];
		int ans=0;
		for(int i=10;i>=1;i--)
		{
			dp[i]++;
		 for(int j=i+1;j<=10;j++)
		  {
		  	if(a[i]>a[j])
		  	 dp[i]=max(dp[i],dp[j]+1);
		  	
		  }
		  ans=max(ans,dp[i]);
	}
		  if(ans>2)
		  cout<<"NO"<<endl;
		  else
		  cout<<"YES"<<endl;
	}
}