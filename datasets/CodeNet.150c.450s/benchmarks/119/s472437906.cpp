#include <bits/stdc++.h>
 
using namespace std;
 
int c[64][64];
 
void paint(int y, int x) {
  if (y < 0 || y >= 50 || x < 0 || x >= 50) return;
  if (c[y][x] == 0) return;
  c[y][x] = 0;
  for (int dy = -1; dy <= 1; ++dy) {
    for (int dx = -1; dx <= 1; ++dx) {
      paint(y + dy, x + dx);
    }
  }
}
 
int main() {
  int H, W;
  while (cin >> W >> H, H) {
    for (int i = 0; i < H; ++i) {
      for (int j = 0; j < W; ++j) {
        cin >> c[i][j];
      }
    }
    int res = 0;
    for (int y = 0; y < H; ++y) {
      for (int x = 0; x < W; ++x) {
        if (c[y][x] == 1) {
          ++res;
          paint(y, x);
        }
      }
    }
    cout << res << endl;
  }
  return 0;
}
