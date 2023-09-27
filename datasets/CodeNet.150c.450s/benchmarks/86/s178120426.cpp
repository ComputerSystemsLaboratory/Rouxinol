#include <bits/stdc++.h>
using namespace std;
int main(){
  while (1){
    int N, M, P;
    cin >> N >> M >> P;
    if (N == 0 && M == 0 && P == 0){
      break;
    }
    vector<int> X(N);
    for (int i = 0; i < N; i++){
      cin >> X[i];
    }
    if (X[M - 1] == 0){
      cout << 0 << endl;
    } else {
      int sum = 0;
      for (int i = 0; i < N; i++){
        sum += X[i];
      }
      cout << sum * 100 * (100 - P) / 100 / X[M - 1] << endl;
    }
  }
}
