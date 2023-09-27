#include <iostream>
using namespace std;

int c[50][50];
int w, h;

void dfs(int x, int y) {
  c[y][x] = 0;
  for (int i = -1; i <= 1; i++) {
    for (int j = -1; j <= 1; j++) {
      int nx = x + i;
      int ny = y + j;
      if (c[ny][nx] == 1 && 0 <= nx && nx < w && 0 <= ny && ny < h)
	dfs(nx, ny);
    }
  }
}

int search() {
  int count = 0;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      if (c[i][j] == 1) {
	dfs(j, i);
	count++;
      }
    }
  }
  return count;
}

int main() {
  while (true) {
    cin >> w >> h;
    if (w == 0 && h == 0) return 0;

    for (int i = 0; i < h; i++)
      for (int j = 0; j < w; j++)
	cin >> c[i][j];

    int ans = search();
    cout << ans << endl;
  }
}