#include<iostream>
using namespace std;
static const int MAX=100;
static const int INF=(1<<21);
static const int APE=0;
static const int MID=1;
static const int BOT=2;

int n, M[MAX][MAX];

int prim(){
  int u, mv, i, v, sum=0;
  int d[MAX], p[MAX], c[MAX];
  for(i=0;i<n;i++){
    d[i]=INF;
    p[i]=-1;
    c[i]=APE;
  }
  d[0]=0;

  while(1){
    mv=INF;
    u=-1;
    for(i=0;i<n;i++){
      if(mv>d[i]&&c[i]!=BOT){
        u=i;
        mv=d[i];
      }
    }
    if(u==-1)break;
    c[u]=BOT;

    for(v=0;v<n;v++){
      if(c[v]!=BOT&&M[u][v]!=INF){
        if(d[v]>M[u][v]){
          d[v]=M[u][v];
          p[v]=u;
          c[v]=MID;
        }
      }
    }
  }
  for(i=0;i<n;i++){
    if(p[i]!=-1){
      sum+=M[i][p[i]];
    }
  }
  return sum;
}

int main(){
  int i, j, e;
  cin>>n;

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      cin>>e;
      M[i][j]=(e==-1) ? INF : e;
    }
  }
  cout<<prim()<<endl;
  return 0;
}
