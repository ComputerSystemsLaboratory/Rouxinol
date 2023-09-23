#include<cstdio>
#include<algorithm>
#include<iostream>
#include<string.h>

using namespace std;

#define INF 1000000

int E,V,r[50][3],d[12][12];

void warshall_floyd(){
  for(int k=0;k<V;k++)
    for(int i=0;i<V;i++)
      for(int j=0;j<V;j++)
        d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
}

void init(){
  for(int i=0;i<12;i++)
    for(int j=0;j<12;j++)
      d[i][j]=INF;

  memset(r,0,sizeof(r));
  V=0;
  E=0;
}

void solve(){
  warshall_floyd();

  int res[12];
  fill(res,res+12,0);


  for(int i=0;i<V;i++){
    for(int j=0;j<V;j++){
        res[i]+=d[i][j];
    }
  }


  int res1=INF;
  int res2=INF;

  for(int i=0;i<V;i++){
    if(res[i]<res2){
      res1=i;
      res2=res[i];
    }
  }

  printf("%d %d\n",res1,res2);
}

int main(){
  while(true){
    init();
    scanf("%d",&E);
    if(E==0) break;
    for(int i=0;i<E;i++){
      scanf("%d%d%d",&r[i][0],&r[i][1],&r[i][2]);
    }

    for(int i=0;i<10;i++){
      V=max(V,r[i][1]);
    }
    V++;


    for(int i=0;i<E;i++){
      d[r[i][0]][r[i][1]]=r[i][2];
      d[r[i][1]][r[i][0]]=r[i][2];
    }

    for(int i=0;i<V;i++)
      d[i][i]=0;

    solve();
  }
  return 0;
}