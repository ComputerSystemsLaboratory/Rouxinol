#include<bits/stdc++.h>
using namespace std;
#define Min(i,j,k) min(i,min(j,k))
int dp[1005][1005];
string s1,s2;
signed main(void){
	cin>>s1>>s2;
	memset(dp,0x3f,sizeof(dp));
	for(int i=0;i<s1.length();i++)
		dp[i][0]=i;
	for(int i=0;i<s2.length();i++)
		dp[0][i]=i;
	for(int i=1;i<=s1.length();i++)
		for(int j=1;j<=s2.length();j++){
			if(s1[i-1]==s2[j-1])
				dp[i][j]=Min(dp[i-1][j]+1,dp[i][j-1]+1,dp[i-1][j-1]);
			else
				dp[i][j]=Min(dp[i-1][j],dp[i][j-1],dp[i-1][j-1])+1;
		}
	cout<<dp[s1.length()][s2.length()]<<endl;
	return 0;
} 