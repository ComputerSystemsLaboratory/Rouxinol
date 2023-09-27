//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_2_A&lang=ja
//最小全域木
#include <bits/stdc++.h>
#if LOCAL
#include "dump.hpp"
#else
#define dump(...)
#endif
using namespace std;
using ll=long long;
const ll LINF = 0x1fffffffffffffff;
#define FOR(i,a,b) for(ll i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)
template<class T>bool chmax(T &a, const T &b) {if (a<b) { a=b; return 1; } return 0;}
template<class T>bool chmin(T &a, const T &b) {if (b<a) { a=b; return 1; } return 0;}

template< typename T >
struct edge {
	int src, to;
	T cost;
	edge(int _to, T _cost) : src(-1), to(_to), cost(_cost) {}
	edge(int _src, int _to, T _cost) : src(_src), to(_to), cost(_cost) {}
	edge &operator=(const int &x) {
		to = x;
		return *this;
	}
	operator int() const { return to; }
};

template< typename T>
struct node {
	vector<edge<T>> edges;
};

template< typename T >
using Edges = vector< edge< T > >;
template< typename T >
using WeightedGraph = vector< node< T > >;
using UnWeightedGraph = vector< vector< int > >;
template< typename T >
using Matrix = vector< vector< T > >;
#if 10
template< typename T >
bool operator<(const edge<T> &e, const edge<T> &f) { return e.cost > f.cost; }
template< typename T >
std::pair<T, Edges<T>> prim(const WeightedGraph<T> &g, int r = 0) {
    Edges<T> edges;
    T total = T();
    std::vector<int> vis(g.size());
    std::priority_queue<edge<T>> q;
    q.emplace(-1, r, 0);
    while (q.size()) {
        auto e = q.top();
        q.pop();
        if (vis[e.to]) continue;
        vis[e.to] = true;
        total += e.cost;
        if (e.src != -1) edges.emplace_back(e);
        for (auto &f : g[e.to].edges)
            if (!vis[f.to]) q.emplace(f);
    }
    return std::make_pair(total, edges);
}
#else
template< typename T >
struct MinimumSpanningTree {
  T cost;
  Edges< T > edges;
};

template< typename T >
MinimumSpanningTree< T > prim(WeightedGraph< T > g) {
  T total = T();
  vector< int > used(g.size());
  vector< edge< T > * > dist(g.size());
  using pi = pair< T, int >;
  priority_queue< pi, vector< pi >, greater<> > que;
  que.emplace(T(), 0);
  Edges< T > edges;
  while(!que.empty()) {
    auto p = que.top();
    que.pop();
    if(used[p.second]) continue;
    used[p.second] = true;
    total += p.first;
    if(dist[p.second]) edges.emplace_back(*dist[p.second]);
    for(auto &e : g[p.second].edges) {
      if(used[e.to] || (dist[e.to] && dist[e.to]->cost <= e.cost)) continue;
      e.src = p.second;
      que.emplace(e.cost, e.to);
    }
  }
  return {total, edges};
}
#endif
int main() {
  ll V,E; cin>>V>>E;
  WeightedGraph<ll> graph(V);
  REP(i,E){
    ll s,t,w; cin>>s>>t>>w;
    graph.at(s).edges.emplace_back(t,w);
    graph.at(t).edges.emplace_back(s,w);
  }

  auto result=prim<ll>(graph);
  //cout<<result.cost<<endl;
  cout<<result.first<<endl;

  return 0;
}
