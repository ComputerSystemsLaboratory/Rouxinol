//14:54
#include <stdio.h>
#include <queue>

using namespace std;

typedef pair<int,int> P;

int h, w, n;
char field[1000][1001];
queue<P> qu;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int d[1000][1000];


void init(){
  for(int i = 0; i < h; i++){
    for(int j = 0; j < w; j++){
      d[i][j] = -1;
    }
  }
  queue<P> empty;
  swap(qu,empty);
}

int solve(){
  int hp = 1;
  int cnt;
  init();
  for(int i = 0; i < h; i++){
    for(int j = 0; j < w; j++){
      if(field[i][j] == 'S'){
        qu.push(P(i,j));
        d[i][j] = 0;
      }
    }
  }
  while(qu.size()){
    P p = qu.front();
    qu.pop();
    int y = p.first;
    int x = p.second;
    if(hp == n + 1)
      return d[y][x];
    if(hp == field[y][x] - '0'){
      hp++;
      cnt = d[y][x];
      init();
      d[y][x] = cnt;
    }
    for(int i = 0; i < 4; i++){
      int ny = y + dy[i];
      int nx = x + dx[i];
      if(ny >= 0 && ny < h && nx >= 0 && nx < w && field[ny][nx] != 'X' && d[ny][nx] == -1){
        d[ny][nx] = d[y][x] + 1;
        qu.push(P(ny,nx));
      }
    }
  }
  return 0;
}

int main(){
  scanf("%d %d %d", &h, &w, &n);
  for(int i = 0; i < h; i++){
    scanf("%s", field[i]);
  }
  printf("%d\n", solve() - 1);
  return 0;
}