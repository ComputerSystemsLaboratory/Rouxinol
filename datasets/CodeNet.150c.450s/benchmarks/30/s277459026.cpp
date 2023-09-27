#include <iostream>
#include <algorithm>
using namespace std;

int cnt;

void selectionSort(int A[], int n){
  for(int i = 0; i < n; i++){
    int min = i;
    for(int j = i + 1; j < n; j++){
      if(A[j] < A[min]) min = j;
    }
    if(min != i){
      swap(A[i], A[min]);
      cnt++;
    }
  }
}

int main(void){
  int n, A[100];
  
  cin >> n;
  for(int i = 0; i < n; i++) cin >> A[i];

  selectionSort(A, n);

  for(int i = 0; i < n; i++){
    cout << A[i];
    if(i < n - 1) cout << " ";
  }
  cout << "\n" << cnt << endl;
  return 0;
}