#include <bits/stdc++.h>
using namespace std;

void CountingSort(vector<int> &A, vector<int> &B, int k){
  vector<int> C(k+1, 0);
  for(int i = 1; i < A.size(); i++){
    C[A[i]]++;
  }
  for(int i = 1; i <= k; i++){
    C[i] = C[i] + C[i-1];
  }

  for(int i = A.size()-1; i >= 1; i--){
    B[C[A[i]]] = A[i];
    C[A[i]]--;
  }
}

int main(void){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  int maxv = 0;
  cin >> n;
  vector<int> A(n+1);
  vector<int> B(n+1);
  for(int i = 0; i < n; i++){
    cin >> A[i+1];
    maxv = max(maxv, A[i+1]);
  }
  CountingSort(A, B, maxv);
  for(int i = 1; i <= n; i++){
    cout << B[i];
    if(i == n) cout << '\n';
    else cout << " ";
  }
  return 0;
}