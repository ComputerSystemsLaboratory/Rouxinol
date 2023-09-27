#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) FOR(i,0,n)
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define PB push_back
typedef vector<ll> vi;
typedef vector<vector<ll>> vvi;
const ll INF = (1ll << 60);
typedef pair<ll,ll> pii;
struct Edge{ll s,t,d;};
typedef vector<vector<Edge>> Graph;

pair<bool, vvi> allPairsShortestPath(Graph &graph){
  bool hasNegativeCycle=false;
  ll V=graph.size();
  vvi dist(V,vi(V,INF));
  REP(i,V) dist[i][i]=0;
  REP(i,V) for(Edge e:graph[i]) dist[e.s][e.t]=e.d;
  REP(l,V+1){
    REP(i,V) REP(j,V) REP(k,V) {
      if(dist[i][k]!=INF&&dist[k][j]!=INF&&dist[i][j]>dist[i][k]+dist[k][j]){
        dist[i][j]=dist[i][k]+dist[k][j];
      }
    }
  }
  REP(i,V) if(dist[i][i]<0) hasNegativeCycle=true;
  return {hasNegativeCycle,dist};
}

int main(){
  ll V,E; cin>>V>>E;
  Graph graph(V);
  REP(i,E){
    Edge e; cin>>e.s>>e.t>>e.d;
    graph[e.s].PB(e);
  }
  pair<bool,vvi> ans=allPairsShortestPath(graph);
  if(ans.first) {cout<<"NEGATIVE CYCLE"<<endl; return 0;}
  vvi dist=ans.second;
  REP(i,V){
    REP(j,V){
      if(dist[i][j]==INF) cout<<"INF";
      else cout<<dist[i][j];
      if(j!=V-1) cout<<' ';
      else cout<<endl;
    }
  }
}