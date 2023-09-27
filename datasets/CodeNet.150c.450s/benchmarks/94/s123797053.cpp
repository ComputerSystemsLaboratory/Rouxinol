#include <bits/stdc++.h>

void print_array(int A[], int N) {
  for(int i = 0; i < N-1; ++i) {
    std::cout << A[i] << " ";
  }
  std::cout << A[N-1] << std::endl;
  return;
}

int count;

void bubbleSort(int A[], int N) {
  bool flag = true;
  while( flag ) {
    flag = false;
    for(int j = N-1; j >= 1; --j) {
      if( A[j] < A[j-1] ) {
        std::swap(A[j], A[j-1]);
        flag = true;
        count += 1;
      }
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

  bubbleSort(A, N);

  print_array(A, N);
  std::cout << count << std::endl;

  return 0;
}