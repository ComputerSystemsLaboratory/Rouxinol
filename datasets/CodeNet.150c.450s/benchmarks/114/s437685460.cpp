#include <iostream>
#define N 100
#define WHITE 0
#define BLACK 1
#define INF 10000

using namespace std;

int M[N][N],n,d[N];

void prim(){
  int color[n],p[n];
  for(int i=0;i<n;i++){
    color[i]=WHITE;
    d[i]=INF;
  }
  d[0]=0;
  p[0]=-1;
  while(1){
    int mincost=INF;
    int u;
    for(int i=0;i<n;i++){
      if(color[i]!=BLACK && d[i]<mincost){
        mincost=d[i];
        u=i;
      }
    }
    if(mincost==INF) break;
    //connect u to p[u]
    color[u]=BLACK;
    for(int v=0;v<n;v++){
      if(color[v]!=BLACK && M[u][v]!=-1){
        if(M[u][v]<d[v]){
          d[v]=M[u][v];
          p[v]=u;
        }
      }
    }
  }
}

int main(){
  cin >> n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++) cin >> M[i][j];
  }
  prim();
  int sum=0;
  for(int i=0;i<n;i++) sum+=d[i];
  cout << sum << endl;
}