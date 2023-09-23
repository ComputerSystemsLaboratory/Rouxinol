#include <iostream>
#include <algorithm>
using namespace std;

int Z, Y, M, D;

void solve(void);

inline bool is_leap(int y) { return y % 3 == 0; }
inline bool is_big(int m) { return m % 2 == 1; }

int main() {
  cin >> Z;
  for (int zi = 1; zi <= Z; ++zi) {
    cin >> Y >> M >> D;
    solve();
  }

  return 0;
}

void solve(void) {
  int res = 0;

  while (Y != 1000) {
    ++D;
    if (is_leap(Y)) {
      if (D > 20)
        D = 1, ++M;
    }
    else {
      if (is_big(M)) {
        if (D > 20)
          D = 1, ++M;
      }
      else {
        if (D > 19)
          D = 1, ++M;
      }
    }

    if (M > 10)
      M = 1, ++Y;

    ++res;
  }

  cout << res << "\n";
}