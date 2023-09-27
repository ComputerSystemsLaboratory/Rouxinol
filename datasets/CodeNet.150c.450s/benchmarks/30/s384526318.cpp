#include<iostream>

int selection_sort(int A[], int N) {
  int i, j, tmp, sw = 0, min_i;
  for (i = 0; i < N-1; i++) {
    min_i = i;
    for (j = i+1; j < N; j++) {
      if (A[j] < A[min_i]) min_i = j;
    }
    tmp = A[i];
    A[i] = A[min_i];
    A[min_i] = tmp;
    if (i != min_i) sw++;
  }
  return sw;
}

int main() {
  int A[100], i, N, sw;

  std::cin >> N;
  for (i = 0; i < N; i++) std::cin >> A[i];

  sw = selection_sort(A, N);
  
  for (i = 0; i < N; i++) {
    if (i > 0) std::cout << ' ';
    std::cout << A[i];
  }
  std::cout << std::endl;
  std::cout << sw << std::endl;

  return 0;
}
