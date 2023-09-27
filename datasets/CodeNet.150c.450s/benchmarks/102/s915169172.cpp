#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
using namespace std;

typedef pair<int, int> P;
int W, H;
char X[20][20];
bool V[20][20];
int DX[4] = {0, -1, 1, 0};
int DY[4] = {-1, 0, 0, 1};

int main() {
  while (cin >> W >> H) {
    if (W == 0 && H == 0) break;
    int sx = -1, sy = -1;
    for (int i=0; i<H; i++) {
      for (int j=0; j<W; j++) {
        cin >> X[j][i];
        V[j][i] = false;
        if (X[j][i] == '@') sx = j, sy = i;
      }
    }

    int c = 0;
    queue<P> q;
    q.push(P(sx, sy));

    while (!q.empty()) {
      int x = q.front().first,
          y = q.front().second; q.pop();
      if (V[x][y]) continue;
      V[x][y] = true;
      c++;

      for (int k=0; k<4; k++) {
        int dx = x + DX[k], dy = y + DY[k];
        if (dx < 0 || dx >= W || dy < 0 || dy >= H) continue;
        if (X[dx][dy] == '.') q.push(P(dx, dy));
      }
    }
    cout << c << "\n";
  }
  return 0;
}