#include <bits/stdc++.h>
using namespace std;

struct edge {
  edge () {}
  edge (int to, int cost) : to(to), cost(cost) {}

  int to, cost;
};

bool bellman_ford(int s, const vector<vector<edge>> &G, vector<long long> &d) {
  const long long linf = 1001001001001001001ll;
  d = vector<long long>(G.size(), linf);
  d[s] = 0;
  bool f = false;

  for (int i = 0; i < G.size(); ++i) {
    for (int v = 0; v < G.size(); ++v) {
      for (auto &e : G[v]) {
        if (d[v] != linf && d[e.to] > d[v] + e.cost) {
          d[e.to] = d[v] + e.cost;
          if (i == G.size() - 1) f = true;
        }
      }
    }
  }

  return f;
}

int main() {
  int v, e, r;
  cin >> v >> e >> r;

  vector<vector<edge>> G(v);
  for (int i = 0; i < e; ++i) {
    int a, b, c;
    cin >> a >> b >> c;

    G[a].push_back(edge(b, c));
  }

  vector<long long> d;
  if (bellman_ford(r, G, d)) {
    cout << "NEGATIVE CYCLE" << endl;
  } else {
    for (int i = 0; i < v; ++i) {
      if (d[i] == 1001001001001001001ll) cout << "INF" << endl;
      else cout << d[i] << endl;
    }
  }
}