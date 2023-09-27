#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define LOOP(i, a, n) for (int i = (int)a; i < (int)n; ++i)
#define REP(i, n) LOOP(i, 0, n)
#define MOD 1000000007
#define INF 1000000000
#define PI 3.14159265359
#define MAX_H 20
#define MAX_W 20

int dx[4] = {0, 0, 1, -1}, dy[4] = {1, -1, 0, 0}, w, h, ans = 0;
string board[MAX_H];

int dfs(int x, int y) {
  if (board[y][x] == '#') {
    return 0;
  } else {
    ans++;
    board[y][x] = '#';
  }

  for (int i = 0; i < 4; i++) {
    int nextx = x + dx[i], nexty = y + dy[i];
    if (nextx >= w || nextx < 0 || nexty >= h || nexty < 0)
      continue;
    dfs(x + dx[i], y + dy[i]);
  }

  return ans;
}

int main(void) {
  vector<int> ret;
  while (true) {
    ans = 0;
    scanf("%d %d", &w, &h);
    if (w == 0 && h == 0)
      break;
    for (int i = 0; i < h; i++)
      cin >> board[i];

    int sx = 0, sy = 0;
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        if (board[i][j] == '@') {
          sx = j;
          sy = i;
        }
      }
    }

    dfs(sx, sy);
    ret.push_back(ans);
  }

  for (int i = 0; i < ret.size(); i++) {
    cout << ret[i] << endl;
  }

  return 0;
}