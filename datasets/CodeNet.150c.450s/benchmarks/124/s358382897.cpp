#include<stdio.h>

#define N 100
#define BLACK 0
#define WHITE 1
#define INF 100000000
#define NIL -1

void dijkstra(void);

int A[N][N],n;

int main()
{
  int u,k,v,c;

  scanf("%d",&n);

  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j < n; j++)
    {
      A[i][j] = INF;
    }
  }

  for(int i = 0;i < n; i++)
  {
    scanf("%d%d",&u,&k);
    for(int j = 0; j < k; j++)
    {
      scanf("%d%d",&v,&c);
      A[u][v] = c;
    }
  }

  dijkstra();

  return 0;
}

void dijkstra()
{

  int u,mincost;
  int d[N],pi[N],color[N];

  for(int u = 0; u < n; u++)
  {
    d[u] = INF;
    pi[u] = NIL;
    color[u] = WHITE;
  }

  d[0] = 0;

  while(1)
  {
    mincost = INF;
    for(int i = 0; i < n; i++)
    {
      if(color[i] != BLACK && d[i] < mincost)
      {
        mincost = d[i];
        u = i;
      }
    }
    if(mincost == INF) break;

    color[u] = BLACK;

    for(int v = 0; v < n; v++)
    {
      if(color[v] != BLACK && A[u][v] + d[u] < d[v] && A[u][v] != -1){
        pi[v] = u;
        d[v] = A[u][v] +d[u];
      }
    }

  }
  for(u = 0; u < n; u++)
  {
    printf("%d %d\n",u,d[u]);
  }

}

