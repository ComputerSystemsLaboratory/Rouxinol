#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <string>
#include <map>
#include <functional>
#include <cmath>
#include <cstdio>
using namespace std;

const int INF = 100000000;
typedef pair<int, int> P;
int sx, sy;

char _map[1000][1001];
int H, W;
char N;
char n = '1';

int d[1000][1000];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void init(){
  for(int i = 0; i < H; i++)
    for(int j = 0; j < W; j++)d[i][j] = INF;
}

int bfs(){
  int ans = 0;
  queue<P> que;
  init();
  que.push(P(sx, sy));
  d[sx][sy] = 0;

  while(que.size()){
    P p = que.front(); que.pop();
    if(_map[p.first][p.second] == n){
      if(n == N){
        ans += d[p.first][p.second];
        break;
      }else{
        ans += d[p.first][p.second];
        init();
        queue<P> empty;
        swap(que, empty);
        sx = p.first; sy = p.second;
        d[sx][sy] = 0;
        n++;
      }
    }
    for(int i = 0; i < 4; i++){
      int nx = p.first + dx[i], ny = p.second + dy[i];

      if(0 <= nx && nx < H && 0 <= ny && ny < W && _map[nx][ny] != 'X' && d[nx][ny] == INF){
        que.push(P(nx, ny));
        d[nx][ny] = d[p.first][p.second] + 1;
      }
    }
  }
  return ans;
}

void solve(){
  int res = bfs();
  cout << res << endl;
}

int main(){
  cin >> H >> W >> N;
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      cin >> _map[i][j];
      if(_map[i][j] == 'S'){
        sx = i; sy = j;
      }
    }
  }
  solve();
}