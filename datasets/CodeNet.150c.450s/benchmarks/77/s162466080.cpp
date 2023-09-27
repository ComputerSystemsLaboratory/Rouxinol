#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <functional>

using namespace std;

#define rep(i,n) for((i)=0;(i)<(int)(n);(i)++)
#define foreach(itr,c) for(__typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++)

int N,M,nx,ny;
int field[31][31];
const int dy[4] = {1,0,-1,0}, dx[4] = {0,1,0,-1}; // N E S W
map<char,int> mp; // <cmd, identifier>

int func(char cmd, int move){
  int ret = 0;

  mp['N'] = 0; mp['E'] = 1; mp['S'] = 2; mp['W'] = 3;

  while(move--){
    nx += dx[mp[cmd]];
    ny += dy[mp[cmd]];
    if(field[ny][nx] == 1){ ret++; field[ny][nx] = 0; }
  }

  return ret;
}

int main(){
  int i,j;

  while(1){
    rep(i,31) rep(j,31) field[i][j] = 0;

    cin >> N; if(N == 0) break;
    rep(i,N){
      int x,y;
      cin >> x >> y;
      field[y][x] = 1;
    }

    char cmd;
    int move, get = 0;
    cin >> M;
    nx = 10; ny = 10;
    while(M--){
      cin >> cmd >> move;
      get += func(cmd,move);
    }

    cout << ((N == get) ? "Yes" : "No") << endl;
  }

  return 0;
}