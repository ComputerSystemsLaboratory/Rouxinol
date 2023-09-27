#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

const ll INF = 1e11;
const int MAX_V = 101;

int V, E;

// dp[i][j]: iから（kを通って）jまでの最短距離
// kの次元は使い回せるので省略できる
ll dp[MAX_V][MAX_V];

void wf() {
  rep(i, V) rep(j, V) rep(k, V) {
    if (dp[j][i] != INF && dp[i][k] != INF) dp[j][k] = min(dp[j][k], dp[j][i] + dp[i][k]);
  }
}

int main() {
  cin >> V >> E;
  rep(i, V) rep(j, V) if (i != j) dp[i][j] = INF;
  rep(i, E) {
    int s, t, d;
    cin >> s >> t >> d;
    dp[s][t] = d;
    // 無向グラフの場合は両方に追加
    // dp[t][s] = d;
  }
  wf();
  rep(i, V) {
    if (dp[i][i] < 0) {
      cout << "NEGATIVE CYCLE" << endl;
      return 0;
    }
  }
  rep(i, V) {
    rep(j, V) {
      string v = dp[i][j] == INF ? "INF" : to_string(dp[i][j]);
      cout << v;
      if (j != V - 1) cout << " ";
    }
    cout << endl;
  }
  return 0;
}
