#include <stdio.h>
#define N 100
#define W 0
#define X 1
#define Z 2

int n,m[N][N];
int c[N],d[N],f[N],tt;

void dfs_visit(int u){
  int i;
  c[u] = X;
  ++tt;
  d[u] = tt;
  for(i=0;i<n;i++){
    if(m[u][i] == 0) continue;
    else if(c[i]==W){
      dfs_visit(i);
    }
  }
  c[u]=Z;
  ++tt;
  f[u]=tt;
}

void dfs(){
  int i;
  for(i=0;i<n;i++){
    c[i] = W;
  }
  tt = 0;

  for(i=0;i<n;i++){
    if(c[i]==W)dfs_visit(i);
  }
  for(i = 0 ;i<n;i++){
    printf("%d %d %d\n", i+ 1,d[i],f[i]);
  }
}

int main(){
  int u,v,k,i,j;

  scanf("%d",&n);
  for(i = 0;i<n;i++){
    for(j=0;j<n;j++)m[i][j]=0;
  }

  for(i=0;i<n;i++){
    scanf("%d %d",&u,&k);
    u--;
    for(j=0;j<k;j++){
      scanf("%d",&v);
      v--;
      m[u][v]=1;
    }
  }
  dfs();

  return 0;
}