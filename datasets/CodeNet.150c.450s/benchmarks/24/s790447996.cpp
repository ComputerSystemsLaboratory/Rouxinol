#include <bits/stdc++.h>
using namespace std;
int main(){
  while (1){
    int N, M;
    cin >> N >> M;
    if (N == 0 && M == 0){
      break;
    }
    vector<int> D(N), P(N);
    for (int i = 0; i < N; i++){
      cin >> D[i] >> P[i];
    }
    vector<int> sum(11, 0);
    for (int i = 0; i < N; i++){
      sum[P[i]] += D[i];
    }
    for (int i = 10; i >= 0; i--){
      int d = min(sum[i], M);
      sum[i] -= d;
      M -= d;
    }
    long long ans = 0;
    for (int i = 0; i <= 10; i++){
      ans += sum[i] * i;
    }
    cout << ans << endl;
  }
}
