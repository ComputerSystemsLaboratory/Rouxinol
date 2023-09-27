#include <stdio.h>
#define MAX 200
int main(void) {
  long A[MAX][MAX ] = {0}, B[MAX][MAX] = {0}, C[MAX][MAX] = {0};
  int n, m, l;
  int i, j, k;

  scanf("%d %d %d", &n, &m, &l);

  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      scanf("%ld", &A[i][j]);
    }
  }

  for (j = 0; j < m; j++) {
    for (k = 0; k < l; k++) {
      scanf("%ld", &B[j][k]);
    }
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      for (k = 0; k < l; k++) {
        C[i][k] += A[i][j] * B[j][k];
      }
    }
  }

  for (i = 0; i < n; i++) {
    printf("%ld", C[i][0]);
    for (k = 1; k < l; k++) {
      printf(" %ld", C[i][k]);
    }
    puts("");
  }
  return 0;
}