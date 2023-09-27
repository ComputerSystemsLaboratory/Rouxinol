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

bool island[50][50];
bool visited[50][50];

void visit(int x, int y) {
  visited[y][x] = true;
  if (x > 0 && island[y][x-1] && !visited[y][x-1]) visit(x-1, y);
  if (x < 49 && island[y][x+1] && !visited[y][x+1]) visit(x+1, y);
  if (y > 0 && island[y-1][x] && !visited[y-1][x]) visit(x, y-1);
  if (y < 49 && island[y+1][x] && !visited[y+1][x]) visit(x, y+1);
  if (x > 0 && y > 0 && island[y-1][x-1] && !visited[y-1][x-1]) visit(x-1, y-1);
  if (x > 0 && y < 49 && island[y+1][x-1] && !visited[y+1][x-1]) visit(x-1, y+1);
  if (x < 49 && y > 0 && island[y-1][x+1] && !visited[y-1][x+1]) visit(x+1, y-1);
  if (x < 49 && y < 49 && island[y+1][x+1] && !visited[y+1][x+1]) visit(x+1, y+1);
}

int main() {
  int w, h, tmp, cnt;
  while (cin >> w >> h, w | h) {
    for (int i = 0; i < 50; i++) {
      for (int j = 0; j < 50; j++) {
        island[i][j] = false;
        visited[i][j] = false;
      }
    }
    cnt = 0;

    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        if (cin >> tmp, tmp)
          island[i][j] = true;
      }
    }
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        if (island[i][j] && !visited[i][j]) {
          visit(j, i);
          cnt++;
        }
      }
    }
    cout << cnt << el;
  }
}