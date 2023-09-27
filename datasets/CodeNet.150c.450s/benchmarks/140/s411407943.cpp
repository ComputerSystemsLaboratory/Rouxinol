#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

#define INF 1001001001

struct Edge {
  int to;
  int cost;
  Edge(int to, int cost) : to(to), cost(cost) {}
};

int main() {
  int vs, es;
  cin >> vs >> es;
  vector< vector<Edge> > E(vs);
  rep(i,es) {
    int s, t, w;
    cin >> s >> t >> w;
    E[s].emplace_back(t,w);
    E[t].emplace_back(s,w);
  }

  vector<bool> used(vs);
  vector<int> mincost(vs,INF);

  mincost[0] = 0;

  int ans = 0;
  while (true) {
    int v = -1;
    rep(u,vs) if (!used[u] && (v == -1 || mincost[u] < mincost[v])) v = u;

    if (v == -1) break;
    ans += mincost[v];
    used[v] = true;

    for (auto e : E[v]) mincost[e.to] = min(mincost[e.to], e.cost);
  }

  cout << ans << endl;

  return 0;
}
