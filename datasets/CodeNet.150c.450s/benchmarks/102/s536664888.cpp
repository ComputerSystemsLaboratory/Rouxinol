#include <bits/stdc++.h>
using namespace std;

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};
int W, H;
char board[30][30];

int dfs(int y, int x) {
   board[y][x] = '#';
   int ret = 1;
   for (int i = 0; i < 4; i++) {
      int ny = y + dy[i], nx = x + dx[i];
      if (ny >= 0 && ny < H && nx >= 0 && nx < W && board[ny][nx] == '.') {
         ret += dfs(ny, nx);
      }
   }
   return ret;
}

int main() {
   while (cin >> W >> H, W) {
      for (int i = 0; i < H; i++) {
         cin >> board[i];
      }

      for (int i = 0; i < H; i++) {
         for (int j = 0; j < W; j++) {
            if (board[i][j] == '@') {
               cout << dfs(i, j) << endl;
            }
         }
      }
   }

   return 0;
}
