#include <stdio.h>
#define INF 1000000
#define white 0
#define black 2
#define gray 1

int n,M[100][100];

void dijkstra();

int main(){
  int i,j,k,c,v,u;
  scanf("%d",&n);
  for(i=0;i<n;i++){ 
    for(j=0;j<n;j++){
      M[i][j]=INF;
    }
  }
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d%d",&v,&c);
      M[u][v]=c;
    }
  }
  dijkstra();
  
  return 0;
}
void dijkstra(){
  int i,d[100],mincost,color[100],v,u;
  for(i=0;i<n;i++){
    d[i]=INF;
    color[i]=white;
  }
  d[0]=0;
  color[0]=gray;

  while(1){
    mincost=INF;
    u=-1;
    for(i=0;i<n;i++){
      if(color[i]!=black&&d[i]<mincost){
	mincost=d[i];
	u=i;
      }
    }
    if(u==-1)break;
    
    color[u]=black;
    for(v=0;v<n;v++){
      if(color[v]!=black&&M[u][v]!=INF){
	if(d[v]>d[u]+M[u][v]){
	  d[v]=d[u]+M[u][v];
	  color[v]=gray;
	}
      }
    }
  }
  for(i=0;i<n;i++){
    printf("%d ",i);
    if(d[i]==INF)printf("-1");
    else printf("%d",d[i]);
    printf("\n");
  }
}

