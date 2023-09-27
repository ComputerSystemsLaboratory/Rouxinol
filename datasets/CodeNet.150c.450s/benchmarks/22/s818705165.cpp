#include <bits/stdc++.h>
using namespace std;
struct Graph{
  using seen_t=int64_t; using ver_t=int32_t; using edge_t=pair<seen_t,ver_t>;
  const seen_t NO=1e18; vector<seen_t> seen;
  const ver_t NONE=-1; vector<ver_t> prev;
  vector<vector<edge_t>> edge;
  Graph(size_t n): seen(n,NO*2), prev(n,NONE), edge(n) {}
  // has negative cycle => false
  bool bellmanford(ver_t frm){
    seen[frm]=0;
    seen_t alt; bool no_neg_cycle=true;
    for(ver_t i=0; i<edge.size(); ++i){
      for(ver_t u=0; u<edge.size(); ++u){
        for(const auto& v:edge[u]){
          alt=seen[u]+v.first;
          if(seen[v.second]>alt){
            seen[v.second]=alt; prev[v.second]=u;
            if(i==edge.size()-1){
              // return false;
              if(seen[v.second]<NO) no_neg_cycle=false;
            }
          }
        }
      }
    }
    return no_neg_cycle;
  }
};
ostream& operator<<(ostream& os, const Graph& g){
  for(const auto& x:g.seen){
    if(x>g.NO) os<<"INF\n";
    else os<<x<<'\n';
  }
  return os;
}
int32_t main(){
  ios::sync_with_stdio(false); cin.tie(0);
  size_t n,m,r; cin>>n>>m>>r;
  Graph graph(n);
  int32_t s,t,d;
  for(size_t i=0; i<m; ++i){
    cin>>s>>t>>d;
    graph.edge[s].push_back(make_pair(d,t));
  }
  if(graph.bellmanford(r)) cout<<graph;
  else cout<<"NEGATIVE CYCLE\n";
}
