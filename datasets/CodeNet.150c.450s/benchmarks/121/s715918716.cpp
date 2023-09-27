#include <iostream>
using namespace std;

int H, W;
char farms[101][101];
const int X[4] = {-1, 0, 0, 1};
const int Y[4] = {0, -1, 1, 0};

void dfs(int x, int y){
  char f = farms[x][y];
  farms[x][y] = '.';
  for (int i = 0; i < 4; i++) {
      int nx = x + X[i], ny = y + Y[i];
      if (0 <= nx && nx < H && 0 <= ny && ny < W && farms[nx][ny] == f){
        dfs(nx, ny);
    }
  }
  return ;
}


int solve(){
  int res = 0;
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (farms[i][j] != '.'){
        dfs(i, j);
        res++;
      }
    }
  }
  return res;
}

int main() {
  for (int i = 0; i < 101; i++) {
    for (int j = 0; j < 101; j++) {
      farms[i][j] = '.';
    }
  }
  cin >> H >> W;
  while (!(H == 0 && W == 0)){
    for (int i = 0; i < H; i++) {
      for (int j = 0; j < W; j++) {
        cin >> farms[i][j];
      }
    }
    cout << solve() << endl;
    cin >> H >> W;
  }
  return 0;
}