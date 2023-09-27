#include <bits/stdc++.h>

using namespace std;

int w, h;
int maps[50][50];

int dx[] = {0, 1, 0, -1, 1, 1, -1, -1};
int dy[] = {1, 0, -1, 0, 1, -1, 1, -1};

void dfs(int x, int y)
{
  maps[y][x] = 0;
  for(int i = 0; i < 8; i++){
    int nx = x + dx[i], ny = y + dy[i];
    if(0 <= nx && nx < w && 0 <= ny && ny < h && maps[ny][nx] == 1)
      dfs(nx, ny);
  }
  return;
}

int main()
{
  while(cin >> w >> h, w || h){
    for(int i = 0; i < h; i++)
      for(int j = 0; j < w; j++)
	cin >> maps[i][j];

    int cnt = 0;
    for(int i = 0; i < h; i++)
      for(int j = 0; j < w; j++)
	if(maps[i][j] == 1)
	  cnt++, dfs(j, i);
    
    cout << cnt << endl;
  }
  return 0;
}