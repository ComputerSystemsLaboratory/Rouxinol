#include <iostream>
#include <stdio.h>
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

void counting_sort(int A[], int n) {
  int cnt[MAX_VALUE];
  for(int i=0; i<MAX_VALUE; i++) {
    cnt[i] = 0;
  }

  for(int i=0; i<n; i++) {
    cnt[A[i]]++;
  }

  int ptr=0;
  for(int i=0; i<MAX_VALUE; i++) {
    if(cnt[i] != 0) {
      for(int j=0; j<cnt[i]; j++) {
        A[ptr] = i;
        ptr++;
      }
    }
  }
}

int main() {
  int n;
  int A[MAX_NUM];
  cin >> n;
  for(int i=0; i<n; i++) {
    cin >> A[i];
  }

  counting_sort(A, n);

  print_array(A, n);
  printf("\n");

  return 0;
}