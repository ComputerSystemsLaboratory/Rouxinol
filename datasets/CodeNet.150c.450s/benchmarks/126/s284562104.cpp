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
  int w,h;
  while(cin >> w >> h, w+h) {
    bool ba[w][h];
    memset(ba,0,sizeof(ba));
    int n;
    cin >> n;
    while(n--) {
      int a,b;
      cin >> a >> b;
      ba[a-1][b-1] = 1;
    }
    int dp[w][h];
    memset(dp,0,sizeof(dp));
    dp[0][0] = 1;
      
    REP(i,w) {
      REP(j,h) {
        if (ba[i][j]) continue;
        if (i>0)
          dp[i][j] += dp[i-1][j];
        if (j>0)
          dp[i][j] += dp[i][j-1];
      }
    }
    cout << dp[w-1][h-1] << endl;
  }
}