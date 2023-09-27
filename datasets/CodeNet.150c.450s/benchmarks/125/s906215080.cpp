#include <stdio.h>
#define REP(i,n) for(int i=0;i<n;i++)
#define N 100
#define WHITE 0
#define GRAY 1
#define BLACK 2
int n,M[N][N]={0};
int color[N]={WHITE},D[N],F[N],tt=0;
void DFS_VISIT(int u){
  int v;
  color[u]=GRAY;
  D[u]=++tt;
  REP(v,n){
    if(M[u][v]==0) continue;
    if(color[v]==WHITE) DFS_VISIT(v);
  }
  color[u]=BLACK;
  F[u]=++tt;
}
void DFS(){
  int u;
  REP(u,n) if(color[u]==WHITE) DFS_VISIT(u);
  REP(u,n) printf("%d %d %d\n",u+1,D[u],F[u]);
}
int main(){
  int u,v,k;
  scanf("%d",&n);
  REP(i,n){
    scanf("%d %d",&u,&k);
    u--;
    REP(j,k){
      scanf("%d",&v);
      M[u][--v]=1;
    }
  }
  DFS();
  return 0;
}