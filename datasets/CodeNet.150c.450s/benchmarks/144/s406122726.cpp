#include <cstdio>
#include <cstdlib>

void
read_matrix(long* mat, int h, int w)
{
  int i, j;
  for (i = 0; i < h; i++) {
    for (j = 0; j < w; j++) {
      std::scanf("%ld", &mat[i * w + j]);
    }
  }
  return;
}

void
print_matrix(long* mat, int h, int w)
{
  int i, j;
  for (i = 0; i < h; i++) {
    for (j = 0; j < w; j++) {
      if (j == 0) {
        std::printf("%ld", mat[i * w + j]);
      } else {
        std::printf(" %ld", mat[i * w + j]);
      }
    }
    std::printf("\n");
  }
  return;
}

int
main(void)
{
  int n, m, l, i, j, k;
  long *A, *B, *C;
  
  std::scanf("%d %d %d", &n, &m, &l);

  A = (long*)std::malloc(sizeof(long) * n * m);
  B = (long*)std::malloc(sizeof(long) * m * l);
  C = (long*)std::malloc(sizeof(long) * n * l);

  read_matrix(A, n, m);
  read_matrix(B, m, l);
  
  for (i = 0; i < n; i++) {
    for (j = 0; j < l; j++) {
      C[i * l + j] = 0;
      for (k = 0; k < m; k++) {
        C[i * l + j] += A[i * m + k] * B[k * l + j];
      }
    }
  }

  print_matrix(C, n, l);

  return 0;
}

