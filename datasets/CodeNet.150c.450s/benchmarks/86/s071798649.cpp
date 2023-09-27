#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for(int i = 0; i < (n); i++)
// #define
// #define

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  while(true) {
    int N, M, P;
    cin >> N >> M >> P;
    if(N + M + P == 0) break;

    int sum = 0;
    int a;
    int X[1010];
    rep(i, N) {
      cin >> a;
      X[i] = a;
      sum += X[i];
    }
    if(X[M - 1] == 0) {
      cout << 0 << endl;

      continue;
    }
    sum = sum * 100;

    sum = sum - (sum * P / 100);

    sum = sum / X[M - 1];

    cout << sum << endl;
  }
}

