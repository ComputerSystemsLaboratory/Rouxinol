#include <stdio.h>

int main(void) {
  int i, j, k, n, ans[101], max = 0;
  for(i = 0; i < 101; ++i) ans[i] = 0;
  while(scanf("%d", &n) != EOF) {
    ++ans[n];
  }
  for(i = 1; i < 101; ++i) if(max < ans[i]) max = ans[i];
  for(i = 1; i < 101; ++i) if(ans[i] == max) printf("%d\n", i);
  return 0;
}
