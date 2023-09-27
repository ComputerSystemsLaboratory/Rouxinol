#include <bits/stdc++.h>

//{{{ graph.hpp
#ifndef INCLUDE_GRAPH_HPP
#define INCLUDE_GRAPH_HPP
#include <vector>
namespace orislib {
struct Edge {
  typedef long long weight_t;
  int from, to;
  weight_t w;
  Edge(int from, int to, weight_t w) : from(from), to(to), w(w) {}
  bool operator<(const Edge& e) const {
    return w > e.w;
  }
  static const weight_t INF;
};
const Edge::weight_t Edge::INF=1ll<<58;
typedef std::vector<Edge> Edges;
typedef std::vector<Edges> Graph;
}
#endif
//}}}

using namespace std;
using namespace orislib;

typedef long long ll;
typedef long double ld;
typedef tuple<int, int> duo;
//{{{ templates
#define TMPINL_(...) template<__VA_ARGS__>inline
#define TT_ TMPINL_(typename T)
#define TTF_ TMPINL_(typename T,typename F)
#define TTTS_ TMPINL_(typename T,typename...Ts)
#define TITS_ TMPINL_(size_t I=0,typename...Ts)
TT_ T sq(T x){return x*x;}
TT_ T In(){T x;cin>>x;return x;}
TT_ void Out(T&x){cout<<x;}
TT_ void sort(T&v){sort(begin(v),end(v));}
TT_ void revs(T&v){reverse(begin(v),end(v));}
TT_ void uniq(T&v){sort(v);v.erase(unique(begin(v),end(v)),end(v));}
TT_ int ubnd(T&v,typename T::value_type&x){return upper_bound(begin(v),end(v),x)-begin(v);}
TT_ int lbnd(T&v,typename T::value_type&x){return lower_bound(begin(v),end(v),x)-begin(v);}
TTF_ void inpt(T&v,int n,F f){for(v.reserve(n);n--;v.emplace_back(f()));}
TTF_ void show(T&v,F f,string d=" ",string e="\n"){int i=0;for(auto&x:v)i++&&(cout<<d),f(x);cout<<e;}
TITS_ typename enable_if<I==tuple_size<tuple<Ts...>>::value-1,string>::type join(string s,tuple<Ts...>t){return to_string(get<I>(t));}
TITS_ typename enable_if<I<tuple_size<tuple<Ts...>>::value-1,string>::type join(string s,tuple<Ts...>t){return to_string(get<I>(t))+s+join<I+1>(s,t);}
TT_ string join(string s,T t){return to_string(t);}
TTTS_ string join(string s,T t,Ts...ts){return join(s,t)+s+join(s,ts...);}

inline void fast_io(){ios::sync_with_stdio(0);cin.tie(0);}
inline int in(){int x;scanf("%d",&x);return x;}
inline ll pow_mod(ll a,ll k,ll m){ll r=1;for(;k>0;a=a*a%m,k>>=1)if(k&1)r=r*a%m;return r;}
inline ll mod_inv(ll a,ll p){return pow_mod(a,p-2,p);}
inline int puts(const string&s){ return puts(s.c_str()); }
//}}} priority_queue queue deque front stringstream max_element min_element insert count make_tuple
const int dx[] = {0, 0, 1, -1, 1, 1, -1, -1};
const int dy[] = {1, -1, 0, 0, 1, -1, 1, -1};
const int Mod = 1000000000 + 0;

//{{{ bool bellmanford(g, s, &dist, &prev)
bool bellmanford(const Graph& g, int s, vector<Edge::weight_t>& dist, vector<int>& prev)
{
  const int V = g.size();
  dist.assign(V, Edge::INF);
  prev.assign(V, -1);
  dist[s] = 0;
  bool negative_cycle = false;
  for (int i = 0; i < V; i++){
    for (const auto& v : g){
      for (const auto& e : v){
        if (dist[e.from] != Edge::INF && dist[e.to] > dist[e.from] + e.w){
          dist[e.to] = dist[e.from] + e.w;
          prev[e.to] = e.from;
          if (i == V - 1){
            dist[e.to] = -Edge::INF;
            negative_cycle = true;
          }
        }
      }
    }
  }
  return !negative_cycle;
}
//}}}

int main()
{
  int V, E, r;
  V = in(), E = in(), r = in();
  Graph g(V);
  for (int i = 0; i < E; i++){
    int s, t, d;
    s = in(), t = in(), d = in();
    g[s].emplace_back(s, t, d);
  }
  vector<Edge::weight_t> ws;
  vector<int> prev;
  bool nneg = bellmanford(g, r, ws, prev);
  if (!nneg) puts("NEGATIVE CYCLE");
  else {
    show(ws, [](Edge::weight_t v){
        if (v >= Edge::INF) cout << "INF";
        else cout << v;
        }, "\n");
  }
  return 0;
}