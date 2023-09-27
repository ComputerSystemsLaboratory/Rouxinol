#include <stdio.h>
#define rep(i) for(int i = 0; i < 10; ++i)

int main(void) {
  int n, i, ar[60], b, c, d, e;
  for(i = 1; i < 52; ++i) ar[i] = 0;
  for(i = 1; i < 52; ++i) {
    rep(b) rep(c) rep(d) rep(e) {
      if(b + c + d + e == i)ar[i]++; 
    }
  }
  while(scanf("%d", &n) != EOF) {
    printf("%d\n", ar[n]);
  }
  return 0;
}
