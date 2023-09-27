#include <stdio.h>

int main(void) {
  int i, n, j, k, w;
  scanf("%d%d", &w, &n);
  int a[n], b[n], now, ans[w + 2];
  for(i = 0; i < n; ++i) scanf("%d,%d", &a[i], &b[i]);
  for(i = 1; i <= w; ++i) {
    now = i;
    for(j = 0; j < n; ++j) {
      if(a[j] == now) now = b[j];
      else if(b[j] == now) now = a[j];
    }
    ans[now] = i;
  }
  for(i = 1; i <= w; ++i) printf("%d\n", ans[i]);
  return 0;
}
