#include <iostream>

using namespace std;

int dx[] = {0, 0, -1, 1, 1, 1, -1, -1};
int dy[] = {1, -1, 0, 0, 1, -1, 1, -1};

int w, h;
bool visited[50][50] = {};
int m[50][50];

void solve(int y, int x){
  
  m[y][x] = 0;
  for(int i = 0; i < 8; ++i){
    int nx = x + dx[i], ny = y + dy[i];
    if(nx >= 0 && nx < w && ny >= 0 && ny < h && m[ny][nx] == 1){
      solve(ny, nx);
    }
  }
}

int main(){

  while(true){
  cin >> w >> h;
  
  if(w == 0 && h == 0) break;

  for(int i = 0; i < h; ++i){
    for(int j = 0; j < w; ++j){
      cin >> m[i][j];
    }
  }

  

  int ans = 0;
  for(int i = 0; i < h; ++i){
    for(int j = 0; j < w; ++j){
      if(m[i][j] == 1){
        solve(i, j);
        ans++;
      }
    }    
  }

  cout << ans << endl;
  }
  return 0;
}

