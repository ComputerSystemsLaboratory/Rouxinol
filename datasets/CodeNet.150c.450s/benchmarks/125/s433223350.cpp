#include<bits/stdc++.h>
using namespace std;

int n,u,k,v;
int g[102][102];
int d[102],f[102];
int sn[102];
int cnt=1;

void dfs(int x);

int main(){
  memset(d,0,sizeof(d));
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>u>>k;
    sn[i]=0;
    for(int j=1;j<=k;j++){
      cin>>v;
      g[u][v]=1;
    }
  }
  
  for(int i=1;i<=n;i++){
    if(sn[i]==0){
      dfs(i);
    }
  }


  for(int i=1;i<=n;i++){
    cout<<i<<" "<<d[i]<<" "<<f[i]<<endl;
  }

  return(0);
}

void dfs(int x){
  
  sn[x]=1;
  d[x]=cnt;
  cnt++;
  
  for(int i=1;i<=n;i++){
    if(g[x][i]==1 && sn[i]==0){
      dfs(i);
    }
  }

  f[x]=cnt;
  cnt++;

}