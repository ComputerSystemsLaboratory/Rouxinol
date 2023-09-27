#include<stdio.h>
#define N 101

int main()
{
  int i,j,n,count=0,v,c,c1,v1;
  int G[N][N],col[N],d[N],pi[N],mincost,i2;

  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++)
      G[i][j] = -1;
  }

  scanf("%d",&n);

  for(i = 0; i < n; i++){
    scanf("%d%d",&v,&c);
    for(j = 0; j < c; j++){
      scanf("%d%d",&v1,&c1);
      G[v][v1] = c1;
    }
  }

  for(i = 0; i < n; i++){
    col[i] = 0;
    pi[i] = -1;
    d[i] = 10000001;
  }

  d[0] = 0;

  while(1){
    mincost = 10000001;
    for(i = 0; i < n; i++){
      if(col[i] != 2 && d[i] < mincost){
        mincost = d[i];
        i2 = i;
      }
    }
    if(mincost == 10000001)break;

    col[i2] = 2;


    for(i = 0; i < n; i++){
      if(G[i2][i] != -1 && col[i] != 2 && (G[i2][i]+d[i2]) < d[i]){
        pi[i] = i2;
        d[i] = G[i2][i] + d[i2];
        col[i] = 1;
      }
    }
  }
  for(i = 0; i < n; i++)printf("%d %d\n",i,d[i]);
    return 0;
}