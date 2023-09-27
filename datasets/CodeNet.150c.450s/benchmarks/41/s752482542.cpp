#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<string>
#include<cstring>
#include<queue>
#include<stack>
#include<numeric>
using namespace std;
#define INF (1 << 30) - 1
#define LINF 1LL << 60
const int MOD = 1000000007;
using ll = long long;
using P = pair<int, int>;

vector<vector<ll>> dp;

int main(){
  int n, m;
  cin >> n >> m;
  dp.assign(n, vector<ll>(n, LINF));
  for(int i = 0; i < n; ++i)dp[i][i] = 0;
  for(int i = 0; i < m; ++i){
    int s, t;
    ll d;
    cin >> s >> t >> d;
    dp[s][t] = d;
  }

  for(int k = 0; k < n; ++k){
    for(int i = 0; i < n; ++i){
      for(int j = 0; j < n; ++j){
        if(dp[i][k] == LINF || dp[k][j] == LINF)continue;
        dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
      }
    }
  }

  for(int i = 0; i < n; ++i){
    if(dp[i][i] < 0){
      cout << "NEGATIVE CYCLE" << endl;
      return 0;
    }
  }

  for(int i = 0; i < n; ++i){
    for(int j = 0; j < n; ++j){
      if(dp[i][j] == LINF)cout << "INF";
      else cout << dp[i][j];
      if(j < n - 1)cout << " ";
    }
    cout << endl;
  }
  return 0;
}

