#include <bits/stdc++.h>
using namespace std;

const int MAXH = 50;
const int MAXW = 50;
int W, H;
int G[MAXH][MAXW];

int dfs(int x, int y) {
  const static int dx[] = {1,0,-1,0,1,1,-1,-1};
  const static int dy[] = {0,1,0,-1,1,-1,1,-1};
  G[y][x] = 0;
  int res = 1;
  for(int k = 0; k < 8; ++k) {
    int nx = x + dx[k];
    int ny = y + dy[k];
    if(nx < 0 || nx >= W) continue;
    if(ny < 0 || ny >= H) continue;
    if(G[ny][nx] == 0) continue;
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
      }
    }
    int res = 0;
    for(int i = 0; i < H; ++i) {
      for(int j = 0; j < W; ++j) {
        if(G[i][j]) {
          dfs(j, i);
          ++res;
        }
      }
    }
    cout << res << endl;
  }
  return 0;
}