#include <iostream>
#include <cstdio>
#include <string>
#define rep(i, n) for (int i = 0; i < n; ++i)
using namespace std;
typedef long long ll;

const ll MAX_W = 20, MAX_H = 20;
int tiles[MAX_H][MAX_W];
int d[4][2] = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};

void dfs(ll x, ll y, ll w, ll h) {
  tiles[y][x] = 0;

  rep(i, 4) {
      int dx = d[i][0];
      int dy = d[i][1];
      if (x + dx < 0 || x + dx >= w) continue;
      if (y + dy < 0 || y + dy >= h) continue;

      if (tiles[y + dy][x + dx] == -1) {
        dfs(x + dx, y + dy, w, h);
      }
  }
}


int main() {
  while(true) {
    ll w, h;
    cin >> w >> h;
    if (w == 0 && h == 0) break;

    string line;
    int startX;
    int startY;
    rep(i, h) {
      cin >> line;
      rep(j, w) {
        if (line[j] == '.') {
          tiles[i][j] = -1;
        } else if (line[j] == '#') {
          tiles[i][j] = 1;
        } else {
          tiles[i][j] = -1;
          startX = j;
          startY = i;
        }
      }
    }

    dfs(startX, startY, w, h);
    ll cnt = 0;
    rep(i, h) {
      rep(j, w) {
        if (tiles[i][j] == 0) ++cnt;
      }
    }
    cout << cnt << endl;
  }


  return 0;
}