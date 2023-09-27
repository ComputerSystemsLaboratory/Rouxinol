#include <cstdio>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int n;
int a[100][100];
int used[100];
int mincost[100];
const int INF=1000000000;
int prim(){
  for(int i=0;i<n;i++){
    used[i]=0;
    mincost[i]=INF;
  }
  mincost[0]=0;
  int res=0;
  while(1){
    int v=-1;
    for(int u=0;u<n;u++){
      if((v==-1 || mincost[v]>mincost[u]) && !used[u])v=u;
    }
    if(v==-1)break;
    used[v]=1;
    res+=mincost[v];
    for(int u=0;u<n;u++){
      mincost[u]=min(mincost[u],a[v][u]);
    }
  }
  return res;
}
int main(){
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      scanf("%d",&a[i][j]);
      if(a[i][j]==-1)a[i][j]=INF;
    }
  }
  printf("%d\n",prim());
  return 0;
}