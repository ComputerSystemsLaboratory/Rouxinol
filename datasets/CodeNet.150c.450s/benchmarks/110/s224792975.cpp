#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define shosu(n) setprecision(n)
#define INF 999999999
using namespace std;
int h, w, n;
string data[1100];
int main() {
  while (cin >> h >> w >> n) {
    rep(i, h) cin >> data[i];

    pair<int, int> ce[10];
    rep(i, h) rep(j, w) {
      if (data[i][j] == 'S') {
        ce[0] = pair<int, int>(i, j);
      }
      if (isdigit(data[i][j])) {
        ce[data[i][j] - '0'] = pair<int, int>(i, j);
      }
    }
    int sum = 0;
    rep(i, n) {
      int mp[1100][1100];
      rep(i, 1100) rep(j, 1100) mp[i][j] = INF;
      bool used[1100][1100] = {};

      mp[ce[i].first][ce[i].second] = 0;
      used[ce[i].first][ce[i].second] = true;
      queue<pair<int, int>> que;
      que.push(ce[i]);
      while (que.size()) {
        int y = que.front().first;
        int x = que.front().second;
        que.pop();
        int dx[] = {0, 1, 0, -1};
        int dy[] = {1, 0, -1, 0};
        rep(i, 4) {
          int ddy = y + dy[i];
          int ddx = x + dx[i];
          if (ddy >= 0 && ddy < h && ddx >= 0 && ddx < w &&
              data[ddy][ddx] != 'X' && !used[ddy][ddx]) {
            used[ddy][ddx] = true;
            mp[ddy][ddx] = mp[y][x] + 1;
            que.push(pair<int, int>(ddy, ddx));
          }
        }
      }
      sum += mp[ce[i + 1].first][ce[i + 1].second];
    }
    cout << sum << endl;
  }

  return 0;
}