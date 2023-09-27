#include <bits/stdc++.h>
using namespace std;

struct edge {
  edge () {}
  edge (int to, int cost) : to(to), cost(cost) {}

  int to, cost;
};

vector<long long> Dijkstra(int s, const vector<vector<edge>> &G) {
  const long long linf = 1001001001001001001ll;
  vector<long long> d(G.size(), linf);
  priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> q;

  d[s] = 0;
  q.push(make_pair(0, s));

  while (!q.empty()) {
    pair<long long, int> p = q.top();
    q.pop();

    int v = p.second;
    if (d[v] < p.first) continue;
    for (auto &e : G[v]) {
      if (d[e.to] > p.first + e.cost) {
        d[e.to] = p.first + e.cost;
        q.push(make_pair(d[e.to], e.to));
      }
    }
  }

  return d;
}

int main() {
  int n, m, r;
  cin >> n >> m >> r;

  vector<vector<edge>> G(n);
  for (int i = 0; i < m; ++i) {
    int u, v, c;
    cin >> u >> v >> c;

    G[u].push_back(edge(v, c));
    // G[v].push_back(edge(u, c));
  }

  vector<long long> d = Dijkstra(r, G);
  for (int i = 0; i < d.size(); ++i) {
    if (d[i] == 1001001001001001001ll) cout << "INF" << endl;
    else cout << d[i] << endl;
  }
}