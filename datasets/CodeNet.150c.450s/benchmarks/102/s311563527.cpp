
#include <iostream>

using namespace std;

int w, h;
string f[20];
int cnt;

int dx[] = {-1,  1,  0 , 0};
int dy[] = { 0,  0, -1,  1};

void rec(int x, int y) {
  f[y][x] = '#';
  cnt++;

  for (int i=0; i<4; i++) {
    int mx = x + dx[i];
    int my = y + dy[i];

    if (mx < 0 || w <= mx) { continue; }
    if (my < 0 || h <= my) { continue; }
    if (f[my][mx] != '.') { continue; }

    rec(mx, my);
  }
}

int main() {
  while (cin >> w >> h, (w||h)) {
    for (int i=0; i<h; i++) {
      cin >> f[i];
    }

    cnt = 0;
    for (int y=0; y<h; y++) {
      for (int x=0; x<w; x++) {
        if (f[y][x] == '@') { rec(x, y); }
      }
    }

    cout << cnt << endl;
  }

  return 0;
}