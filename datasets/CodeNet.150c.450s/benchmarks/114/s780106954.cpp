#include <cstdio>

const int MAX_N = 100;
const int INFINITY = 2000 + 1;

enum
{
  WHITE,
  GRAY,
  BLACK
};

int color[MAX_N];
int M[MAX_N][MAX_N];
int d[MAX_N];
int p[MAX_N];
int n;

void prim()
{
  for (int i = 0; i < n; ++i)
  {
    color[i] = WHITE;
    d[i] = INFINITY;
    p[i] = -1;
  }

  d[0] = 0;

  while (true)
  {
    int mincost = INFINITY;
    int u = -1;

    for (int i = 0; i < n; ++i)
    {
      if (color[i] != BLACK && mincost > d[i])
      {
        mincost = d[i];
        u = i;
      }
    }

    if (u == -1)
      break;

    color[u] = BLACK;

    for (int v = 0; v < n; ++v)
    {
      if (color[v] != BLACK && M[u][v] != INFINITY)
      {
        if (d[v] > M[u][v])
        {
          d[v] = M[u][v];
          p[v] = u;
          color[v] = GRAY;
        }
      }
    }
  }
}

int main()
{
  scanf("%d", &n);

  for (int i = 0; i < n; ++i)
  {
    for (int j = 0; j < n; ++j)
    {
      int m;
      scanf("%d", &m);
      M[i][j] = (m == -1) ? INFINITY : m;
    }
  }

  prim();

  int count = 0;
  for (int i = 0; i < n; ++i)
  {
    if (p[i] != -1)
      count += M[i][p[i]];
  }

  printf("%d\n", count);

  return 0;
}

