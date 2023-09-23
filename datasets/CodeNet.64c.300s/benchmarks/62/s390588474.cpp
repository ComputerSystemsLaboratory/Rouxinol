#include <stdio.h>
int main(void) {
  int A[100][100] = {0}, B[100] = {0}, C[100] = {0};
  int i, j, n, m;

  scanf("%d %d", &n, &m);

  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      scanf("%d", &A[i][j]);
    }
  }

  for (i = 0; i < m; i++)
    scanf("%d", &B[i]);

  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      C[i] += A[i][j] * B[j];
    }
  }

  for (i = 0; i < n; i++)
    printf("%d\n", C[i]);

  return 0;
}