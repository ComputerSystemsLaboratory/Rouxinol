#include<stdio.h>

#define N 103
#define INF 10000000
#define NIL -1
#define BLACK 1

int G[N][N];

int d[N],pi[N],color[N];
int ci[N];
int v[N];

int num;

void initialize(int);
void dij(int);

int main(){
  int i,j;
  int k,u;
  int start=0;

  scanf("%d",&num);

  for(i=0;i<num;i++){
    for(j=0;j<num;j++){
      G[i][j] = NIL;
    }
  }
  

  for(i=0;i<num;i++){
    scanf("%d%d",&u,&k);
      for(j=0;j<k;j++){
	scanf("%d%d",&v[j],&ci[j]);
	G[u][v[j]] = ci[j]; 
      }
  }

  dij(start);

  /*for(i=0;i<num;i++){
    for(j=0;j<num;j++){
      printf("%d ",G[i][j]);
    }
    printf("\n");
  }
  */

  for(i=0;i<num;i++){
    printf("%d %d\n",i,d[i]);
  }
  
  return 0;

}

void initialize(int s){
  int v;
  for(v=0;v<num;v++){
    d[v] = INF;
    pi[v] = NIL;
  }

  d[s] = 0;
}

void dij(int s){
  int mincost;
  int i,v,u;
  
  initialize(s);

  while(1){
    
    mincost = INF;

    for(i=0;i<num;i++){
      
      if(color[i] != BLACK && d[i] < mincost){
	mincost = d[i];
	u = i;

      }
    }

    //printf("u=%d\n", u);
    if(mincost == INF) break;

    color[u] = BLACK;
    
    for(v=0;v<num;v++){
      
      if(G[u][v] == -1) continue;
      if(color[v] != BLACK && d[u] + G[u][v] < d[v]){
	pi[v]= u;
	d[v] = d[u] + G[u][v];
      }
    }
  }
}
	

