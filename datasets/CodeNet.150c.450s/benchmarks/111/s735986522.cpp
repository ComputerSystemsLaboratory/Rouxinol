#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	long long int j,n,i,a[101],dp[102][21]={0};
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		if(i==1)
		{
			dp[1][a[i]]=1;
		}
	}
	for(i=1;i<=n-1;i++)
	{
		for(j=0;j<21;j++)
		{
			if(dp[i][j]>=1)
			{
				if(j+a[i+1]<=20)
				{
					dp[i+1][j+a[i+1]]=dp[i+1][j+a[i+1]]+dp[i][j];
				}
				if(j-a[i+1]>=0)
				{
					dp[i+1][j-a[i+1]]=dp[i+1][j-a[i+1]]+dp[i][j];
				}
			}
		}
	}
	cout<<dp[n-1][a[n]]<<endl;
	return 0;
}