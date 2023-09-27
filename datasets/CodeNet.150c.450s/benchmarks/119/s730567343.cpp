#include<iostream>
#include<algorithm>
#include<map>
#include<set>
#include<vector>
#include<cstring>
#include<string>
#include<queue>
#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;

#define REP(i,a,n) for(int i = a ; i < n  ;i++)
#define rep(i,n) REP(i,0,n)

typedef long long ll;

#define MAX 100

int w, h;
int t[MAX][MAX];

int dx[8] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy[8] = {-1,1,-1, 0, 1, -1,  1, 0 };

bool destroy(int x, int y){
  if(t[y][x] == 0) return false;
  t[y][x] = 0;
  rep(i, 8){
    int nx = x + dx[i], ny = y + dy[i];
    if(nx < 0 || w <= nx || ny < 0 || h <= ny) continue;
    destroy(nx, ny);
  }
  return true;
}

void solve(){
  int res = 0;
  rep(i,h) rep(j,w) if(destroy(j,i)) res++;
  cout << res << endl;
}
int main(){
  while(cin >> w >> h){
    if( w==0 && h ==0) break;
    rep(i, h) rep(j, w) cin >> t[i][j];
    solve();
  }
}