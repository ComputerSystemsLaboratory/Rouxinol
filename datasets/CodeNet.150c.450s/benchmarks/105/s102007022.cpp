#include <bits/stdc++.h>
using namespace std;
int main(){
  int T;
  cin >> T;
  for (int i = 0; i < T; i++){
    int N;
    cin >> N;
    vector<long long> A(N);
    for (int j = 0; j < N; j++){
      cin >> A[j];
    }
    string S;
    cin >> S;
    bool ok = true;
    for (int j = N - 1; j >= 0; j--){
      for (int k = N - 1; k > j; k--){
        A[j] = min(A[j], A[j] ^ A[k]);
      }
      if (S[j] == '1' && A[j] != 0){
        ok = false;
      }
    }
    if (ok){
      cout << 0 << endl;
    } else {
      cout << 1 << endl;
    }
  }
}