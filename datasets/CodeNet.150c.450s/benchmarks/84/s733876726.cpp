#include<stdio.h>

#define MAX 200000
#define SENTINEL 2000000000
typedef long long llong;

int L[MAX / 2 + 2], R[MAX / 2 + 2];

llong merge(int A[], int n, int left, int mid, int right) {
  int n1, n2;
  llong cnt = 0;
  n1 = mid - left;
  n2 = right - mid;

  for ( int i = 0; i < n1; i++ ) L[i] = A[left + i];
  for ( int i = 0; i < n2; i++ ) R[i] = A[mid + i];

  L[n1] = R[n2] = SENTINEL;
  int i = 0, j = 0;
  for ( int k = left; k < right; k++ ) {
    if ( L[i] <= R[j] ) {
      A[k] = L[i++];
    } else {
      A[k] = R[j++];
      cnt += n1 - i;
    }
  }
  return cnt;
}

llong mergeSort(int A[], int n, int left, int right) {
  llong v1, v2, v3;
  if ( left + 1 < right ) {
    int mid = (left + right) / 2;
    v1 = mergeSort(A, n, left, mid);
    v2 = mergeSort(A, n, mid, right);
    v3 = merge(A, n, left, mid, right);
    return v1 + v2 + v3;
  } else return 0;
}

int main() {
  int A[MAX], n, i;

  scanf("%d", &n);
  for ( i = 0; i < n; i++ ) scanf("%d", &A[i]);

  llong ans = mergeSort(A, n, 0, n);
  printf("%llu\n", ans);
  return 0;
}