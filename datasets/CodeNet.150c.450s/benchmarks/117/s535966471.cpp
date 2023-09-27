#include <iostream>
#include <stdio.h>
using namespace std;

#define MAX 500000
#define SENTINEL 2000000000

int L[MAX/2 + 2], R[MAX/2 + 2];
int cnt;

void Merge(int A[], int n, int left, int mid, int right){
  int n1 = mid - left;
  int n2 = right - mid;

  for(int i = 0; i < n1; i++) L[i] = A[left + i];
  for(int i = 0; i < n2; i++) R[i] = A[mid + i];
  L[n1] = R[n2] = SENTINEL;
  int i = 0;
  int j = 0;
  for(int k = left; k < right; k++){
    cnt++;
    if (L[i] <= R[j]) {
      A[k] = L[i];
      i++;
    }else{
      A[k] = R[j];
      j++;
    }
  }
}

void MergeSort(int A[], int n, int left, int right){
  if (left + 1 < right) {
    int mid = (left + right) / 2;
    MergeSort(A, n, left, mid);
    MergeSort(A, n, mid, right);
    Merge(A, n, left, mid, right);
  }
}


int main(int argc, char const *argv[]) {
  int A[MAX];
  int n;
  cnt = 0;

  scanf("%d", &n);
  for(int i = 0; i < n; i++)  scanf("%d", &A[i]);

  MergeSort(A, n, 0, n);

  for(int i = 0; i < n; i++){
    if (i) {
      printf(" ");
    }
    printf("%d", A[i]);
  }
  cout << endl;
  cout << cnt << endl;

  return 0;
}