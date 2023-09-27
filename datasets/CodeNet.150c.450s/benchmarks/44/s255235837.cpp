#include <stdio.h>

int main(void) {
  int n, i, j, k, a[4], b[4];
  while(scanf("%d", &a[0]) != EOF) {
    for(i = 1; i < 4; ++i) scanf("%d", &a[i]);
    for(i = 0; i < 4; ++i) scanf("%d", &b[i]);
    int h = 0, bl = 0, flag[10];
    for(i = 0; i < 10; ++i) flag[i] = 0;
    for(i = 0; i < 4; ++i) {
      if(a[i] == b[i]) h++;
      else flag[a[i]] = 1;
    }
    for(i = 0; i < 4; ++i) if(flag[b[i]]) ++bl;
    printf("%d %d\n", h, bl);
  }
  return 0;
}
