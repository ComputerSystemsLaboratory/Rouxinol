#include <algorithm>
#include <cassert>
#include <climits>
#include <cmath>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
using namespace std;
typedef long long ll;
const int INF = 2000000000;

const int MAX_V = 1001;
const int MAX_E = 2001;

struct edge {
  int from, to, cost;
};

// 辺
edge es[MAX_E];
// 最短距離
int d[MAX_V];
int V, E;

// 単一始点全点間最短路を求めるアルゴリズム。
// 負辺があっても動作する。また負閉路も検出する。
// ref. https://ei1333.github.io/luzhiled/snippets/graph/bellman-ford.html
//
// 計算量: O(VE)
//
// - falseを返す場合は負の経路が存在.
// - d[i]がINFの場合は経路が存在しない.
bool bellman_ford(int s) {
  fill(d, d + V, INF);
  d[s] = 0;

  for (int i = 0; i < V - 1; i++) {
    for (int j = 0; j < E; j++) {
      edge e = es[j];
      if (d[e.from] == INF) {
        continue;
      }
      d[e.to] = min(d[e.to], d[e.from] + e.cost);
    }
  }

  for (int j = 0; j < E; j++) {
    edge e = es[j];
    if (d[e.from] == INF) {
      continue;
    }
    if (d[e.from] + e.cost < d[e.to]) {
      return false;
    }
  }

  return true;
}

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_1_B&lang=jp
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int r;
  cin >> V >> E >> r;
  for (int i = 0; i < E; i++) {
    int si, ti, di;
    cin >> si >> ti >> di;
    es[i] = edge{si, ti, di};
  }

  bool flag = bellman_ford(r);
  if (!flag) {
    cout << "NEGATIVE CYCLE" << endl;
    return 0;
  }
  for (int i = 0; i < V; i++) {
    if (d[i] == INF) {
      cout << "INF" << endl;
    } else {
      cout << d[i] << endl;
    }
  }
  return 0;
}
