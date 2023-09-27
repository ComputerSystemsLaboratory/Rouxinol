#include <iostream>
#include <queue>
using namespace std;

int map[50][50];

typedef pair<int, int> pxy;

int h, w, ans = 0;

const int dx[] = {1, 0, -1, 0, 1, 1, -1, -1}, dy[] = {0, 1, 0, -1, -1, 1, 1, -1}; 

void bfs(int sx, int sy)
{
  queue<pxy> q;
  q.push(pxy(sx, sy)); 
  while(!q.empty()){
    int x, y;
    x = q.front().first;
    y = q.front().second;
    q.pop();
    if(map[x][y]){
      map[x][y] = 0;
      for(int i = 0; i < 8; i++){
	int next_x = x + dx[i], next_y = y + dy[i];
	if(map[next_x][next_y] && next_x < w && next_x >= 0 && next_y < h && next_y >= 0){
	  q.push(pxy(next_x, next_y));
	}
      }
    }
  }
}

int main()
{
  while(1){
    cin >> w >> h;
    if(w == 0 && h == 0){
      break;
    }else{
      for(int i = 0; i < h; i++)
	for(int j = 0; j < w; j++)
	  cin >> map[j][i];
      for(int i = 0; i < h; i++)
	for(int j = 0; j < w; j++)
	  if(map[j][i]){
	    ans++;
	    bfs(j, i);
	  }
      cout << ans << endl;
      ans = 0;
    }
  }
}