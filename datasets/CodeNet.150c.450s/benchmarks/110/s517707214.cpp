#include <iostream>
#include <utility>
#include <queue>
using namespace std;

const int limit = 1000;
char grid[limit+1][limit+1];
int h, w, n;

class state{
public:
  int x, y, t;
  state(int x, int y, int t):
    x(x), y(y), t(t){}
};

int solve();
int bfs(int, int, int, int);

int main(){

  cout << solve() << endl;

  return 0;
}

int solve(){
  cin >> h >> w >> n;
  //スタート地点を取って来る
  int sx[n], sy[n];
  for(int i=0; i<h; i++){
    for(int j=0; j<w; j++) {
      cin >> grid[i][j];
      if(grid[i][j]=='.' || grid[i][j]=='X') continue;

      else if(grid[i][j]=='S'){
        sx[0] = j; sy[0] = i;
      }

      else{ //grid[i][j] == int
        int num = grid[i][j]-'0';
        sx[num] = j; sy[num] = i;
      }
    }
  }

  int ans=0;

  for(int i=0; i<n; i++){
    ans += bfs(sx[i], sy[i], sx[i+1], sy[i+1]);
  }

  return ans;
}

int bfs(int sx, int sy, int gx, int gy){
  bool visited[h][w];
  for(int i=0; i<h; i++){
    for(int j=0; j<w; j++) visited[i][j] = false;
  }

  queue<state> q;
  q.push(state(sx, sy, 0));
  visited[sy][sx] = true;

  int dx[] = {-1, 0, 1, 0}, dy[] = {0, -1, 0, 1};

  int ans;
  while(!q.empty()){
    state now = q.front(); q.pop();
    if(now.x==gx && now.y==gy){
      ans = now.t;
      break;
    }

    for(int i=0; i<4; i++){
      int nx = now.x+dx[i], ny = now.y+dy[i];
      if(!visited[ny][nx] && 0<=nx && nx<w && 0<=ny && ny<h && grid[ny][nx] != 'X'){
        visited[ny][nx] = true;
        q.push(state(nx, ny, now.t+1));
      }
    }
  }

  return ans;
}

