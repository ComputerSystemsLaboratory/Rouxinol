#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
int N;
int G[100][100];
int d[100];
int used[100];
const int INF=1000000000;
void dijkstra(int s){
  for(int u=0;u<N;u++)d[u]=INF;
  d[s]=0;
  while(1){   
    int v=-1;
    for(int u=0;u<N;u++){
      if((v==-1 || d[v]>d[u]) && !used[u])v=u;
    }
    if(v==-1)break;
    used[v]=1;
    for(int u=0;u<N;u++){
      d[u]=min(d[u],d[v]+G[v][u]);
    }
  }
}
int main(){

  for(int i=0;i<100;i++){
    for(int j=0;j<100;j++){
      G[i][j]=INF;
      if(i==j)G[i][j]=0;
    }
  }
  scanf("%d",&N);
  for(int i=0;i<N;i++){
    int u,k,c,v;
    scanf("%d %d",&u,&k);
    for(int j=0;j<k;j++){
      scanf("%d %d",&v,&c);
      G[u][v]=c;
     
    }
  }
  dijkstra(0);
  for(int i=0;i<N;i++)printf("%d %d\n",i,d[i]);
  return 0;
}