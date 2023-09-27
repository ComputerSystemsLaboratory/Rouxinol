#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

#define INF 1001001001

struct Edge {
  int from;
  int to;
  int cost;
};

int main() {
  int n, m, r;
  cin >> n >> m >> r;
  vector<Edge> G;
  rep(i,m) {
    int s, t, d;
    cin >> s >> t >> d;
    G.push_back(Edge({s,t,d}));
  }

  vector<int> d(n,INF);
  d[r] = 0;
  int vcnt = 0;
  while (true) {
    bool update = false;
    rep(i,m) {
      Edge e = G[i];
      if (d[e.from] == INF || d[e.to] <= d[e.from] + e.cost) continue;
      d[e.to] = d[e.from] + e.cost;
      update = true;
    }
    if (!update) break;
    if (++vcnt == n) {
      cout << "NEGATIVE CYCLE" << endl;
      return 0;
    }
  }
  rep(i,n) {
    if (d[i]==INF) cout << "INF" << endl;
    else cout << d[i] << endl;
  }

  return 0;
}
