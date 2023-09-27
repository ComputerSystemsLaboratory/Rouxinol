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

void selectionSort(std::vector<int>& A) {
  int mi = 0;
  int count = 0;
  for(int i = 0; i < A.size(); ++i) {
    mi = i;
    for(int j = i; j < A.size(); ++j) {
      if( A[j] < A[mi] ) {
	mi = j;
      }
    }
    if( i != mi ) {
      std::swap(A[i], A[mi]);
      count += 1;
    }
  }
  print_vector(A);
  std::cout << count << std::endl;
}

int main() {

  std::vector<int> A;

  input_vector(A);
  selectionSort(A);

  return 0;
}