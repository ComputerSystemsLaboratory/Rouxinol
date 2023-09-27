#include <stdio.h>

int solve(int A[], int n, int i, int m)
{
  if (m == 0)
  {
    return true;
  }
  if (i >= n)
    return false;
  int res = solve(A, n, i + 1, m) || solve(A, n, i + 1, m - A[i]);
  return res;
}

int main()
{
  int n, q;
  int i;

  scanf("%d", &n);
  int A[n];
  for (i = 0; i < n; i++)
  {
    scanf("%d", &A[i]);
  }
  scanf("%d", &q);
  int m[q];
  for (int i = 0; i < q; i++)
  {
    scanf("%d", &m[i]);
  }

  for (int i = 0; i < q; i++)
  {
    if (solve(A, n, 0, m[i]))
    {
      printf("yes\n");
    }
    else
    {
      printf("no\n");
    }
  }
  return 0;
}
