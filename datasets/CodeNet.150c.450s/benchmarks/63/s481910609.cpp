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

class AdjList {
  vector<vector<int>> g;

public:
  AdjList(const int &n, const vector<int> &src) : g(n) {
    int m = src.size();
    rep(i, m) g[src[i]].emplace_back(i);
  }

  int size() const { return g.size(); }
  const vector<int> &operator[](const int &i) const { return g[i]; }
  auto begin() { return g.begin(); }
  auto begin() const { return g.begin(); }
  auto end() { return g.end(); }
  auto end() const { return g.end(); }
};

template<typename Weight> class Dijkstra {
  using Edges = tuple<vector<int>, vector<int>, vector<int>>; // src, dst, weight
  int s;
  vector<int> src, dst;
  vector<Weight> weight;

  AdjList g;
  vector<Weight> dist;
  vector<int> prev;

public:
  Dijkstra(const int &n, const Edges &edges, const int &s, const Weight &inf = numeric_limits<Weight>::max() / 8) //
      : src(get<0>(edges)), dst(get<1>(edges)), weight(get<2>(edges)), g(n, src), s(s), dist(n, inf), prev(n) {
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
      for (auto &e : g[v]) {
        if (cmin(dist[dst[e]], dist[v] + weight[e])) {
          prev[dst[e]] = v;
          q.emplace(dist[dst[e]], dst[e]);
        }
      }
    }
  }

  Weight shortestDist(const int &v) { return dist[v]; }
};

main {
  int n, m, s;
  cin >> n >> m >> s;
  vector<int> a(m), b(m), c(m);
  rep(i, m) cin >> a[i] >> b[i] >> c[i];

  Dijkstra<int> dij(n, make_tuple(a, b, c), s, INF);
  rep(i, n) {
    int d = dij.shortestDist(i);
    if (d == INF) {
      cout << "INF" << endl;
    } else {
      cout << d << endl;
    }
  }
}

