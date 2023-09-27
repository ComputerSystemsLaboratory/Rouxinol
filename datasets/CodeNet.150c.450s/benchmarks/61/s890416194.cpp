#include <bits/stdc++.h>
using namespace std;

const int MAXF = 10001;

int main() {
  for(int N, A, B, C, X;
      cin >> N >> A >> B >> C >> X && (N|A|B|C|X); ) {
    vector<int> Y(N);
    for(int i = 0; i < N; ++i) cin >> Y[i];
    int f = 0;
    for(int k = 0; k < N && f < MAXF; ) {
      if(Y[k] == X)
        if(++k == N) break;
      X = (A * X + B) % C;
      ++f;
    }
    if(f >= MAXF) f = -1;
    cout << f <<endl;
  }
  return 0;
}