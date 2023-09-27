#include <bits/stdc++.h>
using namespace std;

int W, H;
char board[30][30];
bool is[30][30];

int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

void dfs(int x, int y) {
   for (int i = 0; i < 4; i++) {
      int nx = x + dx[i], ny = y + dy[i];
      if (nx < 0 || nx >= H || ny < 0 || ny >= W) continue;
      if (board[nx][ny] == '#') continue;
      if (is[nx][ny]) continue;
      is[nx][ny] = true;
      dfs(nx, ny); // 次の一から再び4近傍を探索
   }
}

int main() {
   while (cin >> W >> H, W && H) {
      memset(is, false, sizeof(is));
      int x, y;
      for (int i = 0; i < H; i++) {
         for (int j = 0; j < W; j++) {
            cin >> board[i][j];
            if (board[i][j] == '@') {
               x = i, y = j;
            }
         }
      }

      is[x][y] = true;
      dfs(x, y);
      int cnt = 0;
      for (int i = 0; i < H; i++) {
         for (int j = 0; j < W; j++) {
            if (is[i][j]) cnt++;
         }
      }
      cout << cnt << endl;
   }

   return 0;
}
