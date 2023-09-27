#include <iostream>
using namespace std;

int h, w, ans;
char field[25][25];

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

void dfs(int x, int y) {
  if(field[y][x] == '.' && 0 <= x && x < w && 0 <= y && y < h) {
    field[y][x] = '#';
    ans++;
    for(int i = 0; i < 4; i++) {
      int nx = x+dx[i], ny = y+dy[i];
      dfs(nx, ny);
    }
  }
}

int main() {
  int sx, sy;
  while(cin >> w >> h, w+h) {
    for(int i = 0; i < h; i++) {
      for(int j = 0; j < w; j++) {
	cin >> field[i][j];
	if(field[i][j] == '@') {
	  sx = j;
	  sy = i;
	  field[i][j] = '.';
	}
      }
    }

    ans = 0;
    dfs(sx, sy);
    cout << ans << endl;
  }
}