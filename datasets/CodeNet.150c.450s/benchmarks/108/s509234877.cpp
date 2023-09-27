// clang-format off
#include <bits/stdc++.h>
#define int long long
#define main signed main()
// #define main int main()
#define loop(i, a, n) for (int i = (a); i < (n); i++)
#define rep(i, n) loop(i, 0, n)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define prec(n) fixed << setprecision(n)
#define stlice(from, to) substr(from, (to) - (from) + 1)
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
using namespace std;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<pii> vpii;
typedef vector<vi> vvi;
typedef vector<vb> vvb;
typedef vector<vpii> vvpii;
const int INF = sizeof(int) == sizeof(long long) ? 1000000000000000000LL : 1000000000;
const int MOD = 1000000007;
const double PI = acos(-1);
template<typename A, typename B> bool cmin(A &a, const B &b) { return a > b ? (a = b, true) : false; }
template<typename A, typename B> bool cmax(A &a, const B &b) { return a < b ? (a = b, true) : false; }
bool odd(const int &n) { return n & 1; }
bool even(const int &n) { return !odd(n); }
void solve();
main { solve(); return 0; }
// clang-format on

typedef int Weight;

struct Edge {
  int src, dst;
  Weight weight;
  Edge(int s, int d, Weight w)
    : src(s), dst(d), weight(w) {
  }
};

typedef vector<Edge> Edges;
typedef vector<Edges> Graph;
typedef vector<Weight> Array;
typedef vector<Array> Matrix;

void addEdge(Graph &g, int a, int b, Weight w = 1) {
  g[a].emplace_back(a, b, w);
  g[b].emplace_back(b, a, w);
}

void addArc(Graph &g, int a, int b, Weight w = 1) {
  g[a].emplace_back(a, b, w);
}

void solve() {
  int n;
  cin >> n;
  Graph g(n);
  rep(i, n) {
    int u, k;
    cin >> u >> k;
    u--;
    while (k--) {
      int v;
      cin >> v;
      v--;
      addArc(g, u, v);
    }
  }
  int c = 1;
  vi distance(n, -1);
  vi done(n);
  queue<int> q;
  distance[0] = 0;
  done[0]     = true;
  q.push(0);
  while (q.size()) {
    int x = q.front();
    q.pop();
    for (Edge e : g[x]) {
      if (done[e.dst]) continue;
      done[e.dst]     = true;
      distance[e.dst] = distance[e.src] + 1;
      q.push(e.dst);
    }
  }
  rep(i, n) {
    cout << i + 1 << ' ' << distance[i] << endl;
  }
}