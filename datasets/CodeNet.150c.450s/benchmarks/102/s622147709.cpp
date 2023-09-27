#include <iostream>
#define REP(i, a, n) for(int i = (a); i < (n); i++)
using namespace std;

int W, H, sx, sy;
char T[20][20];
bool visited[20][20];

bool isin(int y, int x) {
  return 0 <= y && y < H && 0 <= x && x < W;
}

int dfs(int sy, int sx) {
  int dd[5] = { 0, 1, 0, -1, 0 };
  int ret = 1;

  visited[sy][sx] = true;

  REP(i, 0, 4) {
    int ny = sy + dd[i + 0];
    int nx = sx + dd[i + 1];
    if(isin(ny, nx) && !visited[ny][nx] && T[ny][nx] != '#') ret += dfs(ny, nx);
  }

  return ret;
}

int main(void) {
  while(cin >> W >> H, W) {
    REP(i, 0, H) {
      cin >> T[i];
      REP(j, 0, W) {
        if(T[i][j] == '@') {
          sy = i;
          sx = j;
        }
      }
    }
    REP(i, 0, H) REP(j, 0, W) visited[i][j] = false;

    cout << dfs(sy, sx) << endl;
  }
}