#include <bits/stdc++.h>
using namespace std;

int main(void){
  int N;
  cin >> N;
  vector<int>A(N);
  for(int i=0; i < N;  i++) cin >> A[i];
  bool flg = true;
  int ans = 0;
  while(flg){
    flg = 0;
    for(int i = N-1; i >= 1; i--){
      if(A[i] < A[i-1]){
        swap(A[i], A[i-1]);
        flg = 1;
        ans++;
      }
    }
  }
  for(int i=0; i < N; i++){
    cout << A[i];
    if(i != N-1) cout << " ";
  }
  cout << endl << ans << endl;
  return 0;
}