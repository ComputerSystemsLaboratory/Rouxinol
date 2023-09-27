#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int field[52][52];

void dfs(int y, int x)
{
  static const int dy[] = {-1, -1, -1, 0, 0, 1, 1, 1};
  static const int dx[] = {-1, 0, 1, -1, 1, -1, 0, 1};

  if (field[y][x] != 1)
    return;
  field[y][x] = 2;
  for (int i = 0; i < 8; ++i) {
    dfs(y+dy[i], x+dx[i]);
  }
}

int main()
{
  int w, h;
  while (scanf("%d%d", &w, &h), w|h) {
    memset(field, 0, sizeof(field));
    for (int i = 1; i <= h; ++i) {
      for (int j = 1; j <= w; ++j) {
        scanf("%d", &field[i][j]);
      }
    }
    int count = 0;
    for (int i = 1; i <= h; ++i) {
      for (int j = 1; j <= w; ++j) {
        if (field[i][j] == 1) {
          ++count;
          dfs(i, j);
        }
      }
    }
    printf("%d\n", count);
  }
}