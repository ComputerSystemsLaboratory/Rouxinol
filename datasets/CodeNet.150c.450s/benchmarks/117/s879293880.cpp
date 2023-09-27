#include<stdio.h>

#define INFTY 2000000000

int count = 0;

void merge(int A[], int left, int mid, int right) {
  int n1 = mid - left;
  int n2 = right - mid;
  int L[n1+1], R[n2+1];
  for (int i = 0; i < n1; i++) L[i] = A[left + i];
  for (int i = 0; i < n2; i++) R[i] = A[mid + i];
  L[n1] = INFTY;
  R[n2] = INFTY;
  int i = 0, j = 0;
  for (int k = left; k < right; k++) {
    count++;
    if (L[i] <= R[j]) {
      A[k] = L[i];
      i++;
    } else {
      A[k] = R[j];
      j++;
    }
  }
}

void mergeSort(int A[], int left, int right) {
  if (left+1 < right) {
    int mid = (left + right)/2;
    mergeSort(A, left, mid);
    mergeSort(A, mid, right);
    merge(A, left, mid, right);
  }
}

int main() {
	int n;
  scanf("%d", &n);
  int S[n];
  for ( int i = 0; i < n; i++ ) scanf("%d", &S[i]);
  mergeSort(S, 0, n);
  for ( int i = 0; i < n-1; i++ ) printf("%d ", S[i]);
  printf("%d\n", S[n-1]);
  printf("%d\n", count);

  return 0;
}

