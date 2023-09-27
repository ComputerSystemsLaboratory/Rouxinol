#include <iostream>

int w, h;
int map[50][50];

void dfs(int y, int x){
  map[y][x] = 0;
  for(int dy=-1; dy <= 1; dy++){
    for(int dx=-1; dx <= 1; dx++){
      if(0 <= y+dy && y+dy < h && 0 <= x+dx && x+dx < w && map[y+dy][x+dx] == 1){
        dfs(y+dy, x+dx);
      }
    }
  }
}

int main(void){
  while(1){
    int cnt = 0;
    std::cin >> w >> h;
    if(w == 0 && h == 0)  return 0;
    for(int i=0; i < h; i++){
      for(int j=0; j < w; j++){
        std::cin >> map[i][j];
      }
    }

    for(int i=0; i < h; i++){
      for(int j=0; j < w; j++){
        if(map[i][j] == 1){
          cnt++;
          dfs(i, j);
        }
      }
    }

    std::cout << cnt << std::endl;

  }
}