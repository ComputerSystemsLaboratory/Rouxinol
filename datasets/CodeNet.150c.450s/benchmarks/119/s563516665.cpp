#include<bits/stdc++.h>
using namespace std;

int c[60][60];
bool visited[60][60];
int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};
int dy[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int h, w;

bool check(int x, int y){
  if(x < 0 || y < 0)return false;
  if(x >= w || y >= h)return false;
  if(visited[y][x])return false;
  if(c[y][x] == 0)return false;
  return true;
}

void dfs(int x, int y){ 
  if(!check(x, y))return;

  visited[y][x] = true;
  for(int i = 0; i < 8; i++){
    dfs(x + dx[i], y + dy[i]);
  }
}

int main(){
  while(cin >> w >> h, w || h){
    for(int i = 0; i < h; i++){
      for(int j = 0; j < w; j++){
        scanf("%d", &c[i][j]);
      }
    }

    for(int i = 0; i < h; i++){
      for(int j = 0; j < w; j++){
        visited[i][j] = false;
      }
    }

    int cnt = 0;
    for(int i = 0; i < h; i++){
      for(int j = 0; j < w; j++){
        if(!visited[i][j] && c[i][j] == 1){
          dfs(j, i);
          cnt++;
        }
      }
    }
    cout << cnt << endl;
  }
}