#include<stdio.h>
#include<algorithm>
using namespace std;

#define k 10000

void CountingSort(int A[], int B[], int n) {
  int C[k+1];
  for (int i = 0; i <= k; i++) {
    C[i] = 0;
  }
  for (int i = 0; i < n; i++) {
    C[A[i]]++;
  }
  for (int i = 1; i <= k; i++) {
    C[i] = C[i] + C[i-1];
  }
  for (int i = n-1; i >= 0; i--) {
    B[C[A[i]]-1] = A[i];
    C[A[i]]--;
  }
}

int main() {
	int n;
  scanf("%d", &n);
  int A[n], B[n];
  for ( int i = 0; i < n; i++ ) scanf("%d", &A[i]);
  CountingSort(A, B, n);
  for ( int i = 0; i < n-1; i++ ) printf("%d ", B[i]);
  printf("%d\n", B[n-1]);

  return 0;
}

