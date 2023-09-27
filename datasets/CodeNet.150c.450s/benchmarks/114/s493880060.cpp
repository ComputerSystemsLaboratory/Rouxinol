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

struct Edge {
  int weight;
  int source;
  int destination;
};

int main() {
  int n;
  cin >> n;
  auto cmp = [](const Edge& lhs, const Edge& rhs) {
    return lhs.weight > rhs.weight;
  };
  vector<vector<Edge>> edges(n, vector<Edge>());
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      int w;
      cin >> w;
      if (w != -1) {
        Edge e {w, i, j};
        edges[i].push_back(move(e));
      }
    }
  }

  int total_weight = 0;
  unordered_set<int> contained;
  contained.insert(0);
  priority_queue<Edge, vector<Edge>, decltype(cmp)> q(cmp);
  for (auto&& e : edges[0]) {
    q.push(e);
  }
  while (static_cast<int>(contained.size()) < n) {
    auto e = q.top();
    q.pop();
    if (contained.find(e.destination) == contained.end()) {
      total_weight += e.weight;
      contained.insert(e.destination);
      for (auto&& edge : edges[e.destination]) {
        q.push(edge);
      }
    }
  }
  cout << total_weight << endl;
}