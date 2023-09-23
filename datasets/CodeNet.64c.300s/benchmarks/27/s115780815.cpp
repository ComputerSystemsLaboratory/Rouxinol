#include <stdio.h>
int main(void) {
  int n[100000], x[100000], cnt[100000] = {0};
  int i, j, k, l, num;

  num = 0;
  do {
    scanf("%d %d", &n[num], &x[num]);
    num++;
  } while (!(n[num - 1] == 0 && x[num - 1] == 0));

  i = 1;
  j = 2;
  k = 3;
  for (l = 0; l < num; l++) {
    for (i = 1; i < j; i++) {
      for (j = 2; j < k; j++) {
        for (k = 3; k <= n[l]; k++) {
          if (i + j + k == x[l]) {
            if (i < j && j < k) {
              // printf("%d + %d + %d == %d\n", i, j, k, x);
              cnt[l]++;
            }
          }
        }
      }
    }
  }

  for (i = 0; i < num - 1; i++)
    printf("%d\n", cnt[i]);
  return 0;
}