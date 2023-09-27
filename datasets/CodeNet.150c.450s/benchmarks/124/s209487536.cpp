#include<stdio.h>
#define MAX 100
#define INF 999999
#define WHITE 0
#define BLACK 2

void dijkstra();

int n, G[MAX][MAX];

int main()
{
  int i, j, u, v, c, k;

  scanf("%d", &n);
  for(i=0; i<n; i++)
    {
      for(j=0; j<n; j++) G[i][j] = INF;
    }

  for(i=0; i<n; i++)
    {
      scanf("%d %d", &u, &k);
      for(j=0; j<k; j++)
	{
	  scanf("%d %d", &v, &c);
	  G[u][v] = c;
	}
    } 
  
  dijkstra();
  
  return 0;
}

void dijkstra()
{
  int d[n], color[n], i, u, v, mincost;

  for(i=0; i<n; i++)
    {
      d[i] = INF;
      color[i] = WHITE;
    }

  d[0] = 0;
  while(1)
    {
      mincost = INF;
      for(i=0; i<n; i++)
	{
	  if( d[i] < mincost && color[i] != BLACK )
	    {
	      mincost = d[i];
	      u = i;
	    }
	}

      if(mincost == INF)break;

      color[u] = BLACK;

      for(v=0; v<=n; v++)
	{
	  if(G[u][v] == INF) continue;

	  if(d[v] > d[u] + G[u][v]) 
	    {
	      d[v] = d[u] + G[u][v];
	    }
	}
    }
  
  for(i=0; i<n; i++)
    {
      printf("%d %d\n", i, d[i]);
    }
}