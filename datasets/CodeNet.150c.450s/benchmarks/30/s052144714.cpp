#include <stdio.h>
#include <stdbool.h>

#define MAX 100

int main() {
  int n;
  int A[MAX];
  int tmp;
  int minj;
  int swap_num = 0;
  bool needSwap = false;

  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    scanf("%d", &A[i]);
    if(n < 1 && n > 100) {
      printf("Error: out of range.");
        return -1;
    }
  }

  if(n > 1) {
    // find the minimum number
    for(int i = 0; i < n; i++) {
      minj = i;
      for(int j = i; j < n; j++) {
        if(A[j] < A[minj]) {
          needSwap = true;
          minj = j;
        }
      }
      if(needSwap) {
        tmp = A[i];
        A[i] = A[minj];
        A[minj] = tmp;
        swap_num++;
      }
      needSwap = false;
    }
  }

  printf("%d", A[0]);
  for(int i = 1; i < n; i++) {
    printf(" %d", A[i]);
  }
  printf("\n%d\n", swap_num);
}