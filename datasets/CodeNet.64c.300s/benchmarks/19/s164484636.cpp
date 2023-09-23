#include <stdio.h>

int main(void) {
  while( 1 ) {
  long long n, ans = 0, now = 0, i;
  scanf("%lld", &n);
  if(!n) break;
  int a[n];
  for(i = 0; i < n; ++i) scanf("%d", &a[i]);
  for(i = 0; i < n; ++i) {
    now += a[i];
    if(now > ans) ans = now;
    if(now < 0) now = 0;
  }
  if(!ans) {
    int max = -1000000;
    for(i = 0; i < n; ++i) if(max < a[i]) max = a[i];
    ans = max;
  }
  printf("%lld\n", ans);
  }
  return 0;
}
