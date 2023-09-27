#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

#define INF 1001001001

struct Edge {
  int to;
  int cost;
};

int main() {
  int n, m, r;
  cin >> n >> m >> r;
  vector< vector<Edge> > G(n);
  rep(i,m) {
    int s, t, d;
    cin >> s >> t >> d;
    G[s].push_back(Edge({t,d}));
  }

  vector<int> d(n,INF);
  d[r] = 0;
  priority_queue<P, vector<P>, greater<P> > q;

  q.push({0,r});
  while (!q.empty()) {
    int c, v;
    tie(c,v) = q.top(); q.pop();
    if (d[v] < c) continue;
    for (auto e : G[v]) {
      if (d[e.to] <= c + e.cost) continue;
      d[e.to] = min(d[e.to], c+e.cost);
      q.push({d[e.to],e.to});
    }
  }
  rep(i,n) {
    if (d[i]==INF) cout << "INF" << endl;
    else cout << d[i] << endl;
  }

  return 0;
}
