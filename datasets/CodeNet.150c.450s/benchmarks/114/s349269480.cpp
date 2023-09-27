#include <iostream>

#define INF 10000

using namespace std;

int main(){
  int n; cin >> n;
  int G[n+1][n+1];
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      cin >> G[i][j];
    }
  }
  //prim's algorithm
  int d[n+1],visited[n+1];
  int sum=0;
  for(int i=1;i<=n;i++){
    visited[i]=0;
    d[i]=INF;
  }
  d[1]=0;
  while(1){
    int mincost=INF;
    int u;
    for(int i=1;i<=n;i++){
      if(visited[i]==0 && d[i]<mincost){
        mincost=d[i];
        u=i;
      }
    }
    if(mincost==INF) break;
    visited[u]=1;
    sum=sum+mincost;
    //update d
    for(int v=1;v<=n;v++){
      if(visited[v]==0 && G[u][v]!=-1){
        if(G[u][v]<d[v]){
          d[v]=G[u][v];
        }
      }
    }
  }
  cout << sum << endl;
}