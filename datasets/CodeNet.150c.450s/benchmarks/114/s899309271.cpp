#include<bits/stdc++.h>
using namespace std;
#define MAX 100
#define INF 1<<25
int n,cost[MAX][MAX];
int mincost[MAX];
bool used[MAX];
int prim(){
  for(int i=0;i<n;i++)mincost[i]=INF,used[i]=false;
    mincost[0]=0;
  int res=0;
  while(1){
    int v=-1;
    for(int u=0;u<n;u++)
      if(!used[u]&&(v==-1||mincost[u]<mincost[v]))v=u;
    if(v==-1)break;
    used[v]=1;
    res+=mincost[v];
    for(int u=0;u<n;u++)mincost[u]=min(mincost[u],cost[v][u]);
  }
return res;
}
int main(){
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      int e;
      cin>>e;
      cost[i][j]=(e==-1)?INF:e;
    }
  }
  cout<<prim()<<endl;
}