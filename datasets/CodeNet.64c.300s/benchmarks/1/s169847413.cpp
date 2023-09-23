#include <iostream>
#include <stdio.h>

using namespace std;
#define MAX_N 100000

void swap(int* x, int* y) {
  int tmp = *x;
  *x = *y;
  *y = tmp;
}

int partition(int A[], int p, int r) {
  int x = A[r];
  int i = p-1;
  for(int j=p; j<r; j++) {
    if(A[j] <= x) {
      i++;
      swap(&A[i], &A[j]);
    }
  }
  swap(&A[i+1], &A[r]);
  return i+1;
}

int main() {
  int n;
  cin >> n;
  int A[MAX_N];
  for(int i=0; i<n; i++) {
    cin >> A[i];
  }

  int q = partition(A, 0, n-1);
  for(int i=0; i<q; i++) {
    printf("%d", A[i]);
    if(i != q-1) {
      printf(" ");
    }
  }
  printf(" [%d] ", A[q]);

  for(int i=q+1; i<n; i++) {
    printf("%d", A[i]);
    if(i != n-1) {
      printf(" ");
    }
  }
  printf("\n");
}