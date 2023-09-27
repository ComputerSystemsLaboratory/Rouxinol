#include <algorithm>
#include <iostream>
#include <limits.h>
#include <stdlib.h>
#include <string>
#include <vector>

#define el endl
#define fd fixed
#define INF INT_MAX/2-1
#define pb push_back

using namespace std;

bool tile[20][20];
bool visited[20][20];

void visit(int x, int y) {
  visited[y][x] = true;
  if (x > 0 && tile[y][x-1] && !visited[y][x-1]) visit(x-1, y);
  if (x < 19 && tile[y][x+1] && !visited[y][x+1]) visit(x+1, y);
  if (y > 0 && tile[y-1][x] && !visited[y-1][x]) visit(x, y-1);
  if (y < 19 && tile[y+1][x] && !visited[y+1][x]) visit(x, y+1);
}

int main() {
  int w, h, x, y, count;
  string tmp;
  while (cin >> w >> h, w | h) {
    for (int i = 0; i < 20; i++) {
      for (int j = 0; j < 20; j++) {
        visited[i][j] = false;
        tile[i][j] = false;
      }
    }
    for (int i = 0; i < h; i++) {
      cin >> tmp;
      for (int j = 0; j < w; j++) {
        if (tmp[j] == '.') {
          tile[i][j] = true;
        } else if (tmp[j] == '@') {
          x = j;
          y = i;
          tile[i][j] = true;
        }
      }
    }
    visit(x, y);
    count = 0;
    for (int i = 0; i < 20; i++) {
      for (int j = 0; j < 20; j++) {
        if (visited[i][j]) count++;
      }
    }
    cout << count << el;
  }
}