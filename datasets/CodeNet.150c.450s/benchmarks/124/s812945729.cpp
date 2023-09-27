#include<bits/stdc++.h>
using namespace std;
#define INF 1<<30
struct edge{int to,cost;};
vector<edge> G[101];
int d[101];
bool visited[101];
void dijkstra(int n){
  fill(d+1,d+101,INF);
  memset(visited,false,sizeof(visited));
  for(int i=0;i<n;++i){
    int id=-1;
    for(int j=0;j<n;++j){
      if(!visited[j]){
        if(id==-1||d[id]>d[j]) id=j;
      }
    }
    visited[id]=true;
    for(int j=0;j<G[id].size();++j){
      edge e=G[id][j];
      d[e.to]=min(d[e.to],d[id]+e.cost);
    }
  }
}
int main(){
  int n; cin>>n;
  for(int i=0;i<n;++i){
    int u,k; cin>>u>>k;
    for(int j=0;j<101;++j) G[i].clear();
    for(int j=0;j<k;++j){
      int c,v; cin>>c>>v;
      edge e; e.to=c, e.cost=v;
      G[u].push_back(e);
    }
    dijkstra(n);
  }
  for(int i=0;i<n;++i) cout<<i<<" "<<d[i]<<endl;
  return 0;
}