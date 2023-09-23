#include <stdio.h>
#define MAX 100000

long A[MAX];

long partition(long A[], long p, long r) {
  long x = A[--r];
  long i = p - 1, j;
  for (j = p; j < r; j++) {
    if(A[j] <= x) {
      i++;
      int tmp = A[i];
      A[i] = A[j];
      A[j] = tmp;
    }
  }
  int tmp = A[i + 1];
  A[i + 1] = A[r];
  A[r] = tmp;

  return i + 1;
}

int main(void) {
  long i, n, x;

  scanf("%ld", &n);

  for (i = 0; i < n; i++)
    scanf("%ld", &A[i]);

  x = partition(A, 0, n);

  //printf("%ld\n", x);

  printf("%ld", A[0]);
  for (i = 1; i < x; i++)
    printf(" %ld", A[i]);
  printf(" [%ld]", A[x]);
  for(i = x + 1; i < n; i++)
    printf(" %ld", A[i]);
  puts("");

  return 0;
}