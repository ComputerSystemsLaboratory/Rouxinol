#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<ll,ll> mp;
#define inf 1e9

vector<vector<ll> > levenshtein(string s1,string s2){
	ll n1 = s1.size(),n2 = s2.size();
	vector<vector<ll> > dp(n1+1,vector<ll>(n2+1,0) );
	for(ll i=1;i<=n1;i++) dp[i][0] = i;
	for(ll i=1;i<=n2;i++) dp[0][i] = i;
	for(ll i=1;i<=n1;i++){
		for(ll j=1;j<=n2;j++){
			dp[i][j] = min(dp[i][j-1]+1,dp[i-1][j]+1);
			ll cost = 1;
			if(s1[i-1]==s2[j-1]) cost = 0;
			dp[i][j] = min(dp[i][j],dp[i-1][j-1]+cost);
		}
	}
	return dp;
}	

int main(){
	string s1,s2;
	cin>>s1>>s2;
	vector<vector<ll> > dp = levenshtein(s1,s2);
	cout<<dp[s1.size()][s2.size()]<<endl;

	return 0;
}

