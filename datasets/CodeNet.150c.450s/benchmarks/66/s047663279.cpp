#include <bits/stdc++.h>
#include <string>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define shosu(n) setprecision(n)
using namespace std;

int main() {
  int N, M, key = 0, kk = 0;
  string U[256], T;
  cin >> N;
  rep(i, N) cin >> U[i];
  cin >> M;
  rep(i, M) {
    cin >> T;
    rep(i, N) {
      if (U[i] == T && key == 0) {
        cout << "Opened by " << T << endl;
        key = 1;
        kk = 1;
        break;
      } else if (U[i] == T && key == 1) {
        cout << "Closed by " << T << endl;
        key = 0;
        kk = 1;
        break;
      }
    }
    if (kk == 0) {
      cout << "Unknown " << T << endl;
    }
    kk = 0;
  }
  return 0;
}