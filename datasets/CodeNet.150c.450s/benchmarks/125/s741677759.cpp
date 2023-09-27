#include<bits/stdc++.h>
using namespace std;
int visit[111],d[111],f[111],t;
//    訪問状態 　　発見　　　完了
int n,M[111][111];
static const int WHITE=0; //未訪問
static const int GRAY=1; //訪問はした
void dfs(int u){
  visit[u]=GRAY; //訪問はした
  d[u]=++t; //発見した時刻
  for(int v=0;v<n;v++){
    if(M[u][v]==0) continue; //辺がない
    if(visit[v]==WHITE) dfs(v);
  }
  f[u]=++t; //訪問完了時刻
}
int main(){
  int u,v,k;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>u>>k;
    u--;
    for(int j=0;j<k;j++){
      cin>>v;
      v--;
      M[u][v]=1;
    }
  }
  for(int i=0;i<n;i++){
    if(visit[i]==WHITE) dfs(i); //訪問してないか... iを始点に
  }
  for(int i=0;i<n;i++){
    cout<<i+1<<' '<<d[i]<<' '<<f[i]<<endl;
  }
  return(0);
}

