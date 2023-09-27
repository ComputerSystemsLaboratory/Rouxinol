#include <iostream>
using namespace std;

void search(int x, int y);

int w, h;
char maze[22][22]; //行（y)　列（x）
bool reached[22][22];
int ans;

int main() {
  while(cin >> w >> h) {
    if(w == 0 && h == 0) return 0;

    // 初期化
    for(int k = 0; k < h; k++) {
      for(int l = 0; l < w; l++) {
        maze[k][l] = '#';
        reached[k][l] = false;
      }
    }
    ans = 0;

    //fill(reached, false);
    // スタート座標
    int a, b;
    for(int i = 0; i < h; i++) {
      for(int j = 0; j < w; j++) {
        cin >> maze[i][j];
        if(maze[i][j] == '@') {
          a = i;
          b = j;
          // cout << a << " " << b << endl;
        }
      }
    }

    search(a, b);
    cout << ans << endl;

    // for(int i = 0; i < h; i++) {
    //   for(int j = 0; j < w; j++) cout << maze[i][j];
    //   cout << endl;
    // }
  }
}

void search(int y, int x) {
  // 迷路の外側か壁の場合は何もしない
  if(x < 0 || w <= x || y < 0 || h <= y || maze[y][x] == '#') return;
  // 以前に到達していたら何もしない
  if(reached[y][x]) return;
  ans++;
  reached[y][x] = true;  //　到達したよ

  // ４方向を試す
  search(y, x + 1); //右
  search(y, x - 1); //左
  search(y + 1, x); //下
  search(y - 1, x); //上
}

