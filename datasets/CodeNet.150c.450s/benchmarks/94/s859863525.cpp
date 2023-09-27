#include <stdio.h>
#include <stdbool.h>

#define MAX 100

int main() {
  int n;
  int A[MAX];
  int tmp;
  int swap_num = 0;
  bool flag = true;

  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    scanf("%d", &A[i]);
    if(n < 1 && n > 100) {
      printf("Error: out of range.");
        return -1;
    }
  }

  while(flag == true) {
    flag = false;
    for(int i = n - 1; i > 0; i--) {
      if(A[i] < A[i - 1]) {
        tmp = A[i];
        A[i] = A[i - 1];
        A[i - 1] = tmp;
        swap_num += 1;
        flag = true;
      }
    }
    /* printf("%d", A[0]); */
    /* for(int i = 1; i < n; i++) { */
    /*   printf(" %d", A[i]); */
    /* } */
    /* printf("\n"); */
  }

  printf("%d", A[0]);
  for(int i = 1; i < n; i++) {
    printf(" %d", A[i]);
  }
  printf("\n");
  printf("%d\n", swap_num);
}