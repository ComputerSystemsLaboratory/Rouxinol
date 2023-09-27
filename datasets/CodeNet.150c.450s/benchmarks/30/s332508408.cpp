#include <bits/stdc++.h>
using namespace std;

int main(void){
  int N; cin >> N;
  vector<int> A(N);
  for(int i=0; i < N; i++) cin >> A[i];
  int ans = 0;

  for(int i = 0; i < N; i++){
    int minj = i;
    for(int j = i; j < N; j++){
      if(A[j] < A[minj]){
        minj = j;
      }
    }
    swap(A[i], A[minj]);
    if(i != minj) ans++;
  }

  for(int i=0; i < N; i++){
    if(i != N-1){
      cout << A[i] << " ";
    }else{
      cout << A[i] << endl;
    }
  }
  cout << ans << endl;

  return 0;
}