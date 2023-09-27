#include <bits/stdc++.h>
using namespace std;

const int dx[] = {1, 0, -1, 0, 1, 1, -1, -1}, dy[] = {0, 1, 0, -1, 1, -1, 1, -1};
int field[51][51];
int h, w;

void sol(int x, int y)
{
  field[x][y] = 0;
  for (int i = 0; i < 8; i++){
    if ((0 <= x + dx[i] && x + dx[i] < h) || (0 <= y + dy[i] && y + dy[i] < w))
    if (field[x + dx[i]][y + dy[i]] == 1) sol(x + dx[i], y + dy[i]);
  }
}

int main()
{

  while (cin >> w >> h, h || w){
    int res = 0;
    for (int i = 0; i < h; i++){
      for (int j = 0; j < w; j++){
        cin >> field[i][j];
      }
    }

    for (int i = 0; i < h; i++){
      for (int j = 0; j < w; j++){
        if (field[i][j] == 1){
          res++;
          sol(i, j);
        }
      }
    }
    cout << res << endl;
  }
}