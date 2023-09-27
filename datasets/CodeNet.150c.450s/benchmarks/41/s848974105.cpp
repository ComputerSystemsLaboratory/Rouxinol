#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
  int v,e;
  cin>>v>>e;
  int g[v][v];
  int INF=1LL<<55LL;
  for(int i=0;i<v;i++)
    for(int j=0;j<v;j++)
      g[i][j]=(i!=j)*INF;
  for(int i=0;i<e;i++){
    int s,t,d;
    cin>>s>>t>>d;
    g[s][t]=d;
  }
  for(int k=0;k<v;k++)
    for(int i=0;i<v;i++)
      for(int j=0;j<v;j++)
	g[i][j]=min(g[i][j],g[i][k]+g[k][j]);
  for(int i=0;i<v;i++){
    if(g[i][i]<0){
      cout<<"NEGATIVE CYCLE"<<endl;
      return 0;
    }
  }
  for(int i=0;i<v;i++){
    for(int j=0;j<v;j++){
      if(j) cout<<" ";
      if(g[i][j]>=INF/2) cout<<"INF";
      else cout<<g[i][j];
    }
    cout<<endl;
  }
  return 0;
}