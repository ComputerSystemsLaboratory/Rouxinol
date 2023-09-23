#include <stdio.h>

#define MAX 1000

int main() {
  int n;
  int A[MAX];
  int v;
  int j;

  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    scanf("%d", &A[i]);
    if(n < 1 && n > 100) {
      printf("Error: out of range.");
      return -1;
    }
  }

  /* for(int i = 0; i < n; i++) { */
  /*   printf("%d", A[i]); */
  /* } */

  for(int i = 1; i < n; i++) {
    printf("%d", A[0]);
    for(int i = 1; i < n; i++) {
      printf(" %d", A[i]);
    }
    printf("\n");
    v = A[i];
    j = i - 1;
    while (j >= 0 && A[j] >= v) {
      A[j + 1] = A[j];
      A[j] = v;
      j--;
    }
  }
  printf("%d", A[0]);
  for(int i = 1; i < n; i++) {
    printf(" %d", A[i]);
  }
  printf("\n");
}