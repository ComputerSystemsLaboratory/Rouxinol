#include <bits/stdc++.h>
using namespace std;

static const int N=100;
static const int INF=100000;

int n;
int M[N][N];

//初期化
int prim(){
  int u,minv;
  int d[N],p[N],color[N];
  for(int i=0;i<n;i++){
    d[i]=INF;
    p[i]=-1;
    color[i]=0;
  }
  
  d[0]=0;
  
  while(1){
    minv=INF;
    u=-1;
    for(int i=0;i<n;i++){
      if(minv>d[i]&&color[i] != 2){
        u = i;
        minv = d[i];
      }
    }
    if(u == -1) break;
    color[u] = 2;
    
    for(int v=0;v<n;v++){
      if(color[v] !=2 && M[u][v] != INF){
        if(d[v]>M[u][v]){
          d[v]=M[u][v];
          p[v]=u;
          color[v]=1;
        }
      }
    }
  }
  int sum=0;
  for(int i=0;i<n;i++){
    if(p[i] !=-1 ) sum += M[i][p[i]];
  }
  return  sum;
}

int main(){
  int e; 
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>e;
      M[i][j]=(e== -1)? INF : e;
    }
  }
  
  cout<<prim()<<endl;
  return 0;
}

