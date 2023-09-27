#include <climits> 
#include <iostream>
#include <vector>

typedef std::vector<int> TList;
int c;
void merge(TList& A, int left, int mid, int right)
{
  int n1 = mid - left;
  int n2 = right - mid;
  TList L(n1+1);
  for(int i = 0; i < n1; ++i){
    L[i] = A[left + i];
  }
  L[n1] = INT_MAX;

  TList R(n2+1);
  for(int i = 0; i < n2; ++i){
    R[i] = A[mid + i];
  }
  R[n2] = INT_MAX;
  
  int i = 0;
  int j = 0;
  for(int k = left; k < right; ++k){
    ++c;
    if(L[i] <= R[j]){
      A[k] = L[i];
      i = i + 1;
    }
    else{ 
      A[k] = R[j];
      j = j + 1;
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
  std::vector<int> S(n);
  for(int i = 0; i < n; ++i){
    std::cin >> S[i];
  }
  c = 0;
  mergeSort(S, 0, n);
  for(int i = 0; i < n; ++i){
    if(i) std::cout << " ";
    std::cout << S[i];
  }
  std::cout << std::endl;
  std::cout << c << std::endl;
  return 0;
}