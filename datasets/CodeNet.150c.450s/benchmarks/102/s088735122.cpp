#include <iostream>
#include <vector>
using namespace std;

char map[20][20];
int W, H;
int sh, sw;
int dw[4] = {-1, 0, 1, 0};
int dh[4] = {0, 1, 0, -1};
int cnt;

void print_map(){
  for(int i = 0; i < H; i++){
    for(int j = 0; j < W; j++){
      cout << map[i][j];
    }
    cout << endl;
  }
}

void solve(int w, int h){
  map[h][w] = '#';
  cnt++;
  for(int i = 0; i < 4; i++){
    int nh = h + dh[i], nw = w + dw[i];
    if(0 <= nh && nh < H && 0 <= nw && nw < W && map[nh][nw] == '.') solve(nw, nh);
  }
  return;
}

int main(void){
  while(true){
    cin >> W >> H;
    if(W == 0 && H == 0) break;
    cnt = 0;
    for(int i = 0; i < H; i++){
      for(int j = 0; j < W; j++){
        cin >> map[i][j];
        if(map[i][j] == '@'){
          sh = i;
          sw = j;
        }
      }
    }
    solve(sw, sh);
    cout << cnt << endl;
  }
  return 0;
}