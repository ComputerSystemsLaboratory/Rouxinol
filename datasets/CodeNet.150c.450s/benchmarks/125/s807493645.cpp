#include<bits/stdc++.h>
using namespace std;
int n,lis[111][111]={},d[111]={},f[111],t=1;

void dfs(int now){
  d[now]=t++;
  for(int i=1;i<=n;i++)
    if(lis[now][i]&&d[i]==0)dfs(i);
  f[now]=t++;
}

int main(){
  cin>>n;
  for(int c=0;c<n;c++){
    int u,k,v;
    cin>>u>>k;
    for(int i=0;i<k;i++){
      cin>>v;
      lis[u][v]=1;
    }
  }
  for(int i=1;i<=n;i++)if(d[i]==0)dfs(i);
  for(int i=1;i<=n;i++)cout<<i<<" "<<d[i]<<" "<<f[i]<<endl;  
  
  return 0;
}