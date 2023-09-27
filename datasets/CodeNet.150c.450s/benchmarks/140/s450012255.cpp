#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;

using vi = vector<int>;
using vvi = vector<vi>;
using vll = vector<ll>;
using vvll = vector<vll>;
using vb = vector<bool>;
using vs = vector<string>;
using vld = vector<ld>;
using vvld = vector<vld>;

typedef pair<ll, ll> P;

#define bit(n) (1LL << (n))

//#define int long long

#define all(v) v.begin(), v.end()

#define rep(i, n) for (ll i = 0; i < n; i++)
#define REP(i, n) for (ll i = 1; i < n; i++)

#define FOR(i, a, b) for (ll i = (a); i < (b); i++)
#define FORm(i, m) for (auto i = m.begin(); i != m.end(); i++)

template <class T>
inline void chmax(T& a, T b) {
  a = std::max(a, b);
}
template <class T>
inline void chmin(T& a, T b) {
  a = std::min(a, b);
}

#define mod (ll)(1e9 + 7)
// #define mod (998244353ll)

constexpr long long INF = 1LL << 60;

struct UnionFind {
  vector<int> parent;
  vector<int> num_node;

  UnionFind(int N) : parent(N), num_node(N, 1) {
    for (int i = 0; i < N; i++) {
      parent[i] = i;
    }
  }

  // 根を求める
  int root(int x) {
    if (parent[x] == x) {
      return x;
    }

    // 経路圧縮
    parent[x] = root(parent[x]);
    return parent[x];
  }

  // 同一判定
  bool is_same(int x, int y) {
    return this->root(x) == this->root(y);
  }

  // 併合
  void unite(int x, int y) {
    x = this->root(x);
    y = this->root(y);

    // すでに一緒ならなにもしない
    if (x == y) {
      return;
    }
    parent[x] = y;
    num_node[y] += num_node[x];
  }

  // 同一グループのノード数
  int size(int x) {
    return num_node[root(x)];
  }
};

template <typename T>
struct Edge {
  int to;
  T cost;
  Edge(int _to, T _cost) : to(_to), cost(_cost) {
  }
};

template <typename T>
using Graph = vector<vector<Edge<T>>>;

template <typename T>
T MinimumSpanningTree(const Graph<T>& g) {
  priority_queue<pair<T, int>, std::vector<pair<T, int>>, std::greater<pair<T, int>>> que;

  const int n = g.size();
  for (const auto& e : g[0]) {
    que.emplace(e.cost, e.to);
  }

  T ans = 0;
  vector<bool> united(n);
  united[0] = true;

  while (!que.empty()) {
    auto edge = que.top();
    que.pop();

    T co = edge.first;
    int t = edge.second;

    if (united[t]) {
      continue;
    }
    united[t] = true;
    ans += co;

    for (const auto& e : g[t]) {
      if (!united[e.to])
        que.emplace(e.cost, e.to);
    }
  }

  return ans;
}

signed main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  cout << fixed << setprecision(20);

  ll v, e;
  cin >> v >> e;

  Graph<ll> g(v);

  rep(i, e) {
    int s, t;
    ll w;
    cin >> s >> t >> w;
    g[s].emplace_back(t, w);
    g[t].emplace_back(s, w);
  }

  ll ans = MinimumSpanningTree<ll>(g);
  cout << ans << endl;

  return 0;
}

