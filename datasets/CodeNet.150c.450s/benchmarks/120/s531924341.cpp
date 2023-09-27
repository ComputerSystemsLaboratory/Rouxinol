#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

const int MAX_R = 10;
const int MAX_C = 10000;

int R, C;
bool osenbei[MAX_R][MAX_C];

void reverse_row(int row)
{
  for (int i = 0; i < C; i++)
    osenbei[row][i] = !osenbei[row][i];
}

void reverse_col(int col)
{
  for (int i = 0; i < R; i++)
    osenbei[i][col] = !osenbei[i][col];
}

int count_row(int row)
{
  int res = 0;

  for (int i = 0; i < C; i++)
    if (osenbei[row][i]) res++;

  return res;
}

int count_col(int col)
{
  int res = 0;

  for (int i = 0; i < R; i++)
    if (osenbei[i][col]) res++;

  return res;
}

int dfs(int row) {
  if (row == R) {
    int res = 0;

    for (int c = 0; c < C; c++) {
      int count = count_col(c);
      res += max(count, R - count);
    }

    return res;
  }
  else {
    int res = dfs(row + 1);

    reverse_row(row);
    res = max(res, dfs(row + 1));
    reverse_row(row);

    return res;
  }
}

int solve()
{
  return dfs(0);
}

int main()
{
  while (true) {
    scanf("%d %d", &R, &C);

    if (R == 0 && C == 0) break;

    for (int r = 0; r < R; r++) {
      for (int c = 0; c < C; c++) {
        int d;
        scanf("%d", &d);
        osenbei[r][c] = d == 0;
      }
    }
    printf("%d\n", solve());
  }

  return 0;
}
