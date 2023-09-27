#include <stdio.h>

#define inf 100000
#define WHITE 1
#define BLACK 0
#define MAX 100

int d[MAX],pi[MAX],color[MAX],A[MAX][MAX];
int n,i,j,v,u;
int min,count=0;

int main(){

  int i,j;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&A[i][j]);
    }
  }

  for(i=0;i<n;i++){
    d[i]=inf;
    color[i]=WHITE;
  }
  d[0]=0;

  while(1){
    min=inf;
    for(i=0;i<n;i++){
      if(color[i]==WHITE && d[i]<min){
	min=d[i];
	u=i;
      }
    }

    if(min==inf)break;
    color[u]=BLACK;
    count+=min;

    for(v=0;v<n;v++){
      if(A[u][v]==-1)continue;
      if(d[v]>A[u][v])d[v]=A[u][v];
    }
  }

  printf("%d\n",count);

  return 0;
  
}