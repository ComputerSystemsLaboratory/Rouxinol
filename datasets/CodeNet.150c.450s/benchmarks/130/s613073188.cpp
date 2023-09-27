#include <stdio.h>

int main(void) {
  int m, n, i, j;
  scanf("%d%d", &n, &m);
  int a[n][m], b[m];
  for(i = 0; i < n; ++i) for(j = 0; j < m; ++j) scanf("%d", &a[i][j]);
  for(i = 0; i < m; ++i) scanf("%d", &b[i]);
  for(i = 0; i < n; ++i) {
    int ans = 0;
    for(j = 0; j < m; ++j) {
      ans += a[i][j] * b[j];
    }
    printf("%d\n", ans);
  }
  return 0;
}
