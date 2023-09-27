#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define LOOP(i, a, n) for (int i = (int)a; i < (int)n; ++i)
#define REP(i, n) LOOP(i, 0, n)
#define MOD 1000000007
#define INF 1000000000
#define PI 3.14159265359
#define MAX_W 50
#define MAX_H 50

int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1}, dy[8] = {-1, 1, 0, 0, -1, 1, -1, 1}, board[MAX_H][MAX_W], w, h;

void dfs(int x, int y) {
  board[y][x] = 0;

  for (int i = 0; i < 8; i++) {
    int nextx = x + dx[i], nexty = y + dy[i];
    if (nextx >= 0 && nextx < w && nexty >= 0 && nexty < h && board[nexty][nextx] == 1) {
      dfs(nextx, nexty);
    }
  }

  return;
}

int main(void) {
  vector<int> ans;

  while (true) {
    cin >> w >> h;
    if (w == 0 && h == 0) {
      break;
    }
    fill(board[0], board[49], 0);
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        cin >> board[i][j];
        //cout << "i:" << i << " j:" << j << endl;
      }
    }

    int res = 0;
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        if (board[i][j] == 1) {
          dfs(j, i);
          res++;
        }
      }
    }

    ans.push_back(res);
  }

  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << endl;
  }
  return 0;
}