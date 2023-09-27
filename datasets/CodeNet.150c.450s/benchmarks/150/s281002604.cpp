#include<iostream>
int n;
void CountingSort(int*, int*, int);
int main(){
  int i, k=10000;
  std::cin >> n;
  int A[n], B[n];
  for(i=0; i<n; i++) std::cin >> A[i];
  CountingSort(A, B, k);
  for(i=0; i<n; i++) std::cout << B[i] << (i!=n-1 ? " " : "\n");
  return 0;
}
void CountingSort(int* A, int* B, int k){
  int i, j, C[k+1];
  for(i=0; i<=k; i++) C[i] = 0;
  for(j=0; j<n; j++) C[A[j]]++;
  for(i=1; i<=k; i++) C[i]= C[i] + C[i-1];
  for(j=n-1; j>=0; j--) B[C[A[j]]-1] = A[j], C[A[j]]--;
}