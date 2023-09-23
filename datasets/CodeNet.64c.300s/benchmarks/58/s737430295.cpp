#include <iostream>
using namespace std;

const int MAX_W = 100;
int h,w;
char orchard[MAX_W][MAX_W];
bool counted[MAX_W][MAX_W];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void dfs(int i, int j, char tree) {
  // cout << "depth i=" << i << " j=" << j << endl;
  // 今いるところが果樹園の外か、treeでないならreturn
  if (i < 0 || i >= h || j < 0 || j >= w || counted[i][j] || tree != orchard[i][j])
    return;
  // 今いる場所のcountedをtrueにする
  counted[i][j] = true;

  // 4方向に進む
  for (int k = 0; k < 4; k++) {
    dfs(i + dy[k], j + dx[k], tree);
  }
}

int main() {
  // ifstream ifs( "test.txt" );

  while (true) {
    // 入力
    cin >> h >> w;
    if (!(h | w))
      break;
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        cin >> orchard[i][j];
        counted[i][j] = false;
      }
    }
    // 計算
    int res = 0;
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        if (!counted[i][j]) {
          char tree = orchard[i][j];
          dfs(i, j, tree);
          res++;
        }
      }
    }

    // 出力
    cout << res << endl;
  }
}