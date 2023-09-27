#include <iostream>
#include <cstdio>

using namespace std;

int W, H;

int field[52][52];
bool visited[52][52];
int tx[] = {1, 1, 1, 0, -1, -1, -1, 0};
int ty[] = {1, 0, -1, -1, -1, 0, 1, 1};

void island(int y, int x)
{
  visited[y][x] = true;
  for (int i = 0; i < 8; i++) {
    if (!visited[y + ty[i]][x + tx[i]] && field[y + ty[i]][x + tx[i]] == 1) {
      island(y + ty[i], x + tx[i]);
    }
  }
}

void solve()
{
  fill_n(&visited[0][0], 52 * 52, false);
  int c = 0;
  for (int i = 1; i <= H; i++) {
    for (int j = 1; j <= W; j++) {
      if (!visited[i][j] && field[i][j] == 1) {
	island(i, j);
	c++;
      }
    }
  }
  printf("%d\n", c);
}

int main()
{
  while (scanf("%d %d ", &W, &H) == 2) {
    if (W == 0 && H == 0) {
      return 0;
    }
    fill_n(&field[0][0], 52 * 52, 0);
    for (int i = 1; i <= H; i++) {
      for (int j = 1; j <= W; j++) {
	scanf("%d ", &field[i][j]);
      }
    }
    solve();
  }
}