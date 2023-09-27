#include <iostream>
#define MAX_W 50
#define MAX_H 50
using namespace std;

int w, h;
int t[MAX_H][MAX_W];

void PRINT() {
  for(int i = 0; i < h; ++i) {
    for(int j = 0; j < w; ++j) {
      cout << t[i][j] << ' ';
    }
    cout << endl;
  }
  cout << endl;
}

// 深さ優先探索
// 現在位置(y, x)
void dfs(int y, int x) {
  t[y][x] = 8;

  for(int dx = -1; dx <= 1; dx++) {
    for(int dy = -1; dy <= 1; dy++) {
      // 現在位置を(nx, ny)に更新
      int nx = x + dx;
      int ny = y + dy;

      // (nx, ny)は部屋の中か？ & t[nx][ny]は陸か？ を判定
      if(0 <= nx && nx < w && 0 <= ny && ny < h && t[ny][nx] == 1) {
        dfs(ny, nx);
        //PRINT();
      }
    }
  }
  return;
}

void solve() {
  int cnt = 0;
  for(int y = 0; y < h; ++y) {
    for(int x = 0; x < w; ++x) {

      if(t[y][x] == 1) {
        dfs(y, x);
        cnt++;
      }
      
    }
  }
  cout << cnt << endl;
}

int main() {
  while(cin >> w >> h && w && h) {

    for(int i = 0; i < h; ++i) {
      for(int j = 0; j < w; ++j) {
        cin >> t[i][j];
      }
    }
    solve();
  }
  return 0;
}

