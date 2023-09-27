#include <iostream>
#include <string>

#define rep(i, n) for(int i = 0 ; i < n ; i++)
using namespace std;
void dfs(int x, int y);

int cnt = 0;
string data[20];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
int w, h;

int main()
{
    while(true){
      cin >> w >> h;
      if(w == 0 && h == 0) break;
      
      int sx, sy;
      for(int i = 0 ; i < h ; i++){
	cin >> data[i];
	for(int j = 0 ; j < w ; j++){
	  if(data[i][j] == '@'){
	    sx = j;
	    sy = i;
	  }
	}
      }
      dfs(sx, sy);
      cout << cnt << '\n';
      cnt = 0;
  }
}

void dfs(int x, int y)
{
  data[y][x] = '#';
  cnt++;

  rep(i, 4){
    int nx = x + dx[i], ny = y + dy[i];
    if(0 <= nx && nx < w && 0 <= ny && ny < h && data[ny][nx] == '.'){
      dfs(nx, ny);
    }
      }
}