#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
using namespace std;

int dp[1100][1100]={};
int main()
{
	string a=" ",b=" ",x;
	cin>>x;a+=x;
	cin>>x;b+=x;
	
	for(int i=0;i<1100;i++)dp[i][0]=dp[0][i]=i;
	
	for(int i=1;i<a.size();i++)
	{
		for(int l=1;l<b.size();l++)
		{
			int cost (a[i]==b[l]?0:1);
			dp[i][l]=min(dp[i-1][l]+1,min(dp[i][l-1]+1,dp[i-1][l-1]+cost));
		}
		//cout<<endl;
	}
	cout<<dp[a.size()-1][b.size()-1]<<endl;
	
	
	
}