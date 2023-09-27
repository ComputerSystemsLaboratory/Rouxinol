#include <cstdio>
#include <cstring>

const int MAX = 100;
static int time = 0;
int adj[MAX][MAX];
int discover[MAX];
int finish[MAX];

void visit(int node, int n)
{
  ++time;
  discover[node] = time;

  for (int i = 0; i < n; ++i)
  {
    if (adj[node][i] == 1 && discover[i] == 0)
      visit(i, n);
  }

  ++time;
  finish[node] = time;
}

int main()
{
  std::memset(adj, 0, sizeof(adj));
  std::memset(discover, 0, sizeof(discover));
  std::memset(finish, 0, sizeof(finish));

  int n;
  scanf("%d", &n);

  int u, k, v;
  for (int i = 0; i < n; ++i)
  {
    scanf("%d%d", &u, &k);
    for (int j = 0; j < k; ++j)
    {
      scanf("%d", &v);
      adj[u - 1][v - 1] = 1;
    }
  }

  for (int i = 0; i < n; ++i)
  {
    if (discover[i] == 0)
      visit(i, n);
  }

  for (int i = 0; i < n; ++i)
    printf("%d %d %d\n", i + 1, discover[i], finish[i]);

  return 0;
}
