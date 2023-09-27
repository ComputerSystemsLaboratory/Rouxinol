#include <stdio.h>

int main(void) {
  int a[4], b[4];
  while (scanf("%d %d %d %d\n%d %d %d %d", &a[0], &a[1], &a[2], &a[3], &b[0], &b[1], &b[2], &b[3]) != EOF) {
    int i, j;

    int hit = 0;
    for (i=0; i<4; ++i) {
      if (a[i] == b[i]) {
        ++hit;
      }
    }

    int blow = 0;
    for (i=0; i<10; ++i) {
      int a_count = 0, b_count = 0;
      for (j=0; j<4; ++j) {
        if (a[j] == i) {
          ++a_count;
        }
        if (b[j] == i) {
          ++b_count;
        }
      }
      blow += (a_count < b_count ? a_count : b_count);
    }
    blow -= hit;

    printf("%d %d\n", hit, blow);
  }

  return 0;
}