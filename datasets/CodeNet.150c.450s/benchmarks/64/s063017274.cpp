#include <cstdio>
int n;
int A[20];

bool solve(int i, int m) {
  if (m == 0) return true;
  if (i == n) return false;
  return (solve(i + 1, m) || solve(i + 1, m - A[i]));
}

int main() {
  int i, q, m;
  scanf("%d\n", &n);
  for (i = 0; i < n; ++i)
    scanf("%d\n", &A[i]);
  scanf("%d\n", &q);
  for (i = 0; i < q; ++i) {
    scanf("%d\n", &m);
    if (solve(0, m))
      printf("yes\n");
    else
      printf("no\n");
  }
  return 0;
}