#include <iostream>
#define REP(i, a, n) for(int i = ((int) a); i < ((int) n); i++)
using namespace std;

int H, A[10][5];
bool v[10][5];

int main(void) {
  while(cin >> H, H) {
    REP(i, 0, H) REP(j, 0, 5) cin >> A[H - i - 1][j];
    int ans = 0;
    bool cont = true;
    while(cont) {
      cont = false;
      REP(i, 0, H) REP(j, 0, 5) v[i][j] = false;
      REP(i, 0, H) REP(j, 0, 3) {
        if(A[i][j] != 0 && A[i][j] == A[i][j + 1] && A[i][j] == A[i][j + 2]) {
          v[i][j] = v[i][j + 1] = v[i][j + 2] = true;
          cont = true;
        }
      }
      REP(i, 0, H) REP(j, 0, 5) if(v[i][j]) ans += A[i][j];
      REP(j, 0, 5) REP(i, 0, H) {
        if(v[i][j]) {
          REP(k, i + 1, H) {
            A[k - 1][j] = A[k][j];
            v[k - 1][j] = v[k][j];
          }
          A[H - 1][j] = 0;
          v[H - 1][j] = false;
          i--;
        }
      }
    }
    cout << ans << endl;
  }

  return 0;
}