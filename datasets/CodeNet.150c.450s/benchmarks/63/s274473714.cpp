#include <bits/stdc++.h>
using namespace std;

struct Dijkstra {
  Dijkstra () {}
  Dijkstra (int n) { init(n); }

  struct edge {
    edge () {}
    edge (int to, long long cost) : to(to), cost(cost) {}

    int to;
    long long cost;
  };

  const long long linf = 1001001001001001001ll;

  vector<vector<edge>> G;
  vector<long long> d;

  void init(int n) {
    G.resize(n);
  }

  void add(int u, int v, long long c) {
    G[u].push_back(edge(v, c));
  }

  void dijkstra(int s) {
    d = vector<long long>(G.size(), linf);
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
  }

  void dijkstra() { dijkstra(0); }
};

int main() {
  int n, m, r;
  cin >> n >> m >> r;

  Dijkstra g(n);
  // vector<vector<edge>> G(n);
  for (int i = 0; i < m; ++i) {
    int u, v, c;
    cin >> u >> v >> c;

    g.add(u, v, c);
    // G[u].push_back(edge(v, c));
    // G[v].push_back(edge(u, c));
  }

  g.dijkstra(r);
  // vector<long long> &d = Dijkstra(r, G);
  for (int i = 0; i < g.d.size(); ++i) {
    if (g.d[i] == 1001001001001001001ll) cout << "INF" << endl;
    else cout << g.d[i] << endl;
  }
}