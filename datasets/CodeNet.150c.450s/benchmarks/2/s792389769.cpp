#include <iostream>
#include <vector>

int partition(std::vector<int>& A, int p, int r)
{
  int x = A[r];
  int i = p - 1;
  for(int j = p; j < r; ++j){
    if(A[j] <= x){
      i = i + 1;
      std::swap(A[i],A[j]);
    }
  }
  std::swap(A[i+1],A[r]);
  return i+1;
}

int main()
{
  int n;
  std::cin >> n;
  std::vector<int> A(n);
  for(int i = 0; i < n; ++i){
    std::cin >> A[i];
  }
  int q = partition(A, 0, n-1);
  for(int i = 0; i < n; ++i){
    if(i) std::cout << " ";
    if(i == q) std::cout << "[" << A[i] << "]";
    if(i != q) std::cout << A[i];
  }
  std::cout << std::endl;
  
  return 0;
}