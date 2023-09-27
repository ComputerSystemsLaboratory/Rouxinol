#include <cstdio>
#include <algorithm>
using namespace std;

const int INF = 1000000000;

int main()
{
  int n, v1, v2;
  scanf("%d", &n);

  int m[n + 1][n + 1], p[n + 1];
  for (int i = 0; i <= n; i++)
    for (int j = 0; j <= n; j++)
      m[i][j] = INF;

  for (int i = 0; i <= n; i++)
    m[i][i] = 0;

  scanf("%d%d", &v1, &v2);
  p[0] = v1;
  p[1] = v2;
  for (int i = 1; i < n; i++)
  {
    scanf("%d%d", &v1, &v2);
    p[i + 1] = v2;
  }

  for (int l = 2; l <= n; l++)
    for (int i = 1; i <= n - l + 1; i++)
    {
      int j = i + l - 1;
      for (int k = i; k < j; k++)
        m[i][j] = min(m[i][j], m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j]);
    }

  printf("%d\n", m[1][n]);
  return 0;
}