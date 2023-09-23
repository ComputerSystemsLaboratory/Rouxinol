#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <complex>
#include <cstring>
#include <cstdlib>
#include <string>
#include <cmath>
#include <queue>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()
const int INF = 1<<29;

int main() {
  int r, c;
  while (cin >> r >> c, r+c) {
    bool senbei[c][r];
    REP(i,r)
      REP(j,c)
        cin >> senbei[j][i];
    int ans = 0;
    for (int i=0; i<(1<<r); ++i) {
      int hoge = 0;
      REP(k,c) {
        int tmp = 0;
        REP(j,r)
          tmp += ((i >> j) & 1) ^ senbei[k][j];
        hoge += max(r-tmp,tmp);
      }
      ans = max(ans,hoge);
    }
    cout << ans << endl;
  }
}