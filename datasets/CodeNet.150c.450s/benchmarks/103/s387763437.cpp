#include <stdio.h>

int now = 0, n, s, ans, be;

int saiki(int a) {
  if(now > s) return 0;
  if(a == n) {
    if(s - now < 10 && s - now > be) ++ans;
    return 0;
  }
  int i, t = be + 1;
  for(i = t; i < 10; ++i) {
    now += i, be = i;
    saiki(a + 1);
    now -= i, be = t - 1;
  }
  return 0;
}

int main(void) {
  int i, j, k;
  while( 1 ) {
    now = 0, ans = 0, be = -1;
    scanf("%d%d", &n, &s);
    if(!n && !s) break;
    saiki(1);
    printf("%d\n", ans);
  }
  return 0;
}
