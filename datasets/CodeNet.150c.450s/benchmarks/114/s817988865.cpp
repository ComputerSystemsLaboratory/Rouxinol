#include<bits/stdc++.h>
using namespace std;
#define INF 2*1e9
int main(){
  
  int n;
  int cost[100][100];
  int mincost[100];
  int used[100]={};
  
  cin>>n;
  for(int i=0;i<n;i++){
    mincost[i]=INF;
    for(int j=0;j<n;j++){
      cin>>cost[i][j];
      if(cost[i][j]==-1)cost[i][j]=INF;
    }
  }

  mincost[0]=0;
  int ans=0;

  while(1){
    int v=-1;
    for(int u=0;u<n;u++){
      if(used[u]==0&&(v==-1||mincost[u]<mincost[v]))v=u;
    }
    
    if(v==-1)break;
    used[v]=1;
    ans+=mincost[v];
    
    for(int u=0;u<n;u++){
      mincost[u]=min(mincost[u],cost[v][u]);
    }
  }
  
  cout<<ans<<endl;
  
  return 0;
  
}