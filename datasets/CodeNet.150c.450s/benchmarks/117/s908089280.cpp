#include <iostream>

using namespace std;

#define INFY 2000000000;

static int cnt = 0;

void merging (int *A, int left, int mid, int right) {

  int n1 = mid - left;
  int n2 = right - mid;

  int L[n1], R[n2];

  for (int i = 0; i < n1; i++) L[i] = A[left+i];

  for (int i = 0; i < n2; i++) R[i] = A[mid+i];

  L[n1] = R[n2] = INFY;

  int j = 0, i = 0;

  for (int k = left; k < right; k++) {
    cnt++;
    if (L[i] < R[j]) {
      A[k] = L[i];
      i++;
    } else {
      A[k] = R[j];
      j++;
    }
  }

}

void mergeSort (int *A, int left, int right) {

  if (left+1 < right) {
    int mid = (left + right) / 2;
    mergeSort(A, left, mid);
    mergeSort(A, mid, right);
    merging(A, left, mid, right);
  }

}

int main () {

  int n;

  scanf("%d", &n);

  int A[n];

  for (int i = 0; i < n; i++) {
    scanf("%d", &A[i]);
  }

  mergeSort(A, 0, n);

  for(int i = 0; i < n; i++) {
    if (i != 0) {
      printf(" ");
    }
    printf("%d", A[i]);
  }

  printf("\n%d\n", cnt);

}