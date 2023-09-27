#include "bits/stdc++.h"
using namespace std;

const long long INF = 1000000000000000007;
// -------------------------------------------------------

const long long MAX_V = 1010101;

using cost_type = long long;
// costが浮動小数点数の場合
// using cost_type = double;

struct edge {
  long long to;
  cost_type cost;
};

using Pll = pair<cost_type, long long>;

long long V;
vector<edge> Graph[MAX_V];
bool used[MAX_V];

cost_type prim(long long s) {
  priority_queue<Pll, vector<Pll>, greater<Pll>> que;

  used[s] = true;

  for (auto e : Graph[s]) {
    que.push(Pll(e.cost, e.to));
  }

  // 使用済みの辺のコスト
  cost_type res = 0;
  // 使用済みの頂点の数
  long long v_count = 1;

  while (!que.empty() && v_count < V) {
    auto elem = que.top();
    que.pop();

    auto nc = elem.first;
    auto nv = elem.second;

    if (used[nv]) continue;

    used[nv] = true;
    res += nc;
    ++v_count;

    for (auto e : Graph[nv]) {
      if (!used[e.to]) {
        que.push(Pll(e.cost, e.to));
      }
    }
  }

  return res;
}

long long E;

// AOJの以下URLでテストできる
// https://onlinejudge.u-aizu.ac.jp/problems/GRL_2_A
int main() {
  cin >> V >> E;
  for (int i = 0; i < E; ++i) {
    int s, t, w;
    cin >> s >> t >> w;
    Graph[s].push_back(edge{t, w});
    Graph[t].push_back(edge{s, w});
  }

  cout << prim(0) << endl;
}

