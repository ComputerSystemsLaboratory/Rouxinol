#include<iostream>
int partition(int*, int, int);
int main(){
  int n,tmp;
  std::cin >> n;
  int A[n];
  for(int i=0; i<n; i++) std::cin >> A[i];
  tmp = partition(A, 0, n-1);
  for(int i=0; i<n; i++){
    if(i == tmp) std::cout << "[";
    std::cout << A[i];
    if(i == tmp) std::cout << "]";
    std::cout << (i != n-1 ? " " : "\n");
  }
  return 0;
}

int partition(int *A, int p, int r){
  int x,i,tmp;
  x = A[r];
  i = p - 1;
  for(int j=p; j<=r-1; j++){
    if(A[j] <= x){
      i = i + 1;
      tmp = A[i];
      A[i] = A[j];
      A[j] = tmp;
    }
  }
  tmp = A[i+1];
  A[i+1] = A[r];
  A[r] = tmp;
  return i+1;
}