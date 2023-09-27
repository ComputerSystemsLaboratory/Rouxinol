#include <iostream>
#include <vector>
typedef long long ll;
#define rep(i, n) for(ll i = 0; i < n; i++)
using namespace std;

const ll INF = 1LL<<60;
int main(){
  ll V, E;
  cin >> V >> E;
  vector<vector<ll>> dp(V, vector<ll>(V, INF));
  rep(i, E){
    ll s, t, d;
    cin >> s >> t >> d;
    dp[s][t] = d;
  }
  rep(i, V) dp[i][i] = 0;
  rep(k, V)rep(i, V)rep(j, V){
    if (dp[i][k] == INF || dp[k][j] == INF) continue;
    dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
  }
  
  bool neg = false;
  rep(i, V) if (dp[i][i] < 0) neg = true;
  if(neg) cout << "NEGATIVE CYCLE" << endl;
  else{
    rep(i, V){
      rep(j, V){
        if (dp[i][j] == INF) cout << "INF";
        else                 cout << dp[i][j];
        if (j == V-1) cout << endl;
        else          cout << ' ';
      }
    }
  }
  
  return 0;
}
