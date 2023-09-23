#include "iostream"
#include <algorithm>

using namespace std;

int partition(int A[],int p,int r){
  int x = A[r];
  int i = p - 1;
  for(int j = p ; j < r ; j++){
    if(A[j] <= x){
      i=i +1;
      swap(A[i],A[j]);
    }
  }
  swap(A[i+1],A[r]);
  return i + 1;
}

int main(){
  int n,m;
  int A[1000000];
  cin >> n;
  for(int i = 0; i<n;i++) cin >> A[i];
  m = partition(A,0,n-1);
  for(int i = 0 ; i < n; i++){
    if(i) cout << " ";
    if(i == m) cout << "[";
    cout << A[i];
      if(i == m) cout << "]";
  }
  cout << endl;
  return 0;
}

