#include <bits/stdc++.h>
using namespace std;

// ベルマン–フォード法
// sから到達可能な負閉路を持たないこと。
// 負閉路の検出にも使用できる。

//#define UNDIRECTED // 無向グラフ

constexpr int MAX_V = 1000;
constexpr int MAX_E = 2000;
constexpr int INF = 1 << 30;

struct Edge { int from, to, cost; };

int V, E;
Edge es[MAX_E];
int d[MAX_V];

bool bellman_ford(int s) {
  fill_n(d, MAX_V, INF);
  d[s] = 0;

  int loop_count{};
  while (true) {
    bool update = false;
    for (int i{}; i < E; ++i) {
      Edge e = es[i];
      if (d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
        d[e.to] = d[e.from] + e.cost;
        update = true;
      }
#ifdef UNDIRECTED
      if (d[e.to] != INF && d[e.from] > d[e.to] + e.cost) {
        d[e.from] = d[e.to] + e.cost;
        update = true;
      }
#endif
    }
    if (!update) {
      break;
    }
    if (++loop_count >= V) {
      return false;
    }
  }

  return true;
}

int main() {
  int r;
  cin >> V >> E >> r;
  for (int i{}; i < E; ++i) {
    cin >> es[i].from >> es[i].to >> es[i].cost;
  }

  if (!bellman_ford(r)) {
    cout << "NEGATIVE CYCLE" << endl;
    return 0;
  }

  for (int i{}; i < V; ++i)
    cout << (d[i] < INF ? to_string(d[i]) : "INF") << endl;

  return 0;
}

