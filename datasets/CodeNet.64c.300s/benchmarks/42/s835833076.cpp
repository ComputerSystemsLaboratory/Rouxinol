#include <iostream>
#include <cstring>
using namespace std;

int t[21][21];
int n, m, x, y, l, sum, nx, ny;
char d;

void pick(int x, int y) {
  if(t[x][y] == 1) sum++;
  t[x][y] = 0;
}

void move() {
  if(d == 'W') {
    for(int i = 0; i < l; ++i) {
      nx = nx - 1;
      pick(nx, ny);
    }
  }
  else if(d == 'E') {
    for(int i = 0; i < l; ++i) {
      nx = nx + 1;
      pick(nx, ny);
    }
  }
  else if(d == 'N') {
    for(int i = 0; i < l; ++i) {
      ny = ny + 1;
      pick(nx, ny);
    }
  }
  else if(d == 'S') {
    for(int i = 0; i < l; ++i) {
      ny = ny - 1;
      pick(nx, ny);
    }
  }
}

int main() {
  while(cin >> n && n) {
    memset(t, 0, sizeof(t));
    nx = 10; ny = 10; sum = 0;

    for(int i = 0; i < n; ++i) {
      cin >> x >> y;
      t[x][y] = 1;
    }
    cin >> m;

    for(int i = 0; i < m; ++i) {
      cin >> d >> l;
      move();
    }
    cout << (sum == n ? "Yes" : "No") << endl;
  }
  return 0;
}

