#include<stdio.h>

#define LIM 500000
#define HALF LIM / 2
#define MAX 1000000000
int n, A[LIM], sum = 0;

void print(int A[]) {
  for ( int i = 0; i < n; i++ ) {
    if (i) printf(" ");
    printf("%d", A[i]);
  }
  printf("\n");
}

void merge(int A[], int left, int mid, int right) {
  int l = mid - left;
  int r = right - mid;

  int L[l], R[r];
  for ( int i = 0; i < l; i++ ) L[i] = A[left + i];
  for ( int i = 0; i < r; i++ ) R[i] = A[mid + i];
  L[l] = MAX;
  R[r] = MAX;

  l = 0; r = 0;
  for (int i = left; i < right; i++ ) {
    if ( L[l] <= R[r] ) {
      A[i] = L[l];
      l++;
    } else if (R[r] < L[l]) {
      A[i] = R[r];
      r++;
    }
    sum++;
  }
}

void mergeSort(int A[], int left, int right) {
  if (left + 1 < right) {
    int mid = (left + right) / 2;
    mergeSort(A, left, mid);
    mergeSort(A, mid, right);
    merge(A, left, mid, right);
  }
}
int main() {
  scanf("%d", &n);
  for ( int i = 0; i < n; i++ ) scanf("%d", &A[i]);

  mergeSort(A, 0, n);

  print(A);

  printf("%d\n", sum);
  return 0;
}

