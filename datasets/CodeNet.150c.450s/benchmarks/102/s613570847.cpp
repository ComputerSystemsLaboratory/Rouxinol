#include <bits/stdc++.h>
using namespace std;

#define PI 4*atan(1)
#define INF 1e8

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int W, H;

int ans = 0;

void bfs(int x, int y, vector<vector<int>> &M){
  M[x][y] = INF;
  ans++;

  for(int i = 0; i < 4; i++){
    for(int j = 0; j < 4; j++){
      if(dx[i] == 0 || dy[j] == 0){
        int nx = x + dx[i], ny = y + dy[j];
        if(0 <= nx && nx < H && 0 <= ny && ny < W && M[nx][ny] == -1)bfs(nx, ny, M);
      }
    }
  }
  return;
}

int main(){
  while(cin >> W >> H, W||H){
    ans = 0;
    vector<string> S(H);
    vector<vector<int>> M(H, vector<int>(W, -1));
    for(int i = 0; i < H; i++){
      cin >> S[i];
    }
    for(int i = 0; i < H; i++){
      for(int j = 0; j < W; j++){
        if(S[i][j] == '#')M[i][j] = INF;
      }
    }

    pair<int, int> start;
    for(int i = 0; i < H; i++){
      for(int j = 0; j < W; j++){
        if(S[i][j] == '@'){
          start.first = i; start.second = j;
        }
      }
    }
    bfs(start.first, start.second, M);
    cout << ans << endl;
  }
}