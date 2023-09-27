#include<stdio.h>
#include<algorithm>
using namespace std;

int count = 0;

int partition(int A[], int p, int r) {
  int x = A[r];
  int i = p-1;
  for (int j = p; j < r; j++) {
    if (A[j] <= x) {
      i = i+1;
      swap(A[i], A[j]);
    }
  }
  swap(A[i+1], A[r]);
  return i+1;
}

int main() {
	int n;
  scanf("%d", &n);
  int A[n];
  for ( int i = 0; i < n; i++ ) scanf("%d", &A[i]);
  int c = partition(A, 0, n-1);
  for ( int i = 0; i < c; i++ ) printf("%d ", A[i]);
  if (c != n-1) {
    printf("[%d] ", A[c]);
  } else {
    printf("[%d]", A[c]);
  }
  for ( int i = c+1; i < n-1; i++ ) printf("%d ", A[i]);
  printf("%d\n", A[n-1]);

  return 0;
}

