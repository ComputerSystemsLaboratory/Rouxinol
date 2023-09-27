#include <stdio.h>
#include <limits.h>

#define MAX 500000

long cnt = 0;
long L[MAX / 2 + 1], R[MAX / 2 + 1];
//分割
void merge(long A[], long left, long mid, long right) {
  long i, j, k;
  long n1 = mid - left;
  long n2 = right - mid;
  for (i = 0; i < n1; i++) {
    L[i] = A[left + i];
  }
  L[n1] = LONG_MAX;
  for (i = 0; i < n2; i++) {
    R[i] = A[mid + i];
  }
  R[n2] = LONG_MAX;

  i = 0;  j = 0;

  for (k = left; k < right; k++) {
    if (L[i] <= R[j]) {
      A[k] = L[i];
      i++;
      cnt++;
    } else {
      A[k] = R[j];
      j++;
      cnt++;
    }
  }
}

//統合
void mergeSort(long A[], long left, long right) {
  int mid;
  if (left + 1 < right) {
    mid = (left + right) / 2;
    mergeSort(A, left, mid);
    mergeSort(A, mid, right);
    merge(A, left, mid, right);
  }
}

int main(void) {
  long A[MAX];
  long i, n;

  scanf("%ld", &n);

  for (i = 0; i < n; i++) {
    scanf("%ld", &A[i]);
  }

  mergeSort(A, 0, n);

  printf("%ld", A[0]);
  for(i = 1; i < n; i++)
    printf(" %ld", A[i]);
  printf("\n%ld\n", cnt);

  return 0;
}