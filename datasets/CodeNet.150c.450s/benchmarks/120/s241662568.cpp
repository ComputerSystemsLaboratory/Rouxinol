#include <iostream>
#define REP(i, a, n) for(int i = a; i < n; i++)
using namespace std;


int R, C, m, cnt, x, y;
bool b[10][10000];

int main(void) {
  while(cin >> R >> C, !(R == 0 && C == 0)) {
    REP(i, 0, R) REP(j, 0, C) cin >> b[i][j];

    m = 0;
    REP(i, 0, 1 << R) {
      cnt = 0;
      REP(j, 0, C) {
        x = y = 0;
        REP(k, 0, R) {
          if(i & (1 << k)) {
            b[k][j] ? y++ : x++;
          } else {
            b[k][j] ? x++ : y++;
          }
        }
        cnt += max(x, y);
      }
      m = max(m, cnt);
    }

    cout << m << endl;
  }

  return 0;
}