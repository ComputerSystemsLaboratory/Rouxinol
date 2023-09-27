#include <bits/stdc++.h>

void input_vector(std::vector<int>& v) {
  int N;
  int temp;
  std::cin >> N;
  for(int i = 0; i < N; ++i) {
    std::cin >> temp;
    v.push_back(temp);
  }
}

void print_vector(std::vector<int> v) {
  for(int i = 0; i < v.size()-1; ++i) {
    std::cout << v[i] << " ";
  }
  std::cout << v[v.size()-1] << std::endl;
}

void bubbleSort(std::vector<int>& A) {
  int count = 0;
  for(int i = 0; i < A.size(); ++i) {
    for(int j = 1; j < A.size()-i; ++j) {
      if( A[j-1] > A[j] ) {
	std::swap(A[j-1], A[j]);
	count += 1;
      }
    }
  }
  print_vector(A);
  std::cout << count << std::endl;
}

int main() {

  std::vector<int> A;

  input_vector(A);
  bubbleSort(A);

  return 0;
}