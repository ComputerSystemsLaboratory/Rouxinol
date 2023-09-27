#include<stdio.h>

#define LIM 500000
#define SENTINEL 1000000001
int cnt = 0;

void merge(int A[], int left, int mid, int right) {
  int l = mid - left;
  int r = right - mid;
  int L[l], R[r];

  for ( int i = 0; i < l; i++ ) L[i] = A[left + i];
  for ( int i = 0; i < r; i++ ) R[i] = A[mid + i];
  L[l] = R[r] = SENTINEL;

  l = r = 0;
  for ( int i = left; i < right; i++ ) {
    if (L[l] <= R[r]) {
      A[i] = L[l];
      l++;
    } else {
      A[i] = R[r];
      r++;
    }
    cnt++;
  }
}

void mergeSort(int A[], int left, int right) {
  if ( left + 1 < right ) {
    int mid = (left + right) / 2;
    mergeSort(A, left, mid);
    mergeSort(A, mid, right);
    merge(A, left, mid, right);
  }
}

int main() {
  int n, A[LIM];

  scanf("%d", &n);
  for ( int i = 0; i < n; i++ ) scanf("%d", &A[i]);

  mergeSort(A, 0, n);

  for ( int i = 0; i < n; i++ ) {
    if (i) printf(" ");
    printf("%d", A[i]);
  }

  printf("\n");

  printf("%d\n", cnt);

  return 0;
}

