#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &A, int p, int r){
  int x = A[r];
  int i = p-1;
  for(int j = p; j < r; j++){
    if(A[j] <= x){
      i++;
      swap(A[i], A[j]);
    }
  }
  swap(A[i+1], A[r]);
  return i+1;
}

int main(void){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  vector<int> A(n);
  for(int i = 0; i < n; i++) cin >> A[i];
  int idx = partition(A, 0, n-1);
  for(int i = 0; i < n; i++){
    if(i == idx) cout << "[" << A[i] << "]";
    else cout << A[i];
    if(i == n-1) cout << '\n';
    else cout << ' ';
  }
}