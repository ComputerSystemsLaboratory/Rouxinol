#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <cstdlib>
#include <typeinfo>


using namespace std;

const int SUP = -1;

typedef pair<int, int> P;

const int MAX_H = 1000;
const int MAX_W = 1000;
char field[MAX_H][MAX_W + 1];
int d[MAX_H][MAX_W];
int H, W, N;
int sx, sy;
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

int bfs(){

  int time = 0;

  for (int i = 1; i <= N; i++) {

    for (int i = 0; i < H; i++)
      for (int j = 0; j < W; j++) d[i][j] = SUP;

      queue<P> que;

      que.push(P(sx, sy));
      d[sx][sy] = 0;


      while (que.size()){

        P p = que.front(); que.pop();

        if (field[p.first][p.second]-'0' == i) {
          time += d[p.first][p.second];
          sx = p.first;
          sy = p.second;
          break;
        }

        for (int i = 0; i < 4; i++) {

          int nx = p.first + dx[i], ny = p.second + dy[i];

          if(0 <= nx && nx < H && 0 <= ny && ny < W && field[nx][ny] != 'X'&& d[nx][ny] == SUP){
            que.push(P(nx, ny));
            d[nx][ny] = d[p.first][p.second] + 1;
          }
        }
      }
  }
  return time;
}


int main(int argc, char const *argv[]) {
  cin >> H >> W >> N;

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> field[i][j];
      if (field[i][j] == 'S'){
        sx = i;
        sy = j;
      }
    }
  }

  cout << bfs() << endl;
}