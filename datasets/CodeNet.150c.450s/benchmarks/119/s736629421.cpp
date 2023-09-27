#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <string>
#include <map>
#include <functional>
#include <cmath>
#include <cstdio>
using namespace std;

#define PI 4*atan(1)

int w,h;
int c[50][50];

void dfs(int i, int j){
  c[i][j] = 0;
  for(int dx = -1; dx <= 1; dx++){
    for(int dy = -1; dy <= 1; dy++){
      int nx = i + dx, ny = j + dy;
      if(0 <= nx && nx < h && 0 <= ny && ny < w && c[nx][ny] == 1){
        dfs(nx, ny);
      }
    }
  }
}

void solve(){
  int cnt = 0;
  for(int i = 0; i < h; i++){
    for(int j = 0; j < w; j++){
      if(c[i][j] == 1){
        dfs(i, j);
        cnt++;
      }
    }
  }
  cout << cnt << endl;
}

int main(){
  while(cin >> w >> h && w, h){
    for(int i = 0; i < h; i++){
      for(int j = 0; j < w; j++){
        cin >> c[i][j];

      }
    }
    solve();
  }
}