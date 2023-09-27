#include <stdio.h>
#define INF 100000000
#define BLACK 0
#define WHITE 1
#define N 101
 
int n,a[N][N];

int prim(void)
{
  int u,v,i,mincost,d[N],pi[N],total = 0,color[N];
 
  for(u = 1;u <= n;u++){
    d[u] = INF;
    pi[u] = -1;
    color[u] = WHITE;
  }
 
  d[1] = 0;
     
  while(1){
    mincost = INF;
    for(i = 1;i <= n;i++){
      if(color[i] != BLACK && d[i] < mincost){
	mincost = d[i];
	u = i;
      }
    }
     
    if(mincost == INF) break;
    
    color[u] = BLACK;
     
    for(v = 1;v <= n;v++){
      if(color[v] != BLACK && a[u][v] < d[v]){
	pi[v] = u;
	d[v] = a[u][v];
      }
    }
    color[v] = BLACK;
  }
 
  for(i = 1;i <= n; i++){
    if(pi[i] != -1) total += a[i][pi[i]];
  }
 
  return total;
}

 
int main()
{
  int i,j;
 
  scanf("%d",&n);
 
  for(i = 1;i <= n;i++){
    for(j = 1;j <= n;j++){
      scanf("%d",&a[i][j]);
      if(a[i][j] == -1) a[i][j] = INF;
    }
  }
 
   printf("%d\n",prim());
    
   return 0;
 
}
 