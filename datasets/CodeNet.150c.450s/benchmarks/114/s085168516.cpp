#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ALL(v) v.begin(), v.end()
typedef long long ll;

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }

#include <bits/stdc++.h>
using namespace std;

#define WHITE 0
#define GRAY 1
#define BLACK 2
#define INF 1000000010

  int n;
  int M[100][100];
  int color[100];
  int d[100];
  int p[100];
  int mincost;

void prim(){
  rep(u,n) color[u]=WHITE;
  rep(u,n) d[u]=INF;
  d[0]=0;
  p[0]=-1;
  
  int u;
  while(1){
    mincost=INF; 
    rep(i,n){
      if(color[i] != BLACK && d[i]<mincost){
        mincost=d[i];
        u=i;
      }
    }
    
    if(mincost==INF) break;
    
    color[u]=BLACK;
    
    rep(v,n){
      if(color[v] != BLACK && M[u][v] != -1){
        if(M[u][v]<d[v]){
          d[v]=M[u][v];
          p[v]=u;
          color[v]=GRAY;
        }
      }
    }
  }
}

int main(){
  cin>>n;
  
  rep(i,n){
    rep(j,n) cin>>M[i][j];
  }
  
  prim();
  int sum=0;
  rep(i,n) sum+=d[i];
  
  cout<<sum<<endl;
  
  return 0;
}
