#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i=0; i<n; i++)
#define INF 2000000001

int V, E;
int d[100][100];//d[i][j]:=i??????j????????????????????¢

void warshall(){
  rep(k, V) rep(i, V) rep(j, V)
    if(d[i][k]!=INF && d[k][j]!=INF)d[i][j]=min(d[i][j], d[i][k]+d[k][j]);
}

int main(){
  cin>>V>>E;
  rep(i, V)rep(j, V)
    if(i==j)d[i][j]=0;
    else d[i][j]=INF;
  rep(i, E){
    int s, t, cost;
    cin>>s>>t>>cost;
    d[s][t]=cost;
  }

  warshall();

  bool NC=false;
  rep(i, V)if(d[i][i]<0)NC=true;
  if(NC)cout<<"NEGATIVE CYCLE"<<endl;
  else{
    rep(i, V)rep(j, V){
      if(d[i][j]==INF)cout<<"INF";
      else cout<<d[i][j];
      if(j<V-1)cout<<" ";
      else cout<<endl;
    }
  }

  return 0;
}