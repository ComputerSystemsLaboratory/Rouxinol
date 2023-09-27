#include<bits/stdc++.h>

using namespace std;

int dp[1100][1100];

void solve()
{
	string s1,s2;
	cin>>s1>>s2;
	memset(dp,0,sizeof(dp));
	for(int i=0;i<s1.length();i++)
		for(int j=0;j<s2.length();j++)
			dp[i+1][j+1]=(s1[i]==s2[j]?dp[i][j]+1:max(dp[i+1][j],dp[i][j+1]));
	printf("%d\n",dp[s1.length()][s2.length()]);
}

int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
		solve();
	return 0;
}