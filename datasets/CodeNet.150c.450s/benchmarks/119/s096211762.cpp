#include <iostream>
using namespace std;

int w, h, x, y, ans;
int mp[52][52];
int visited[52][52];
int dx[8] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy[8] = {-1, 1, 1, -1, 0, 1, -1, 0};


void bfs(int x, int y){
  int i;
  visited[y][x] = 1;
  for(i = 0; i < 8; i++){
    if(visited[y + dy[i]][x + dx[i]] == 0 && mp[y + dy[i]][x + dx[i]] == 1){
      bfs(x + dx[i], y + dy[i]);
    }
  }
}

int main(void){
  while(1){
    cin >> w >> h;
    if(w == 0) break;

    for(y = 0; y < h + 2; y++){
      if(y == 0 || y == h + 1){
        for(x = 0; x < w + 2; x++) mp[y][x] = 0;
      }else{
        for(x = 0; x < w + 2; x++){
          if(x == 0 || x == w + 1){
            mp[y][x] = 0;
          }else{
            cin >> mp[y][x];
          }
        }
      }
    }
    for(y = 0; y < h + 2; y++){
      for(x = 0; x < w + 2; x++){
        visited[y][x] = 0;
      }
    }
    ans = 0;
    for(y = 1; y < h + 1; y++){
      for(x = 1; x < w + 1; x++){
        if(mp[y][x] == 1 && visited[y][x] == 0){
          ans++;
          bfs(x, y);
        }
      }
    }
    cout << ans << endl;
  }
  return 0;
}

