#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)

using namespace std;

int d4x[] = {0, 1, 0, -1};
int d4y[] = {-1, 0, 1, 0};

int W, H;
int reachable(vector<string>& map, int x, int y){
  //cout << x << "," << y << endl;
  map[y][x] = '#';
  int res = 0;
  rep(i, 4){
    int sx = d4x[i] + x, sy = d4y[i] + y;
    if(0 <= sx && sx < W && 0 <= sy && sy < H){
      if(map[sy][sx] != '#'){
        res += reachable(map, sx, sy);
      }
    }
  }
  return res + 1;
}

int main(){
  while(cin >> W >> H, W != 0){
    vector<string> map(H);
    rep(i, H) cin >> map[i];
    int gy, gx;
    rep(y, H) {
      rep(x, W) {
        if (map[y][x] == '@'){
          gy = y; gx = x;
          break;
        }
      }
    }
    //cout << "OK" << endl;
    cout << reachable(map, gx, gy) << endl;
  }
}