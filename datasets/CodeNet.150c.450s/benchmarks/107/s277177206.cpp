#include <bits/stdc++.h>

typedef long long ll;
const ll INF=1e12;
using namespace std;
int main()
{
	string s1,s2;cin>>s1>>s2;
	vector< vector<ll> > dp(1001,vector<ll>(1001,0));
	int len1=s1.length(),len2=s2.length();
	
	for(int i=1;i<=len1;i++) dp[i][0]=i;
	for(int j=1;j<=len2;j++) dp[0][j]=j;
	for(int  i=1;i<=len1;i++){
			for(int j=1;j<=len2;j++){
				dp[i][j] = min(min(dp[i-1][j]+1,dp[i][j-1]+1),dp[i-1][j-1]+(s1[i-1]!=s2[j-1]));
			}
	}
	cout<<dp[len1][len2]<<endl;
}