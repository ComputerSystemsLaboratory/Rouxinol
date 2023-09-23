#include <stdio.h>

int h, w;
char map[101][101];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int ans[20];
void dfs(int i, int j, char tree){
  map[i][j] = '.';
  int x, y;
  for(int l = 0; l < 4; l++){
    x = j + dx[l];
    y = i + dy[l];
    if(y < h && y >= 0 && x < w &&  x >= 0 && map[y][x] == tree){
      dfs(y,x,tree);
    }
  }
  return;
}

int solve(){
  int sum = 0;
  for(int i = 0; i < h; i++){
    for(int j = 0; j < w; j++){
      if(map[i][j] != '.'){
        dfs(i, j, map[i][j]);
        sum++;
      }
    }
  }
  return sum;
}

int main(){
  int n = 0;
  while(true){
    scanf("%d %d", &h, &w);
    if(h == 0 && w == 0)
      break;
    for(int i = 0; i< h; i++){
      scanf("%s",map[i]);
    }
    ans[n++] = solve();
  }
  for(int i = 0; i < n; i++){
    printf("%d\n",ans[i]);
  }
  return 0;
}