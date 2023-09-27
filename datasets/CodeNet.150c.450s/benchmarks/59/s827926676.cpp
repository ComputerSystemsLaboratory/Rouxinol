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

void insertionSort(std::vector<int>& A) {
  int v;
  print_vector(A);
  for(int i = 1; i < A.size(); ++i) {
    v = A[i];
    for(int j = i - 1; j >= 0; --j) {
      if( A[j] < v ) {
	break;
      }
      std::swap(A[j+1], A[j]);
    }
    print_vector(A);
  }
}

int main() {

  std::vector<int> A;

  input_vector(A);
  insertionSort(A);
  
  return 0;
}