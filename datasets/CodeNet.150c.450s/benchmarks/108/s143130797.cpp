#include <stdio.h>
#define GRAY  2 
#define WHITE 1
#define BLACK 3 
#define INF -1
int n,color[110],d[110],Q[110],adj[110][110];
int head=0,tail=0;
int judge(){
  if(tail==head) return 1;

  return 0;
}

void enQ(int s){
  Q[tail]=s;
  if(tail==110)tail=0;
  else tail++;
}
int deQ(){
  int a;
  a=Q[head];
  if(head==100)head==0;
  else head++;

  return a;
}

void bfs(int s){
  int i,j,u;
  for(i=2;i<=n;i++){
    color[i]=WHITE;
    d[i]=INF;
  }

  color[s]=GRAY;
  d[s]=0;
 
  enQ(s);

  while(judge() != 1){
 
    u = deQ();
 
    for( j = 1; j <= n; j++ ){
      if(color[j]==WHITE&&adj[u][j]==1){
 
	color[j] = GRAY;
 
	d[j] = d[u] + 1;
 
	enQ(j);
      }
    }
    color[u]=BLACK;
  }

}


int main(){

  int u,k,v,i,j;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d",&v);
      adj[u][v]=1;
    }
  } 
  bfs(1);

  for(i=1;i<=n;i++){
    printf("%d %d\n",i,d[i]);
  }
  return 0;



}