#ifdef LOCAL_BUILD
#include "pch.h"
#define DLOG(msg) cout << "#" << __LINE__ << ":" << msg << endl;
#define DLOG_V(var) \
  cout << "#" << __LINE__ << ":" << #var << " : " << var << endl;
#else
#include <bits/stdc++.h>
#define DLOG(msg)
#define DLOG_V(var)
#endif
using namespace std;

struct Solver {
  explicit Solver(const vector<vector<int>>& graph_)
      : graph(graph_), dist(graph.size(), -1) {}

  void solve() {
    q.push(make_pair(0, 0));
    while (!q.empty()) {
      auto p = q.front();
      q.pop();
      auto v = p.first;
      auto d = p.second;
      if (dist[v] != -1 && dist[v] <= d) {
        continue;
      }
      dist[v] = d;
      for (auto& v2 : graph[v]) {
        if (dist[v2] == -1 || dist[v2] > d + 1) {
          q.push(make_pair(v2, d + 1));
        }
      }
    }
  }

  const vector<vector<int>>& graph;
  vector<int> dist;
  queue<pair<int, int>> q;
};

int main() {
  int n;
  cin >> n;
  vector<vector<int>> graph(n, vector<int>());
  for (int i = 0; i < n; ++i) {
    int u;
    int k;
    cin >> u >> k;
    graph[u - 1].reserve(k);
    for (int j = 0; j < k; ++j) {
      int v;
      cin >> v;
      graph[u - 1].push_back(v - 1);
    }
  }

  Solver s(graph);
  s.solve();
  for (size_t i = 0; i < s.dist.size(); ++i) {
    cout << (i + 1) << " " << s.dist[i] << endl;
  }
}