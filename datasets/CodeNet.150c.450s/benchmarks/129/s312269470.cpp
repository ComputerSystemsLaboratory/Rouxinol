#include <stdio.h>
int main(void) {
  int value[100][100];
  int sum_row[100] = {0}, sum_column[100] = {0};
  int sum = 0;
  int r, c, i, j;

  scanf("%d %d", &r, &c);

  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++) {
      scanf("%d", &value[i][j]);
      sum += value [i][j];
    }
  }

  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++) {
      sum_row[i] += value[i][j];
      sum_column[j] += value[i][j];
    }
  }

  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++) {
      printf("%d ", value[i][j]);
    }
    printf("%d\n", sum_row[i]);
  }

  printf("%d", sum_column[0]);
  for (j = 1; j < c; j++)
    printf(" %d", sum_column[j]);
  printf(" %d\n", sum);

  return 0;
}