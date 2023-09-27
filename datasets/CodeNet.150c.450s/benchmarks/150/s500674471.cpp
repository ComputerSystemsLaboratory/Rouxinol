#include <iostream>

void CountingSort(int *A, int * B, int k, int n){
  int C[k+1];
  for(int i=0; i<=k; i++) C[i]=0;
  for(int j=0; j<n; j++) C[A[j]]++;
  for(int i=0; i<k; i++) C[i + 1] += C[i];
  for(int j=n-1; j>=0; j--){
    B[--C[A[j]]] = A[j];
  }
}

int main(){
  int n;
  std::cin >> n;

  int k;
  int A[n], B[n];
  for(int i=0; i<n; i++){
    std::cin >> A[i];
    k = std::max(k,A[i]);
  }
  CountingSort(A, B, k, n);
  for(int i=0; i<n; i++){
    std::cout << B[i];
    if(i != n-1) std::cout << " ";
  }
  std::cout << std::endl;
  return 0;
}

