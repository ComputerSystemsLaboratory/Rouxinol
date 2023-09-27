#include <iostream>

int H, W;
int map[20][20];
int c;
using namespace std;

void printArray();
void check(int, int);

int main() {
  while (true) {
    cin  >> W >> H;
    if ((W | H) == 0) {
      break;
    }
    int sy, sx;
    for (int i = 0; i < H; i++) {
      string line;
      cin >> line;
      for (int j = 0; j < W; j++) {
        if (line[j] == '@') {
          sy = i;
          sx = j;
          map[i][j] = 0;
        } else if (line[j] == '.') {
          map[i][j] = 0;
        } else if (line[j] == '#') {
          map[i][j] = 1;
        }
      }
    }
    // printArray();
    c = 0;
    check(sy, sx);
    // printArray();
    cout << c << endl;
  }
  return 0;
}

void check(int y, int x) {
  if (y < 0 || x < 0 || y >= H || x >= W || map[y][x] == 1) {
    return;
  }
  map[y][x] = 1;
  c++;
  check(y + 1, x);
  check(y - 1, x);
  check(y, x + 1);
  check(y, x - 1);
}

void printArray() {
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cout << map[i][j];
    }
    cout << endl;
  }
}