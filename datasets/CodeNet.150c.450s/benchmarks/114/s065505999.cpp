#include<stdio.h>
  
#define MAX 100
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define NIL -1
#define INF 100000

int n,G[MAX][MAX];

int prim(){
  int u,mincost,i;
  int d[MAX],pi[MAX],color[MAX];
  
  for( u = 0 ; u < n ; u++ ){
    d[u] = INF;
    pi[u] = NIL;
    color[u] = WHITE;
  }
  
  d[0] = 0;
  
  while(1){
    mincost = INF;
    i = NIL;
    for( u = 0 ; u < n ; u++ ){
      if(color[u] != BLACK && d[u] < mincost){
    i = u;
    mincost = d[u];
      }
    }
  
    if( i == NIL ) break;
  
    color[i] = BLACK;
  
    for( u = 0 ; u < n ; u++ ){
      if(color[u] != BLACK && G[i][u] != INF ){
    if( d[u] > G[i][u] ){
      d[u] = G[i][u];
      pi[u] = i;
      color[u] = GRAY;
    }
      }
    }
  }
  
  int sum = 0;
  
  for( u = 0 ; u < n ; u++ ){
    if( pi[u] != NIL ) sum += G[u][pi[u]];
  }
  
  return sum;
} 

  
int main(){
  int i,j,m;
  scanf("%d",&n);
  
  for( i = 0 ; i < n ; i++ ){
    for( j = 0 ; j < n ; j++ ){
      scanf("%d",&m);
      if(m==NIL) G[i][j]=INF;
      else G[i][j]=m; 
    }
  }
  
  printf("%d\n",prim());
  
  return 0;
}
  