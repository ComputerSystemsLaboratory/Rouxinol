#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <complex>
#include <cstring>
#include <cstdlib>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()

int w,h;
int dx[] = {0,1,1,1,0,-1,-1,-1};
int dy[] = {-1,-1,0,1,1,1,0,-1};
int ba[50][50];

void go(int x, int y) {
  if (ba[x][y]==0) return;
  ba[x][y]=0;
  REP(i,8) {
    int xx=x+dx[i];
    int yy=y+dy[i];
    if (xx<0||w<=xx||yy<0||h<=yy) continue;
    if (ba[xx][yy]==1)
      go(xx,yy);
  }
}




int main() {
  while(cin>>w>>h,w+h) {
    REP(y,h)
      REP(x,w)
      cin >> ba[x][y];
    int ans = 0;
    REP(y,h) {
      REP(x,w) {
        if (ba[x][y]) {
          go(x,y);
          ans++;
        }
      }
    }
    cout << ans << endl;
  }

}