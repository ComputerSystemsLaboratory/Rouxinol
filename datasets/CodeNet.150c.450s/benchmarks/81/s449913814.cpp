// clang-format off
#include <bits/stdc++.h>
#define int long long
#define main signed main()
#define loop(i, a, n) for (int i = (a); i < (n); i++)
#define rep(i, n) loop(i, 0, n)
#define forever for (;;)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define prec(n) fixed << setprecision(n)
typedef std::pair<int, int> pii;
typedef std::vector<int> vi;
typedef std::vector<double> vd;
typedef std::vector<std::string> vs;
typedef std::vector<pii> vpii;
typedef std::vector<vi> vvi;
typedef std::vector<vpii> vvpii;
const int INF = sizeof(int) == sizeof(long long) ? 1000000000000000000LL : 1000000000;
const int MOD = 1000000007;
const double PI = acos(-1);
template<typename A, typename B> bool cmin(A &a, const B &b) { return a > b ? (a = b, true) : false; }
template<typename A, typename B> bool cmax(A &a, const B &b) { return a < b ? (a = b, true) : false; }
template<typename T> std::istream &operator>>(std::istream &is, std::vector<T> &v) { rep(i,v.size()) is >> v[i]; return is; }
template<typename A, typename B> std::istream &operator>>(std::istream &is, std::pair<A, B> &p) { is >> p.first; is >> p.second; return is; }
using namespace std;
// clang-format on

typedef int Weight;
struct Edge {
  int src, dst;
  Weight weight;
  Edge(const int &s = 0, const int &d = 0, const Weight &w = 0) : src(s), dst(d), weight(w) {}
};

typedef std::vector<Edge> Edges;
typedef std::vector<Weight> Array;
typedef std::vector<Array> Matrix;

class Graph {
  std::vector<Edges> g;

public:
  Graph(const int &size = 0) : g(size) {}
  int size() const { return g.size(); }
  const Edges &operator[](const int &i) const { return g[i]; }
  void addArc(const int &src, const int &dst, const Weight &w = 1) { g[src].emplace_back(src, dst, w); }
  void addEdge(const int &node1, const int &node2, const Weight &w = 1) {
    addArc(node1, node2, w);
    addArc(node2, node1, w);
  }
};

template<int inf = std::numeric_limits<Weight>::max() / 8> std::pair<std::vector<Weight>, std::vector<int>> dijkstra(const Graph &g, const int &src) {
  using state = std::pair<Weight, int>;
  std::priority_queue<state, std::vector<state>, std::greater<state>> q;
  std::vector<Weight> dist(g.size(), inf);
  std::vector<int> via(g.size());
  dist[src] = 0;
  q.emplace(0, src);
  while (q.size()) {
    Weight d;
    int v;
    std::tie(d, v) = q.top();
    q.pop();
    if (dist[v] < d) continue;
    for (auto &e : g[v]) {
      if (cmin(dist[e.dst], dist[v] + e.weight)) {
        via[e.dst] = v;
        q.emplace(dist[e.dst], e.dst);
      }
    }
  }
  return {dist, via};
}

main {
  int n;
  while (cin >> n, n) {
    Graph g(10);
    set<int> s;
    rep(i, n) {
      int a, b, c;
      cin >> a >> b >> c;
      s.insert(a), s.insert(b);
      g.addEdge(a, b, c);
    }
    vi v(s.size());
    copy(all(s), v.begin());
    Matrix dist(10, Array(10));
    rep(i, 10) {
      vector<Weight> d = dijkstra<INF>(g, i).first;
      rep(j, 10) dist[i][j] = d[j];
    }
    int ms = INF, mp;
    rep(i, 10) {
      int s = 0;
      for (int j : v) s += dist[i][j];
      if (cmin(ms, s)) mp = i;
    }
    cout << mp << ' ' << ms << endl;
  }
}