#include <iostream>
#define REP(i, a, n) for(int i = (a); i < (n); i++)
using namespace std;

int N, P[21][21], M, I[30];
char D[30];
int dd[5] = { 0, 1, 0, -1, 0 };
bool v[20];

int main(void) {
  while(cin >> N, N) {
    REP(i, 0, 21) REP(j, 0, 21) P[i][j] = -1;
    REP(i, 0, N) {
      int X, Y;
      cin >> X >> Y;
      P[X][Y] = i;
    }
    cin >> M;
    REP(i, 0, M) cin >> D[i] >> I[i];

    REP(i, 0, 20) v[i] = false;

    int x = 10, y = 10;
    REP(i, 0, M) {
      int dir;
      switch(D[i]) {
        case 'N': dir = 0; break;
        case 'E': dir = 1; break;
        case 'S': dir = 2; break;
        case 'W': dir = 3; break;
      }
      REP(j, 0, I[i]) {
        x += dd[dir];
        y += dd[dir + 1];
        // cout << x << ", " << y << endl;
        if(P[x][y] >= 0) v[P[x][y]] = true;
      }
    }

    int ans = 0;
    REP(i, 0, N) if(v[i]) ans++;
    cout << (ans == N ? "Yes" : "No") << endl;
  }

  return 0;
}