#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) FOR(i,0,n)
#define FOR(i,a,b) for(ll i=a;i<b;i++)
typedef vector<ll> vi;
typedef vector<vector<ll>> vvi;
const ll INF = (1ll << 60);

int main() {
  ll n, m; cin >> n >> m;
  vi d(m); REP(i, m) cin >> d[i];
  vvi dp(m, vi(n+1,INF));
  REP(i,m) dp[i][0]=0;
  for(ll i=1;i*d[0]<=n;i++) dp[0][i*d[0]]=i;
  FOR(i,1,m) REP(j,n+1) {
    dp[i][j]=dp[i-1][j];
    if(j>=d[i]) dp[i][j]=min(dp[i][j],dp[i-1][j-d[i]]+1);
    if(j>=d[i]) dp[i][j]=min(dp[i][j],dp[i][j-d[i]]+1);
  }
  cout<<dp[m-1][n]<<endl;
}