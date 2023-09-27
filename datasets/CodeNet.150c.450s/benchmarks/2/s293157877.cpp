#include <iostream>

using namespace std;

int partition (int *A, int n) {

  int base = A[n-1];

  int baseIndex = 0;

  for (int i = 0; i < n; i++) {

    if (A[i] <= base) {
      if (baseIndex != i) {
        int origin = A[i];
        A[i] = A[baseIndex];
        A[baseIndex] = origin;
      }
      baseIndex++;
    }

  }

  return baseIndex-1;

}

int main () {

  int n;
  scanf("%d", &n);

  int A[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &A[i]);
  }

  int baseIndex = partition(A, n);

  for(int i = 0; i < n; i++) {
    if (i != 0) {
      printf(" ");
    }
    if (i == baseIndex) {
      printf("[%d]", A[i]);
    } else {
      printf("%d", A[i]);
    }
  }

  printf("\n");

}