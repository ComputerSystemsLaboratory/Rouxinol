#include <iostream>
#include <algorithm>
using namespace std;

int n;

void CountingSort(int A[], int B[], int k){
  int* C; C = new int[k+1];
  for(int i = 0; i < k+1; i++) C[i] = 0;

  for(int j = 1; j < n+1; j++) C[A[j]]++;
  for(int i = 1; i < k+1; i++) C[i] += C[i-1];
  for(int j = n; j > 0; j--) B[C[A[j]]--] = A[j];
}

int main(){
  cin >> n;
  int *A, *B;
  int k = 0;
  A = new int[n+2]; B = new int[n+2];
  for(int i = 0; i < n; i++){
    cin >> A[i+1];
    k = max(k, A[i+1]);
  }
  CountingSort(A, B, k);
  for(int i = 1; i < n; i++){
    cout << B[i] << " ";
  }
  cout << B[n] << endl;
  return 0;
}