#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int selectionSort(int *A, int n){
  int cnt=0;
  for(int i=0;i<n;i++){
    int minj = i;
    for(int j=i;j<n;j++){
      if(A[j] < A[minj]){
	minj = j;
      }
    }
    if(minj!=i){
      swap(A[minj],A[i]);
      cnt++;
    }

  }
  return cnt;
}
    

int main(){
  int n;
  cin >> n;
  int *a = new int [n];
  for(int i=0;i<n;i++){
    cin >> a[i];
  }

  int cnt = selectionSort(a, n);

  for(int i=0;i<n;i++){
    if(i!=0){cout<< " ";}
    cout << a[i];
  }
  cout << endl;

  cout << cnt << endl;
}
  