#include <iostream>
#include <algorithm>
using namespace std;

int cntExch;

void bubbleSort(int A[], int n){
  for(int i = 0; i < n; i++){
    for(int j = n - 1; j > i; j--){
      if(A[j] < A[j-1]){
        swap(A[j], A[j-1]);
        cntExch++;
      }
    }
  }
}

int main(void){
  int n, A[100];

  cin >> n;
  for(int i = 0; i < n; i++) cin >> A[i];

  bubbleSort(A, n);

  for(int i = 0; i < n; i++){
    cout << A[i];
    if(i < n - 1) cout << " ";
  }
  cout << endl;
  cout << cntExch << endl;
  return 0;
}