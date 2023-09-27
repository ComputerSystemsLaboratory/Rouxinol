#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, P;
  while (cin >> N >> M >> P, N) {
    auto X = vector<int>(N);
    for (int i = 0; i < N; ++i) cin >> X[i];
    int sum = accumulate(begin(X), end(X), 0);
    cout << ( (X[M - 1] == 0) ? 0 : sum * (100 - P) / X[M - 1] ) << endl;
  }
  return 0;
}

