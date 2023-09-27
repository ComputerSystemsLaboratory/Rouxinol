#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,u,k,v;
  int g[102][102];
  
  memset(g,0,sizeof(g));

  cin>>n;
  for(int i=0;i<n;i++){
    cin>>u>>k;
    for(int j=0;j<k;j++){
      cin>>v;
      g[u][v]=1;
    }
  }
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(j!=1)cout<<" ";
      cout<<g[i][j];
    }
    cout<<endl;
  }
  return(0);
}