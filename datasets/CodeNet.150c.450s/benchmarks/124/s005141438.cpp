#include<stdio.h>
#define MAX 100
#define INFTY 2097152
#define WHITE 0
#define GRAY 1
#define BLACK 2
void dijkstra();
int n,M[MAX][MAX];

int main(){
  int k,u,c,v;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      M[i][j]=INFTY;
    }}
  for(int i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(int j=0;j<k;j++){
      scanf("%d%d",&v,&c);
      M[u][v]=c;
    }}

  dijkstra();
  return 0;}

void dijkstra(){
  int minv;
  int d[MAX],color[MAX];
  for(int i=0;i<n;i++){
    d[i]=INFTY;
    color[i]=WHITE;
  }

  d[0]=0;
  color[0]=GRAY;
  while(1){
    minv=INFTY;
    int u=-1;
    for(int i=0;i<n;i++){
      if(minv>d[i]&&color[i]!=BLACK){
	u=i;
	minv=d[i];
      }}
    if(u==-1)break;
    color[u]=BLACK;
    for(int v=0;v<n;v++){
      if(color[v]!=BLACK&&M[u][v]!=INFTY){
	if(d[v]>d[u]+M[u][v]){
	  d[v]=d[u]+M[u][v];
	  color[v]=GRAY;
	}
      }
    }
  }
  for(int i=0;i<n;i++){
 
    printf("%d ",i);
    if(d[i]==INFTY)
      printf("%d",-1);
    else
      printf("%d",d[i]);
 printf("\n");
  }}

