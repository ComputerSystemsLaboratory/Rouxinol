#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;

struct Card { char suit[2]; int value; };

#define INFTY 2000000000

void merge(Card A[], int left, int mid, int right) {
  int n1 = mid - left;
  int n2 = right - mid;
  Card L[n1+1], R[n2+1];
  for (int i = 0; i < n1; i++) L[i] = A[left + i];
  for (int i = 0; i < n2; i++) R[i] = A[mid + i];
  L[n1].value = INFTY;
  R[n2].value = INFTY;
  int i = 0, j = 0;
  for (int k = left; k < right; k++) {
    if (L[i].value <= R[j].value) {
      A[k] = L[i];
      i++;
    } else {
      A[k] = R[j];
      j++;
    }
  }
}

void mergeSort(Card A[], int left, int right) {
  if (left+1 < right) {
    int mid = (left + right)/2;
    mergeSort(A, left, mid);
    mergeSort(A, mid, right);
    merge(A, left, mid, right);
  }
}

int partition(Card A[], int p, int r) {
  int x = A[r].value;
  int i = p-1;
  for (int j = p; j < r; j++) {
    if (A[j].value <= x) {
      i = i+1;
      swap(A[i], A[j]);
    }
  }
  swap(A[i+1], A[r]);
  return i+1;
}

void quickSort(Card A[], int p, int r) {
  if (p < r) {
    int q = partition(A, p, r);
    quickSort(A, p, q-1);
    quickSort(A, q+1, r);
  }
}

int main() {
	int n;
  scanf("%d", &n);
  Card A[n], B[n];
  for ( int i = 0; i < n; i++ ) scanf("%s %d", &A[i].suit, &A[i].value);
  for ( int i = 0; i < n; i++ ) B[i] = A[i];

  quickSort(A, 0, n-1);
  mergeSort(B, 0, n);
  bool b = true;
  for ( int i = 0; i < n; i++ ) {
    if (strcmp(A[i].suit, B[i].suit) != 0) b = false;
  }
  if (b) {
    printf("Stable\n");
  } else {
    printf("Not stable\n");
  }
  for ( int i = 0; i < n; i++ ) printf("%s %d\n", A[i].suit, A[i].value);

  return 0;
}

