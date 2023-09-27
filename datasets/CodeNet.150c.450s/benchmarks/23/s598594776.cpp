#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int i=0,n,dp[45]={0};
	cin>>n;
	dp[0]=1;
	dp[1]=1;
	while(dp[n]<=0)
	{
		dp[i+2]=dp[i]+dp[i+1];
		i++;
	}
	cout<<dp[n]<<endl;	
	return 0;
}