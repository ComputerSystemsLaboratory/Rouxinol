#include <iostream>
#include <stdlib.h>

#define MAX 2000000

using namespace std;

void printArray(int Array[],int n){

  int i;
  for(i = 0;i < n-1;i++){
    cout << Array[i] << ' ';
  }
  cout << Array[n-1] << endl;
}

void CountingSort(int A[],int B[],int n,int k){

  int i;
  int *C;

  C = (int*)malloc(sizeof(int)*(k+1));

  for(i = 0;i <= k;i++){
    C[i] = 0;
  }
  for(i = 0;i < n;i++){
    C[A[i]]++;
  }
  for(i = 1;i <= k;i++){
    C[i] += C[i-1];
  }
  for(i = n-1;i >= 0;i--){
    B[C[A[i]]-1] = A[i];
    C[A[i]]--;
  }

  free(C);
}


int main(){

  int i;
  int n;
  int k = 0;
  int *A;
  int *B;

  A = (int*)malloc(sizeof(int)*MAX);
  B = (int*)malloc(sizeof(int)*MAX);

  cin >> n;

  for(i = 0;i < n;i++){
    cin >> A[i];
    if(A[i] > k){
      k = A[i];
    }
  }

  CountingSort(A,B,n,k);

  printArray(B,n);

  return 0;
}