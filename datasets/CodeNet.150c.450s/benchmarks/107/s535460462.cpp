#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	string a,b;
	cin>>a>>b;
	int dp[1001][1001]={};
	for(int i=0;i<=a.length();i++)dp[i][0]=i;
	for(int j=0;j<=b.length();j++)dp[0][j]=j;
	for(int i=0;i<a.length();i++)
	{
		for(int j=0;j<b.length();j++)
		{
			dp[i+1][j+1]=min(dp[i][j]+(a[i]!=b[j]),min(dp[i+1][j]+1,dp[i][j+1]+1));
		}
	}
	cout<<dp[a.length()][b.length()]<<endl;
	return 0;
}