#include<iostream>
using namespace std;
static const int MAX_H = 100;
static const int MAX_W = 100;
void dfs(int H, int W, int y, int x, char ch, char field[][MAX_W]){
  field[y][x] = '.';
  int dx[] = {1, 0, -1, 0};
  int dy[] = {0, -1, 0, 1};
  for(int i = 0; i < 4; i++){
    int nx = x + dx[i];
    int ny = y + dy[i];
    if(nx < 0 || nx >= W || ny < 0 || ny >= H) continue;
    if(field[ny][nx] == ch) dfs(H, W, ny, nx, ch, field);
  }
  return ;
}
int main(){
  for(;;){
    int H, W;
    char field[MAX_H][MAX_W];
    cin >> H >> W;
    if(H == 0 && W == 0) break;
    for(int i = 0; i < H; i++){
      for(int j = 0; j < W; j++){
	cin >> field[i][j];
      }
    }
    int cnt = 0;
    for(int i = 0; i < H; i++){
      for(int j = 0; j < W; j++){
	if(field[i][j] != '.'){
	  dfs(H, W, i, j, field[i][j], field);
	  cnt++;
	}
      }
    }
    cout << cnt << endl;
  }
  return 0;
}

