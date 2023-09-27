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
int color[100],d[100],p[100];

void dik(int s){
  
  rep(i,n){
    color[i]=WHITE;
    d[i]=INF;
    p[i]=-1;
  }
  d[s]=0;
  
  int minc,u;
  while(1){
    minc=INF; 
    rep(i,n){
      if(color[i] != BLACK && d[i]<minc){
        minc=d[i];
        u=i;
      }
    }
    
    if(minc==INF) break;
    color[u]=BLACK;
    
    rep(v,n){
      if(color[v] != BLACK && M[u][v] != -1){
        if(d[u]+M[u][v]<d[v]){
          d[v]=d[u]+M[u][v];
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
    rep(j,n) M[i][j]=INF;
  }
  
  int x,y,z;
  rep(i,n){
    cin>>x>>y;
    rep(j,y){
      cin>>z;
      cin>>M[x][z];
    }
  }
  
  dik(0);
  rep(i,n) cout<<i<<" "<<d[i]<<endl;
  
  return 0;
}
