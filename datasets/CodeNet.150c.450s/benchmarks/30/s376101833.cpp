#include<iostream>
#include<cstdio>
using std::swap;

int selectionSort(int A[], int N){
  int sw = 0;
  for (size_t i = 0; i < N-1; i++) {
    int minj = i;
    for (size_t j = i+1; j < N; j++) {
      if (A[minj] > A[j]) {
        minj = j;
      }
    }
    swap(A[i],A[minj]);
    if (minj != i) {
      sw++;
    }
  }
  return sw;
}

int main() {
  int n; // a number of scores
  scanf("%d", &n);

  int arr[100];

  for (size_t i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int ans = selectionSort(arr, n);
  for (size_t k = 0; k < n; k++) {
      printf("%d%c",arr[k],(k==n-1)? '\n':' ');
  }
  printf("%d\n", ans);
  return 0;
}