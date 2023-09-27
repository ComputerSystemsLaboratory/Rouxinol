#include <vector>
namespace copr {
template <typename T>
struct Edge {
  using value_type = T;
  int from, to;
  value_type val;
  Edge(int from, int to, value_type val = 1) : from(from), to(to), val(val) {}
  bool operator<(const Edge& rhs) const {
    if (val != rhs.val) return val < rhs.val;
    if (from != rhs.from) return from < rhs.from;
    return to < rhs.to;
  }
  bool operator>(const Edge& rhs) const { return rhs < *this; }
};
template <typename T>
using Edges = std::vector<Edge<T>>;
} // namespace copr

namespace copr {
template <typename CostType>
struct Graph {
  using value_type = std::vector<Edges<CostType>>;
  const int V;
  value_type G;
  Graph(int V) : V(V), G(V) {}
  void add_edge(int from, int to, CostType cost, bool undirected = true) {
    G[from].emplace_back(from, to, cost);
    if (undirected) G[to].emplace_back(to, from, cost);
  }
};
} // namespace copr
#include <algorithm>
namespace copr {
struct UF {
  std::vector<int> data;
  int groups;

  UF(int n) : data(n, -1), groups(n) {}
  bool unite(int a, int b, bool heuristic = true) {
    a = root(a);
    b = root(b);
    if (a != b) {
      groups--;
      if (heuristic && data[b] < data[a]) std::swap(a, b);
      data[a] += data[b];
      data[b] = a;
    }
    return a != b;
  }
  bool same(int a, int b) { return root(a) == root(b); }
  int root(int a) { return data[a] >= 0 ? data[a] = root(data[a]) : a; }
  int size(int a) { return -data[root(a)]; }
};
} // namespace copr
namespace copr {
template <typename GraphType>
struct graph_traits {
  using value_type = typename GraphType::value_type;
  using vertex_type = typename value_type::value_type;
  using edge_type = typename vertex_type::value_type;
  using cost_type = typename edge_type::value_type;
  using path_type = vertex_type;
};
} // namespace copr


namespace copr {
template <typename GraphType,
          typename Edges = std::vector<typename graph_traits<GraphType>::edge_type>>
Edges kruskal(const GraphType& graph) {
  const int V = graph.V;
  Edges es;
  for (auto&& v : graph.G)
    for (auto&& e : v)
      es.emplace_back(e);
  std::sort(es.begin(), es.end());
  UF uf(V);
  Edges spanning_tree;
  spanning_tree.reserve(V - 1);
  for (auto&& e : es) {
    if (!uf.unite(e.from, e.to)) continue;
    spanning_tree.emplace_back(e);
  }
  return spanning_tree;
}
} // namespace copr

#include <bits/stdc++.h> // {{{
// clang-format off
#define ARG4(_1, _2, _3, _4, ...) _4
#define rep(...) ARG4(__VA_ARGS__, FOR, REP)(__VA_ARGS__)
#define REP(i, a) FOR(i, 0, a)
#define FOR(i, a, b) for (int i = (a); i < (int)(b); ++i)
#define rrep(...) ARG4(__VA_ARGS__, RFOR, RREP)(__VA_ARGS__)
#define RREP(i, a) RFOR(i, 0, a)
#define RFOR(i, a, b) for (int i = (b)-1; i >= (int)(a); --i)
#define ALL(c) (c).begin(), (c).end()
#define pb emplace_back
#define em emplace
#define fi first
#define se second
#define USE1(...) template <typename __VA_ARGS__> inline
#define USE2(T, ...) USE1(T, typename __VA_ARGS__)
#define mygc(c) (c) = getchar_unlocked()
#define mypc(c) putchar_unlocked(c)
 
using ll = long long;
template<typename T> using vec = std::vector<T>;
USE2(T,U)bool chmax(T&x,U a){return x<a&&(x=a,1);}
USE2(T,U)bool chmin(T&x,U a){return a<x&&(x=a,1);}
USE1(T=int)T in(){T x;std::cin>>x;return x;}
USE2(T=int,V=vec<T>)V reserved(int n){V v;v.reserve(n);return v;}
USE1(T=int)vec<T>in(int n){auto v=reserved<T>(n);rep(i,n)v.pb(in<T>());return v;}
USE2(T,U=std::pair<T,int>)vec<U>enume(const vec<T>&x,int s=0){int N=x.size();auto v=reserved<U>(N);rep(i,N)v.pb(x[i],s+i);return v;}
USE1(T)vec<T>ndvec(T v,int n){return vec<T>(n,v);}
USE2(T,...Ts)auto ndvec(T v,int n,Ts...ns)->vec<decltype(ndvec(v,ns...))>{return ndvec(ndvec(v,ns...),n);}
USE1(T)void pr(T x){std::cout<<x<<'\n';}
USE2(T,...Ts)void pr(T x,Ts...xs){std::cout<<x<<' ';pr(xs...);}
USE1(T=int)T rd(){T x=0,m=0,k;for(;;){mygc(k);if(k=='-'){m=1;break;}if('0'<=k&&k<='9'){x=k-'0';break;}}for(;;){mygc(k);if(k<'0'||'9'<k)break;x=x*10+k-'0';}return x;}
USE1(T=int)void wr(T x,char c='\n'){int s=0,m=0;char b[32];if(x<0)m=1,x=-x;for(;x;x/=10)b[s++]=x%10;if(!s)b[s++]=0;if(m)mypc('-');for(;s--;)mypc(b[s]+'0');mypc(c);}
// clang-format on
// }}}
struct IoSetup { // {{{
  IoSetup() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.precision(10);
    std::cerr.precision(10);
  }
} iosetup; //}}}
using namespace std;
const int inf = 1001001001;
const ll infl = 1001001001001001001ll;
const int dd[] = {0, 1, 0, -1, 0};

signed main() {
  int V = in(), E = in();
  copr::Graph<int> G(V);
  rep(i, E) {
    int s = in(), t = in(), w = in();
    G.add_edge(s, t, w, true);
  }
  auto st = copr::kruskal(G);
  ll ans = 0;
  for (auto&& e : st) {
    ans += e.val;
  }
  pr(ans);
  return 0;
}