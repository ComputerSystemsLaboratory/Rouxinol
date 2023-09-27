#include <fstream>
#include <iostream>
#include <queue>
using namespace std;
const int MAX = 1000;
const int INF = 10000000;
typedef pair<int, int> P;
int h,w,n;
// 移動の4方向
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
// チーズ工場のマップ
short field[MAX][MAX];
// スタートから各点への最短距離
int d[MAX][MAX];
// 幅優先探索の関数の返り値用
typedef struct {
  int x;
  int y;
  int cnt;
} Cheeze;

// 地点(sx,sy)から目標地点（工場i）までの最短距離を求める幅優先探索
Cheeze bfs(int sx, int sy, char i) {
  // スタート地点は距離0
  d[sy][sx] = 0;
  queue<P> qu;
  qu.push(P(sx, sy));

  // 工場iに達するまで繰り返す
  while (true) {
    P p = qu.front();
    qu.pop();
    // ゴールなら終了
    if (field[p.second][p.first] == i) {
      Cheeze res = {p.first, p.second, d[p.second][p.first]};
      return res;
    }
    // 4方向
    for (int j = 0; j < 4; j++) {
      int nx = p.first + dx[j];
      int ny = p.second + dy[j];
      // 移動可能判定など
      if (nx >= 0 && nx < w && ny >= 0 && ny < h &&
          d[ny][nx] == INF && field[ny][nx] != -1) {
        qu.push(P(nx,ny));
        d[ny][nx] = d[p.second][p.first] + 1;
      }
    }
  }
}

int main() {
  // 入力
  int sx, sy;
  int cnt = 0;
  Cheeze cheeze;
  // ifstream ifs( "test.txt" );
  cin >> h >> w >> n;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      char cel;
      cin >> cel;
      if (cel == 'X') {
        field[i][j] = -1;
      } else if (cel == '.') {
        field[i][j] = 0;
      } else if (cel == 'S') {
        field[i][j] = 0;
        sx = j;
        sy = i;
      } else {
        field[i][j] = (short)(cel - '0');
      }
    }
  }

  // 計算
  for (int i = 1; i <= n; i++) {
    // 最短距離dの初期化
    for (int j = 0; j < MAX; j++) {
      for (int k = 0; k < MAX; k++) {
        d[j][k] = INF;
      }
    }
    cheeze = bfs(sx, sy, i);
    // スタート地点を更新
    sx = cheeze.x;
    sy = cheeze.y;
    cnt += cheeze.cnt;
  }

  // 出力
  cout << cnt << endl;
}