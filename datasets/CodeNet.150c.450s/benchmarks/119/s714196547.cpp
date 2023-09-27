#include <iostream>
using namespace std;

const int limit=55;
int grid[limit][limit];
int w, h;
int dx[] = {-1, 0, 1, 0, -1, -1, 1, 1}, dy[] = {0, -1, 0, 1, -1, 1, -1, 1};

void dfs(int, int);

int main(){
  while(cin >> w >> h, w!=0 && h!=0){
    //グリッドに情報格納
    for(int i=0; i<h; i++){
      for(int j=0; j<w; j++) cin >> grid[i][j];
    }

    int cnt=0;
    for(int i=0; i<h; i++){
      for(int j=0; j<w; j++){
        if(grid[i][j]==1){
          dfs(i, j);
          cnt++;
        }
      }
    }
    cout << cnt << endl;
  }

  return 0;
}

void dfs(int y, int x){
  if(grid[y][x]==0) return;
  if(y<0 || y>=h || x<0 || x>=w) return;

  grid[y][x] = 0;

  for(int i=0; i<8; i++){
    int ny = y+dy[i], nx = x+dx[i];
    dfs(ny, nx);
  }
}

