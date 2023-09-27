#include <iostream>

#define N_MAX 101
#define INF 100000000

using namespace std;

int main(){
  int n; cin >> n;
  int G[n][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      G[i][j]=-1;
    }
  }
  for(int i=0;i<n;i++){
    int u,k; cin >> u >> k;
    for(int i=1;i<=k;i++){
      int v,c; cin >> v >> c;
      G[u][v]=c;
    }
  }
  //dijkstra's algorithm
  int visited[n],d[n];
  for(int i=0;i<n;i++){
    visited[i]=0;
    d[i]=INF;
  }
  d[0]=0;

  while(1){
    int mind=INF;
    int u;
    for(int i=0;i<n;i++){
      if(visited[i]==0 && d[i]<mind){
        mind=d[i];
        u=i;
      }
    }
    if(mind==INF) break;
    visited[u]=1;
    for(int v=0;v<n;v++){
      if(G[u][v]!=-1 && visited[v]==0){
        if(d[u]+G[u][v]<d[v]) d[v]=d[u]+G[u][v];
      }
    }
  }
  for(int i=0;i<n;i++) cout << i << " " << d[i] << endl;
}