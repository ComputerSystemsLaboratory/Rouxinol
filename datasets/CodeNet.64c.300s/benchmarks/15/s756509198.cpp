#include <bits/stdc++.h>

void print_array(int A[], int N) {
  for(int i = 0; i < N-1; ++i) {
    std::cout << A[i] << " ";
  }
  std::cout << A[N-1] << std::endl;
  return;
}

int count;

void selectionSort(int A[], int N) {
  for(int i = 0; i < N; ++i) {
    int minj = i;
    for(int j = i; j < N; ++j) {
      if( A[j] < A[minj] ) {
        minj = j;
      }
    }
    if( A[i] != A[minj] ) {
      std::swap(A[i], A[minj]);
      count += 1;
    }
  }
  return;
}


int main(void) {

  int N;
  int A[128];

  std::cin >> N;
  for(int i = 0; i < N; ++i) {
    std::cin >> A[i];
  }

  selectionSort(A, N);
  print_array(A, N);
  std::cout << count << std::endl;
  
  return 0;
}