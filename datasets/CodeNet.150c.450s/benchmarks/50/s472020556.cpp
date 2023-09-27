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
  const int coin[] = {500,100,50,10,5,1};
  vector<int> dp(1000,INF);
  dp[0] = 0;
  REP(i,1000)
    REP(k,6)
      if (i+coin[k] < 1000)
        dp[i+coin[k]] = min(dp[i+coin[k]], dp[i] + 1);
  int n;
  while(cin>>n,n) {
    cout << dp[1000-n] << endl;
  }
}