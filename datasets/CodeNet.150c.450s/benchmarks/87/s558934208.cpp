#include <iostream>
#define REP(i, a, n) for(int i = (a); i < (n); i++)
using namespace std;

int H, S[10][5], v[10][5];

int main(void) {
  while(cin >> H, H) {
    REP(i, 0, H) REP(j, 0, 5) cin >> S[i][j];

    int p = 0, q;
    while(1) {
      q = 0;
      REP(i, 0, H) REP(j, 0, 5) v[i][j] = 0;
      REP(i, 0, H) REP(j, 0, 3) {
        if(S[i][j] == 0) continue;
        int d = 1;
        for(; j + d < 5 && S[i][j + d] == S[i][j]; d++);
        if(d >= 3) {
          REP(k, j, j + d) {
            q += S[i][k];
            S[i][k] = 0;
          }
        }
      }

      if(q == 0) break;
      p += q;

      bool b = true;
      while(b) {
        b = false;
        REP(i, 0, H - 1) REP(j, 0, 5) {
          if(S[i][j] != 0 && S[i + 1][j] == 0) {
            S[i + 1][j] = S[i][j];
            S[i][j] = 0;
            b = true;
          }
        }
      }
    }

    cout << p << endl;
  }

  return 0;
}