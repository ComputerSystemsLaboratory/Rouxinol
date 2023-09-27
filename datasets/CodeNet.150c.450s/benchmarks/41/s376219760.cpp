#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

#define INF 1e18

int main() {
  int n, m;
  cin >> n >> m;
  vector< vector<ll> > G(n, vector<ll>(n,INF));
  rep(i,m) {
    int s, t, d;
    cin >> s >> t >> d;
    G[s][t] = d;
  }
  rep(i,n) G[i][i] = 0;

  rep(k,n) rep(i,n) rep(j,n) {
    if (G[i][k] == INF || G[k][j] == INF) continue;
    G[i][j] = min(G[i][j], G[i][k] + G[k][j]);
  }

  rep(i,n) if (G[i][i] < 0) {
    cout << "NEGATIVE CYCLE" << endl;
    return 0;
  }

  rep(i,n) {
    rep(j,n) {
      if (j) cout << " ";
      if (G[i][j]==INF) cout << "INF";
      else cout << G[i][j];
    }
    cout << endl;
  }

  return 0;
}
