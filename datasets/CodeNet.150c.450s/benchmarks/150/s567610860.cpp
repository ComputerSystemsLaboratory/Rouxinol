#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

#define MAX_NUM 2000000
#define MAX_VALUE 10000

void print_array(int A[], int n) {
  for(int i=0; i<n; i++) {
    printf("%d", A[i]);
    if(i != n-1) {
      printf(" ");
    }
  }
}

void counting_sort(int A[], int B[], int n) {
  int cnt[MAX_VALUE];
  for(int i=0; i<MAX_VALUE; i++) {
    cnt[i] = 0;
  }

  for(int i=0; i<n; i++) {
    cnt[A[i]]++;
  }

  for(int i=1; i<MAX_VALUE; i++) {
    cnt[i] = cnt[i] + cnt[i-1];
  }

  for(int i=n-1; i>-1; i--) {
    B[cnt[A[i]]-1] = A[i];
    cnt[A[i]]--;
  }
}

int main() {
  int n;
  int* A = (int*)malloc(sizeof(int) * MAX_NUM);
  int* B = (int*)malloc(sizeof(int) * MAX_NUM);
  cin >> n;
  for(int i=0; i<n; i++) {
    cin >> A[i];
  }

  counting_sort(A, B, n);

  print_array(B, n);
  printf("\n");

  return 0;
}