// clang-format off
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define main signed main()
#define loop(i, a, n) for (int i = (a); i < (n); i++)
#define rep(i, n) loop(i, 0, n)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define prec(n) fixed << setprecision(n)
constexpr int INF = sizeof(int) == sizeof(long long) ? 1000000000000000000LL : 1000000000;
constexpr int MOD = 1000000007;
constexpr double PI = 3.14159265358979;
template<typename A, typename B> bool cmin(A &a, const B &b) { return a > b ? (a = b, true) : false; }
template<typename A, typename B> bool cmax(A &a, const B &b) { return a < b ? (a = b, true) : false; }
bool odd(const int &n) { return n & 1; }
bool even(const int &n) { return ~n & 1; }
template<typename T = int> T in() { T x; cin >> x; return x; }
template<typename T = int> T in(T &&x) { T z(forward<T>(x)); cin >> z; return z; }
template<typename T> istream &operator>>(istream &is, vector<T> &v) { for (T &x : v) is >> x; return is; }
template<typename A, typename B> istream &operator>>(istream &is, pair<A, B> &p) { return is >> p.first >> p.second; }
template<typename T> ostream &operator<<(ostream &os, const vector<vector<T>> &v) { int n = v.size(); rep(i, n) os << v[i] << (i == n - 1 ? "" : "\n"); return os; }
template<typename T> ostream &operator<<(ostream &os, const vector<T> &v) { int n = v.size(); rep(i, n) os << v[i] << (i == n - 1 ? "" : " "); return os; }
template<typename A, typename B> ostream &operator<<(ostream &os, const pair<A, B> &p) { return os << p.first << ' ' << p.second; }
template<typename Head, typename Value> auto vectors(const Head &head, const Value &v) { return vector<Value>(head, v); }
template<typename Head, typename... Tail> auto vectors(Head x, Tail... tail) { auto inner = vectors(tail...); return vector<decltype(inner)>(x, inner); }
// clang-format on

struct Edge {
  int src, dst;
  Edge(const int &src, const int &dst) : src(src), dst(dst) {}
  Edge() {}
  friend istream &operator>>(istream &is, Edge &e) { return is >> e.src >> e.dst; }
};

class Graph {
  int n;
  bool directed;
  vector<Edge> edges;

public:
  Graph(const int &n, const int &directed = true) : n(n), directed(directed) {}
  void addEdge(const Edge &edge) { edges.emplace_back(edge); }
  void addEdge(const int &src, const int &dst) { edges.emplace_back(src, dst); }
  int sizeV() const { return n; }
  int sizeE() const { return edges.size(); }
  bool isDirected() const { return directed; }
  const Edge &operator[](const int &i) const { return edges[i]; }
  auto begin() { return edges.begin(); }
  auto begin() const { return edges.begin(); }
  auto end() { return edges.end(); }
  auto end() const { return edges.end(); }
};

class AdjList {
  bool directed;
  vector<vector<int>> al;

public:
  AdjList(const Graph &g) : directed(g.isDirected()), al(g.sizeV()) {
    int m = g.sizeE();
    if (directed) {
      rep(i, m) al[g[i].src].emplace_back(i);
    } else {
      rep(i, m) {
        al[g[i].src].emplace_back(i << 1);
        al[g[i].dst].emplace_back(i << 1 | 1);
      }
    }
  }

  int size() const { return al.size(); }
  bool isDirected() { return directed; }
  const vector<int> &operator[](const int &i) const { return al[i]; }
  auto begin() { return al.begin(); }
  auto begin() const { return al.begin(); }
  auto end() { return al.end(); }
  auto end() const { return al.end(); }
};

template<typename Weight> class Dijkstra {
  int s;
  Graph g;
  vector<Weight> weight;

  AdjList al;
  vector<Weight> dist;
  vector<int> prev;

public:
  Dijkstra(const Graph &g,
           const vector<Weight> &weight,
           const int &s,
           const Weight &inf = numeric_limits<Weight>::max() / 8) //
      : g(g), weight(weight), al(g), s(s), dist(g.sizeV(), inf), prev(g.sizeV()) {
    using state = pair<Weight, int>;
    priority_queue<state, vector<state>, greater<state>> q;
    dist[s] = 0;
    q.emplace(0, s);
    while (q.size()) {
      Weight d;
      int v;
      tie(d, v) = q.top();
      q.pop();
      if (dist[v] < d) continue;
      for (auto &e : al[v]) {
        if (cmin(dist[g[e].dst], dist[v] + weight[e])) {
          prev[g[e].dst] = v;
          q.emplace(dist[g[e].dst], g[e].dst);
        }
      }
    }
  }

  Weight shortestDist(const int &v) { return dist[v]; }
};

main {
  int n, m, s;
  cin >> n >> m >> s;
  Graph g(n);
  vector<int> c(m);
  rep(i, m) {
    g.addEdge(in<Edge>());
    c[i] = in();
  }
  Dijkstra<int> dij(g, c, s, INF);
  rep(i, n) {
    int d = dij.shortestDist(i);
    cout << (d == INF ? "INF" : to_string(d)) << endl;
  }
}

