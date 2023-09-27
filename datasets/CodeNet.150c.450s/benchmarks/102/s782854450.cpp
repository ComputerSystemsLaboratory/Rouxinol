#include <iostream>

int W, H;
int sx, sy;
char map[20][20];
int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
int cnt = 0;

void dfs(int y, int x){
  map[y][x] = '#';
  cnt++;
  for(int i=0; i < 4; i++){
    if(0 <= y + dy[i] && y + dy[i] < H && 0 <= x + dx[i] && x + dx[i]< W && map[y + dy[i]][x + dx[i]] == '.'){
      dfs(y + dy[i], x + dx[i]);
    }
  }
}



int main(void){
  while(1){
    std::cin >> W >> H;
    if(W == 0 && H == 0)  return 0;

    for(int i=0; i < H; i++){
      for(int j=0; j < W; j++){
        std::cin >> map[i][j];
        if(map[i][j] == '@'){
          sx = j; sy = i;
        }
      }
    }

    cnt = 0;
    dfs(sy, sx);

    std::cout << cnt << std::endl; 
  }
}