#include <stdio.h>
int main(int argc, char const *argv[]) {
  int current[4][3][10] = {0};
  int i, j, k, n;
  int b, f, r, v;

  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    scanf("%d %d %d %d", &b, &f, &r, &v);
    current[b - 1][f - 1][r - 1] += v;
  }

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 10; j++) {
      printf(" %d", current[0][i][j]);
    }
    puts("");
  }

  for (i = 1; i < 4; i++) {
    for (j = 0; j < 20; j++) {
      printf("#");
    }
    puts("");
    for (j = 0; j < 3; j++) {
      for (k = 0; k < 10; k++) {
        printf(" %d", current[i][j][k]);
      }
      puts("");
    }
  }

  return 0;
}