#include <iostream>

#define rep(i, n) for(int i = 0 ; i < n ; i++)

using namespace std;

int area[50][50], cnt = 0;
int w, h;

void dfs(int x ,int y)
{
  area[x][y] = 0;

  for(int dx = -1 ; dx <= 1 ; dx++){
    for(int dy = -1 ; dy <= 1 ; dy++){
      int nx = x + dx, ny = y + dy;

      if(0 <= nx && nx < w && 0 <= ny && ny < h && area[nx][ny] == 1){
	dfs(nx, ny);
      }
    }
  }
}

int main()
{
  while(true){
    cin >> w >> h;
    if(w == 0 && h == 0) break;

    rep(j, h){
      rep(i, w){
	cin >> area[i][j];
      }
    }

    rep(i, w){
      rep(j, h){
	if(area[i][j] == 1){
	  dfs(i, j);
	  cnt++;
	}
      }
    }
    
    cout << cnt << '\n';
    cnt = 0;
  }
}