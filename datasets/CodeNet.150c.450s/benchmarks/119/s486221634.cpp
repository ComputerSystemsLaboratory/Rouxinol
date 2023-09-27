#include <bits/stdc++.h>
using namespace std;
vector<string>v;
vector<int>ansl;
string s;
int ary[100005] = {0};
int mp[51][51];
int cnt = 0;
int d_x[] = {0,1,0,-1};
int d_y[] = {1,0,-1,0};
int W,H;

void dfs(int x,int y){
  mp[y][x] = 0;
  for(int dx = -1;dx<2;dx++){
    for(int dy = -1;dy<2;dy++){
    int nx = x+dx,ny = y+dy;
    if((nx>=0)&&(ny>=0)&&(ny<H)&&(nx<W)&&(mp[ny][nx] == 1)){
      dfs(nx,ny);
    }
  }
}
}
int main(){
  cin >>W>>H;

  while((W!=0)&&(H!=0)){
    cnt = 0;
    for(int i = 0;i<51;i++){
      for(int j = 0;j<51;j++){
        mp[i][j] = 0;
      }
    }
    for(int i = 0;i<H;i++){
      for(int j = 0;j<W;j++){
        cin >>mp[i][j];
      }
    }
    for (int y = 0; y < H; y++){
      for (int x = 0; x < W; x++) {
        if (mp[y][x] == 1) {
          dfs(x, y);
          cnt++;
        }
      }
    }
    cout <<cnt<<endl;
    cin >>W>>H;
  }
  return 0;
}

