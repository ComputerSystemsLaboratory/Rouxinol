#include <climits>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>


typedef std::vector<int> TList;
long long int c;
void merge(TList& A, int left, int mid, int right)
{
  int n1 = mid - left;
  int n2 = right - mid;
  TList L(A.begin() + left, A.begin() + left + n1);
  L.push_back(INT_MAX);

  TList R(n2+1);
  for(int i = 0; i < n2; ++i){
    R[i] = A[mid + i];
  }
  R[n2] = INT_MAX;
  
  int i = 0;
  int j = 0;
  for(int k = left; k < right; ++k){
    if(L[i] <= R[j]){
      A[k] = L[i];
      i = i + 1;
    }
    else{ 
      A[k] = R[j];
      j = j + 1;
      c += L.size() - 1 - i;
    }
  }
}

void mergeSort(TList& A, int left, int right)
{
  if(left+1 < right){
    int mid = (left + right)/2;
    mergeSort(A, left, mid);
    mergeSort(A, mid, right);   
    merge(A, left, mid, right);
  }
}

int main()
{
    int n;
    std::cin >> n;
    TList A(n);
    for(std::size_t i = 0; i < n; ++i){
        std::cin >> A[i];
    }
    c = 0;
    mergeSort(A, 0, n);
    std::cout << c << std::endl;
}