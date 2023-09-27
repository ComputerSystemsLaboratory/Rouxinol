#include <iostream>
#include <limits>
#define N 100

using namespace std;

const int INF=numeric_limits<int>::max();

int n,M[N][N],d[N];

void dijkstra(int s){
  bool visited[n];
  for(int i=0;i<n;i++){
    visited[i]=false;
    d[i]=INF;
  }
  d[s]=0;
  while(1){
    int mincost=INF;
    int u;
    //find minimum d from non-visited nodes
    for(int i=0;i<n;i++){
      if(!visited[i] && d[i]<mincost){
        mincost=d[i];
        u=i;
      }
    }
    if(mincost==INF) break;

    visited[u]=true;
    //update d
    for(int v=0;v<n;v++){
      if(!visited[v] && M[u][v]!=INF){
        if(d[u]+M[u][v]<d[v]){
          d[v]=d[u]+M[u][v];
        }
      }
    }
  }
}

int main(){
  cin >> n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++) M[i][j]=INF;
  }
  for(int i=0;i<n;i++){
    int u,k; cin >> u >> k;
    for(int i=0;i<k;i++){
      int v,c; cin >> v >> c;
      M[u][v]=c;
    }
  }
  dijkstra(0);
  for(int i=0;i<n;i++)
    cout << i << " " << d[i] << endl;
}