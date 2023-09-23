#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

int partition(int A[], int p, int last){
  int x = A[last];
  int bigger_first_ind = p - 1;
  for(int j = p; j < last; j++){
    if(A[j] <= x) swap(A[++bigger_first_ind], A[j]);
  }
  swap(A[++bigger_first_ind], A[last]);
  return bigger_first_ind;
}

int main(){
  int n;
  cin >> n;
  int* A; A = new int[n];
  for(int i = 0; i < n; i++) cin >> A[i];
  int border = partition(A, 0, n-1);

  for(int i = 0; i < n-1; i++){
    if(i == border){
      cout << "[" << A[i] << "] ";
    }else
      cout << A[i] << " ";
  }
  cout << A[n-1] << endl;
}