#include <iostream>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); ++i)

bool done[22][22];
int w, h;
bool field[22][22];
int ofs[4][2] = {
  {0,1},
  {1,0},
  {-1,0},
  {0,-1}
};
int dfs(int x, int y) {
  if( !field[y][x] ) return 0;
  if( done[y][x] ) return 0;
  done[y][x] = true;
  int cnt = 1;
  rep(i, 4) {
    int nx = x + ofs[i][0];
    int ny = y + ofs[i][1];
    cnt += dfs(nx, ny);
  }
  return cnt;
}

int main()
{
  while(cin >> w >> h, (w|h)) {
    rep(i, 21) rep(j, 21) {
      field[i][j] = done[i][j] = false;
    }
    int sx, sy;
    rep(y, h) {
      rep(x, w) {
        char c;
        cin >> c;
        field[y + 1][x + 1] = c != '#';
        if( c == '@' ) {
          sx = x + 1;
          sy = y + 1;
        }
      }
    }

    cout << dfs(sx, sy) << endl;
  }
  return 0;
}