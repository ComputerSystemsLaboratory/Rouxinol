#include <stdio.h>
int main(void) {
  int i, j, x[100000], y[100000];

  i = 0;
  do {
    scanf("%d %d", &x[i], &y[i]);
    i++;
  } while (!(x[i - 1] == 0 && y[i - 1] == 0));

  for (j = 0; j < i- 1; j++) {
    if (x[j] < y[j]) {
      printf("%d %d\n", x[j], y[j]);
    } else {
      printf("%d %d\n", y[j], x[j]);
    }
  }

  return 0;
}