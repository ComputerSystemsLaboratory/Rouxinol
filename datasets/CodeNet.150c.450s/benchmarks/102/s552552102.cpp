#include <iostream>
#include <string>
using namespace std;

string s[21];
int w, h, vx[4] = {1, 0, -1, 0}, vy[4] = {0, 1, 0, -1};
bool is_search[21][21];

int dfs(int x, int y) {
  //cout << x << " " << y << endl;
  is_search[x][y] = true;
  int ret = 0, cnt = 0;
  for(int i = 0; i < 4; ++i) {
    if(0 <= x+vx[i] && 0 <= y+vy[i] && x+vx[i] < h && y+vy[i] < w && s[x+vx[i]][y+vy[i]] != '#' && is_search[x+vx[i]][y+vy[i]] == false) {
      ret += dfs(x+vx[i], y+vy[i]);
      cnt++;
    }
  }
  //cout << ret+cnt << endl;
  return ret + cnt;
}

int main(void) {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int ans, sx, sy;
  bool flag;

  while(cin >> w >> h, w | h) {
    ans = 0; flag = false;
    for(int i = 0; i < h; ++i) fill(is_search[i], is_search[i] + w, false);
    for(int i = 0; i < h; ++i) cin >> s[i];

    for(int i = 0; i < h; ++i) {
      for(int j = 0; j < w; ++j) {
        if(s[i][j] == '@') {
          sx = i; sy = j;
          flag = true;
          break;
        }
      }
      if(flag) break;
    }

    ans = dfs(sx, sy) + 1;

    cout << ans << endl;
  }
  return 0;
}