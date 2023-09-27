#include<bits/stdc++.h>
using namespace std;
typedef long double ld ;
typedef long long ll ;
ll dp[111][10101];
ll v[111];
ll w[111];
int main(){
	ll N,W; 
	cin>>N>>W;
	for(ll i=1;i<=N;i++)cin>>v[i]>>w[i];
	dp[0][0] = 0;
	for (ll i=1;i<=N;i++){
		for(ll j=1;j<=W;j++){
			dp[i][j] = max(dp[i-1][j],dp[i][j]);
			if(j>=w[i])dp[i][j] = max(dp[i-1][j-w[i]]+v[i],dp[i][j]);
		}
	}
	ll ans =0;
	for(ll i=0;i<=W;i++){
		ans = max(ans,dp[N][i]);
	}
	cout<<ans<<endl;
	return 0;
}

