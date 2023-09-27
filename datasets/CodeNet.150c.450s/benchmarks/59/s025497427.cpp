#include<iostream>
using namespace std;
const int MAX = 1000;
void insertionSort(int A[], int N);

int main(){
  int A[MAX],n;
  
  cin >> n;
  for(int i=0;i<n;i++)
    cin >> A[i];
  insertionSort(A, n);
  return 0;
}

void insertionSort (int A[], int N){
  int i,j,v;
  for (i = 0; i < N; i++){
    j = i;
    
    while (j > 0 && A[j] < A[j-1]){
      v = A[j];
      A[j] = A[j-1];
      A[j-1] = v;
      j--;
    }
    cout << A[0];
    for(int i=1;i<N;i++)cout << " " << A[i];
    cout << endl;
  }
}