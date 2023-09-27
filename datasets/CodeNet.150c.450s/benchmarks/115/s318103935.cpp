#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
using namespace std;
int dp[1001][1001];
int solve(string a,string b)
{	
	
	int maxn=0;
	int len1=a.size(),len2=b.size();
	

	for(int i=1;i<=len1;i++)
		for(int j=1;j<=len2;j++)
		{
			if(a[i-1]==b[j-1])
				dp[i][j]=dp[i-1][j-1]+1;
			else 
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);//这个只是表示某个状态的不是最大的，这个是自己设定的
			maxn=max(maxn,dp[i][j]);
		}
		return maxn;
		
		
	
}
int main()
{	int n;
	string a,b;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		cout<<solve(a,b)<<endl;
	}
	return 0;
}
