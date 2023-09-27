#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll MOD = 1000000007;
ll INFL = 1ll << 60;
ll INF = 1 << 28;

// =================グラフテンプレート==================

// costの部分の型は指定できます
template <typename T>
struct edge {
  int from, to;
  T cost;

  edge(int to, T cost) : from(-1), to(to), cost(cost) {}
  edge(int from, int to, T cost) : from(from), to(to), cost(cost) {}

  // 行き先を代入できる
  edge &operator=(const int &x) {
    to = x;
    return *this;
  }

  // intにキャスト(?)するとかなんとか
  operator int() const { return to; }
};

template <typename T>
using Edges = vector<edge<T>>;

template <typename T>
using WeightedGraph = vector<Edges<T>>;

template <typename T>
using Matrix = vector<vector<T>>;

using UnWeightedGraph = vector<vector<int>>;

// =============ベルマン・フォード法=============
// 負の閉路を検出できます(空のvectorを返します)
// bellman<距離の型>(重み付き辺の集合,頂点数,始点)

template <typename T>
vector<T> bellman_ford(Edges<T> &edges, int V, int s) {
  const auto INF = numeric_limits<T>::max();
  vector<T> dist(V, INF);

  dist[s] = 0;
  for (int i = 0; i < V - 1; i++) {
    for (auto &e : edges) {
      if (dist[e.from] != INF)  // 遷移できるなら
        dist[e.to] = min(dist[e.to], dist[e.from] + e.cost);
    }
  }
  for (auto &e : edges) {  // 離島、負の閉路について
    if (dist[e.from] == INF) continue;
    if (dist[e.from] + e.cost < dist[e.to]) return vector<T>();
  }
  return dist;
}

// ====================================================================

int main() {
  int n, m, r;
  cin >> n >> m >> r;
  Edges<ll> edges;
  for (int i = 0; i < m; i++) {
    int s, t;
    ll c;
    cin >> s >> t >> c;
    edges.push_back(edge<ll>{s, t, c});
  }

  vector<ll> ans = bellman_ford(edges, n, r);

  if (ans.size())
    for (auto x : ans)
      if (x >= INFL)
        cout << "INF" << endl;
      else
        cout << x << endl;
  else
    cout << "NEGATIVE CYCLE" << endl;
}

