#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define P pair<ll,ll>
#define FOR(I,A,B) for(ll I = (A); I < (B); ++I)
#define FORR(I,A,B) for(ll I = (B-1); I >= (A); --I)
const ll INF=1e18+7;
const ll MOD=1e9+7;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n,m;
	cin >> n >> m;
	vector<ll> c(m);
	FOR(i,0,m)cin >> c[i];
	vector<ll> dp(n+1);
	FOR(i,0,n+1)dp[i]=i;
	FOR(i,0,m){
		FOR(j,0,n+1){
			if(j+c[i]<=n)dp[j+c[i]] = min(dp[j+c[i]],dp[j]+1);
		}
	}
	cout << dp[n] << endl;
	return 0;
}
