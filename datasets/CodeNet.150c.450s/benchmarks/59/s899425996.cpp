#include <iostream>
using namespace std;

void Array_Out(int *A, int N);

int main(){

  int N;
  cin >> N;
  int *A = new int(N);
  int i;
  for(i=0;i<N;i++){
    cin >> A[i];
  }
  Array_Out(A,N);
  int tmp;
  int j;
  for(i= 1; i < N; i++){
    tmp = A[i];
    j = i-1;
    while(j >= 0 && tmp < A[j]){
      A[j+1] = A[j];
      A[j] = tmp;
      j--;
    }
    Array_Out(A,N);
  }
  return 0;
}

void Array_Out(int *A, int N){
  int i;
  for(i=0;i<N;i++){
    cout << A[i];
    if(i==N-1) break;
    cout << " ";
  }
  cout << endl;
}