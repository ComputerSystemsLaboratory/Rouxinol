#include<bits/stdc++.h>
using namespace std;
int n,M[101][101];
int visit[101],d[101],f[101],t;
const int WHITE=0;
const int GLAY=1;
const int BLACK=2;

void dfs(int u){
  visit[u]=GLAY;
  d[u]=++t;
  for(int v=0;v<n;v++){
    if(M[u][v]==0) continue;
    if(visit[v]==WHITE){
    dfs(v);
    }
  }
  visit[u]=BLACK;
  f[u]=++t;
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
    if(visit[i]==WHITE){
      dfs(i);
    }
  }
  for(int i=0;i<n;i++){
    cout<<i+1<<" "<<d[i]<<" "<<f[i]<<endl;
  }

  
  return 0;
}
  

