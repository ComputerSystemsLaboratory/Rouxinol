#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct Edge { int to; ll cost; };
vector<Edge> G[1010];
ll INF = 1e18;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int V, E; cin >> V >> E;
  int r; cin >> r;
  vector<ll> d(V, INF);

  for (int i = 0; i < E; i++) {
    int a, b; cin >> a >> b;//  a--; b--;
    ll c; cin >> c;
    G[a].emplace_back(Edge({b, c}));
    // G[b].emplace_back(Edge({a, c}));
  }

  d[r] = 0;
  for (int t = 0; t < V * 2; t++) {
    for (int i = 0; i < V; i++) {
      if (d[i] == INF) continue;
      for (auto e: G[i]) {
        if (d[e.to] > d[i] + e.cost) {
          d[e.to] = d[i] + e.cost;
          if (t > V) {
            cout << "NEGATIVE CYCLE" << '\n';
            return 0;
          }
        }
      }
    }
  }
  for (ll i = 0; i < V; i++) {
    ll ans = d[i];
    if (ans == INF) cout << "INF" << '\n';
    else cout << ans << '\n';
  }

  return 0;
}
