#include <stdio.h>

int main(void) {
  int i, j, n;
  while( 1 ) {
    int ans = 0, sum = 0;
    scanf("%d", &n);
    if(!n) break;
    for(i = 1; i < n; ++i) {
      sum = i;
      for(j = i + 1; j < n; ++j) {
        sum += j;
        if(sum == n) {
          ans++;
          break;
        } else if(sum > n) break;
      }
    }
    printf("%d\n", ans);
  }
  return 0;
}
