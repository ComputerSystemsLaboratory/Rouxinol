#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

#define MAX_N 500000
#define INF 1000000001

void print_array(int A[], int n) {
  for(int i=0; i<n; i++) {
    printf("%d", A[i]);
    if(i != n-1) {
      printf(" ");
    }
  }
  printf("\n");
}

int merge(int A[], int left, int mid, int right) {
  int n1 = mid - left;
  int n2 = right - mid;
  int* L = (int*)malloc((n1+1) * sizeof(int));
  int* R = (int*)malloc((n2+1) * sizeof(int));
  for(int i=0; i<n1; i++) {
    L[i] = A[left+i];
  }
  for(int i=0; i<n2; i++) {
    R[i] = A[mid+i];
  }
  L[n1] = INF;
  R[n2] = INF;

  int li = 0;
  int ri = 0;
  for(int i=left; i<right; i++) {
    if(L[li] <= R[ri]) {
      A[i] = L[li];
      li++;
    } else {
      A[i] = R[ri];
      ri++;
    }
  }

  free(L);
  free(R);
  return li+ri;
}


int mergeSort(int A[], int left, int right) {
  if(left+1 < right) {
    int mid = (left + right) / 2;
    int x1 = mergeSort(A, left, mid);
    int x2 = mergeSort(A, mid, right);
    int x3 = merge(A, left, mid, right);
    return x1 + x2 + x3;
  }
  return 0;
}

int main() {
  int n;
  int A[MAX_N];
  cin >> n;
  for(int i=0; i<n; i++) {
    cin >> A[i];
  }

  int cmpNum = mergeSort(A, 0, n);
  print_array(A, n);
  printf("%d\n", cmpNum);
}