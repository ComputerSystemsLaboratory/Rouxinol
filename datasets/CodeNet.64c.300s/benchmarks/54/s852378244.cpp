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

typedef long long ll;

int main() {
  int n;
  cin >> n;
  int a[n];
  REP(i,n) 
    cin >> a[i];
  ll dp[n-1][21];
  memset(dp,0,sizeof(dp));
  dp[0][a[0]] = 1;
  for (int i=1; i<n-1; ++i) {
    REP(j,21) {
      if (j + a[i] <= 20)
        dp[i][j + a[i]] += dp[i-1][j];
      if (j - a[i] >= 0)
        dp[i][j - a[i]] += dp[i-1][j];
    }
  }
  cout << dp[n-2][a[n-1]] << endl;
}