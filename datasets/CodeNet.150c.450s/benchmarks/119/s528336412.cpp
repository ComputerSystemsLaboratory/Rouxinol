#include <algorithm>
#include <iostream>
#include <vector>
#include <cstring>

using namespace std;


bool done[52][52];
int field[52][52];
int ofs[8][2] = {
  {0, 1},
  {1, 0},
  {-1, 0},
  {0, -1},
  {1, 1},
  {1, -1},
  {-1,-1},
  {-1, 1}
};

void paint(int y, int x)
{
  for (int i = 0; i < 8; ++i) {
    int nx = x + ofs[i][0];
    int ny = y + ofs[i][1];
    if (field[ny][nx] && !done[ny][nx]) {
      done[ny][nx] = true;
      paint(ny, nx);
    }
  }
}

int main() {
  int w, h;
  for(;;) {
    cin >> w >> h;
    if ((w|h) == 0) {
      break;
    }
    memset(field, 0, sizeof(field));
    memset(done, 0, sizeof(done));
    for (int i = 1; i <= h; ++i) {
      for (int j = 1; j <= w; ++j) {
        cin >> field[i][j];
      }
    }
    int cnt = 0;
    for (int i = 1; i <= h; ++i) {
      for (int j = 1; j <= w; ++j) {
        if (field[i][j] && !done[i][j]) {
          paint(i, j);
          ++cnt;
        }
      }
    }
    cout << cnt << endl;
  }
  return 0;
}