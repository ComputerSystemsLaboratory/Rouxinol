#include <bits/stdc++.h>
using namespace std;
int main(){
  while (1){
    int N, A, B, C, X;
    cin >> N >> A >> B >> C >> X;
    if (N == 0 && A == 0 && B == 0 && C == 0 && X == 0){
      break;
    }
    vector<int> Y(N);
    for (int i = 0; i < N; i++){
      cin >> Y[i];
    }
    int pos = 0;
    int t = -1;
    int rng = X;
    while (t < 10000 && pos < N){
      t++;
      if (Y[pos] == rng){
        pos++;
      }
      rng = (A * rng + B) % C;
    }
    if (pos != N){
      cout << -1 << endl;
    } else {
      cout << t << endl;
    }
  }
}
