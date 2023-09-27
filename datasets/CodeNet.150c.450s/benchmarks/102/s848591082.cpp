#include <bits/stdc++.h>
using namespace std;

bool flags[21][21];
char maps[21][21];
int W, H;
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

int dfs(int x, int y)
{
  if(x < 0 || y < 0 || x >= H || y >= W || flags[x][y] || maps[x][y] == '#')return 0;

  flags[x][y] = true;
  int sum = 0;
  for(int i = 0; i < 4; i++){
    sum += dfs(x + dx[i], y + dy[i]);
  }
  
  return sum + 1;
}

int main()
{
  while(cin >> W >> H && !((W * H) == 0))
    {
      memset(maps, 0, 21 * 21 * sizeof(char));
      memset(flags, 0, 21 * 21 * sizeof(bool));

      int sx, sy;

      for(int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++) {
          cin >> maps[i][j];
          if(maps[i][j] == '@'){
            sx = i;sy = j;
          }
        }
      }
      cout << dfs(sx, sy) << endl;
    }
  return 0;
}