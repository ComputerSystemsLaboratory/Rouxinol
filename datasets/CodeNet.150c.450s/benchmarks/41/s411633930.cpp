#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int V, E;
ll cost[105][105];
ll INF = 1e18;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  cin >> V >> E;
  for (int i = 0; i < V; i++) {
    for (int j = 0; j < V; j++) {
      if (i == j) cost[i][j] = 0;
      else cost[i][j] = INF;
    }
  }

  for (ll i = 0; i < E; i++) {
    ll a, b; cin >> a >> b; // a--; b--;
    ll c; cin >> c;
    cost[a][b] = c;
    // cost[b][a] = c;
  }

  for (int k = 0; k < V; k++) {
    for (int i = 0; i < V; i++) {
      for (int j = 0; j < V; j++) {
        if (cost[i][k] == INF || cost[k][j] == INF) continue;
        cost[i][j] = min(cost[i][j], cost[i][k] + cost[k][j]);
      }
    }
  }

  for (ll i = 0; i < V; i++) {
    if (cost[i][i] < 0) {
      cout << "NEGATIVE CYCLE" << '\n';
      return 0;
    }
  }

  for (int i = 0; i < V; i++) {
    for (int j = 0; j < V; j++) {
      if (j > 0) cout << ' ';
      ll ans = cost[i][j];
      if (ans == INF) cout << "INF";
      else cout << ans;
    }
    cout << '\n';
  }
  return 0;
}
