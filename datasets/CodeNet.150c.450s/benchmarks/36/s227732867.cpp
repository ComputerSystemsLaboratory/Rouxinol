#include <stdio.h>

int main(void) {
  int i, ans = 0, j, n;
  while(scanf("%d", &n) != EOF) {
    ans = 0;
    for(i = 0; i * n < 600; ++i) ans += n * i * i * n * n;
    printf("%d\n", ans);
  }
  return 0;
}
