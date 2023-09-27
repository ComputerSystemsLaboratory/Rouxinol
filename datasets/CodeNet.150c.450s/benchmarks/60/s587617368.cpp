#include <cstdio>
#include <cstring>

const int MAX = 100;
int adj[MAX + 1][MAX + 1];

int main()
{
  std::memset(adj, 0, sizeof(adj));

  int n;
  scanf("%d", &n);

  int u, k, v;
  for (int i = 0; i < n; ++i)
  {
    scanf("%d%d", &u, &k);
    for (int j = 0; j < k; ++j)
    {
      scanf("%d", &v);
      adj[u][v] = 1;
    }
  }

  for (int i = 1; i <= n; ++i)
  {
    for (int j = 1; j <= n; ++j)
    {
      printf("%d", adj[i][j]);
      if (j < n)
        printf(" ");
      else
        printf("\n");
    }
  }

  return 0;
}
