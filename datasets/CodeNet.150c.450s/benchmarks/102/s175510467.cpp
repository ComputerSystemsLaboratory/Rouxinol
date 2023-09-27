#include <iostream>
using namespace std;

char map[20][20];

int W, H, start_x, start_y, ans = 0;

const int dx[] = {1, 0, -1, 0}, dy[] = {0, 1, 0, -1};

void dfs(int x, int y)
{
  ans++;
  if(map[x][y] != '#'){
    map[x][y] = '#';
    for(int i = 0; i < 4; i++){
      int next_x = x + dx[i], next_y = y + dy[i];
      if(next_x < W && next_x >= 0 && next_y < H && next_y >= 0){
	if(map[next_x][next_y] == '#')
	  continue;
	dfs(next_x, next_y);
      }else{
	continue;
      }
    }
  }
}

int main()
{
  while(1){
    cin >> W >> H;
    if(W == 0 && H == 0){
      break;
    }else{
      for(int i = 0; i < H; i++){
	for(int j = 0; j < W; j++){
	  cin >> map[j][i];
	  if(map[j][i] == '@'){
	    start_x = j;
	    start_y = i;
	  }
	}
      }
      dfs(start_x, start_y);
      cout << ans << endl;
      ans = 0;
    }
  }
}