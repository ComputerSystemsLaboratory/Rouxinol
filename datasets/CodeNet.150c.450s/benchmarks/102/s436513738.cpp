#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define debug(x) cerr << #x << ": " << x << endl;
#define line() cerr << "---------------" << endl;

char board[30][30];
bool visited[30][30];

int H, W;
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

void dfs(int x, int y) {
   for (int i = 0; i < 4; i++) {
      int nx = x + dx[i], ny = y + dy[i];
      if (nx < 0 || nx >= H || ny < 0 || ny >= W) continue;
      if (board[nx][ny] == '#') continue;
      if (visited[nx][ny]) continue;
      visited[nx][ny] = true;
      dfs(nx, ny);
   }
}

int main() {
   while (cin >> W >> H, W || H) {
      memset(visited, false, sizeof(visited));

      int sx = 0, sy = 0; // 人の座標
      for (int i = 0; i < H; i++) {
         for (int j = 0; j < W; j++) {
            cin >> board[i][j];
            if (board[i][j] == '@') {
               sx = i, sy = j;
            }
         }
      }

      visited[sx][sy] = true;
      dfs(sx, sy);

      int ans = 0;
      for (int i = 0; i < H; i++) {
         for (int j = 0; j < W; j++) {
            if (visited[i][j]) ans++;
         }
      }
      cout << ans << endl;

   }

   return 0;
}
