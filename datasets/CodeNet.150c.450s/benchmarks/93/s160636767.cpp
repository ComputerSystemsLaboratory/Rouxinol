#include<stdio.h>
#include<string.h>

#define LIM 100000
#define SENTINEL 1000000000

struct Card {
  char s[2];
  int v;
};

int partition(Card A[], int left, int right) {
  int m = right - 1;
  int j = left;
  for ( int i = left; i < m; i++ ) {
    if ( A[i].v <= A[m].v ) {
      Card t = A[j]; A[j] = A[i]; A[i] = t;
      j++;
    }
  }
  Card t = A[j]; A[j] = A[m]; A[m] = t;
  return j++;
}

void quickSort(Card A[], int left, int right) {
  int m = partition(A, left, right);
  if ( left < m ) {
    quickSort(A, left, m);
    quickSort(A, m, right);
  }
}

void merge(Card A[], int left, int middle, int right) {
  int l = middle - left;
  int r = right - middle;
  Card L[l], R[r];
  for ( int i = 0; i < l; i++ ) L[i] = A[left + i];
  for ( int i = 0; i < r; i++ ) R[i] = A[middle + i];
  L[l].v = R[r].v = SENTINEL;
  l = r = 0;

  for ( int i = left; i < right; i++ ) {
    if (L[l].v <= R[r].v) A[i] = L[l++];
    else A[i] = R[r++];
  }
}

void mergeSort(Card A[], int left, int right) {
  if ( left + 1 < right ) {
    int m = (left + right) / 2;
    mergeSort(A, left, m);
    mergeSort(A, m, right);
    merge(A, left, m, right);
  }
}

int main() {
  Card A[LIM], B[LIM];
  int n;

  scanf("%d", &n);
  for ( int i = 0; i < n; i++ ) {
    scanf("%s %d", A[i].s, &A[i].v);
    B[i] = A[i];
  }
  
  quickSort(A, 0, n);
  mergeSort(B, 0, n);

  int j = 0;
  while ( strcmp(A[j].s, B[j].s) == 0 && j < n ) j++;

  if ( j == n ) printf("Stable\n");
  else printf("Not stable\n");

  for ( int i = 0; i < n; i++ ) {
    printf("%s %d\n", A[i].s, A[i].v);
  }

  return 0;
}
