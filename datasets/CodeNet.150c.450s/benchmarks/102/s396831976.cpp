#include <bits/stdc++.h>
using namespace std;

const int MAXH = 30;
const int MAXW = 30;
int W, H;
char G[MAXH][MAXW];

int dfs(int x, int y) {
  const static int dx[] = {1,0,-1,0};
  const static int dy[] = {0,1,0,-1};
  G[y][x] = '#';
  int res = 1;
  for(int k = 0; k < 4; ++k) {
    int nx = x + dx[k];
    int ny = y + dy[k];
    if(nx < 0 || nx >= W) continue;
    if(ny < 0 || ny >= H) continue;
    if(G[ny][nx] == '#') continue;
    res += dfs(nx, ny);
  }
  return res;
}

int main() {
  for(; cin >> W >> H && (W|H);) {
    int sx, sy;
    for(int i = 0; i < H; ++i) {
      for(int j = 0; j < W; ++j) {
        cin >> G[i][j];
        if(G[i][j] == '@') {
          sx = j;
          sy = i;
        }
      }
    }
    cout << dfs(sx, sy) << endl;
  }
  return 0;
}