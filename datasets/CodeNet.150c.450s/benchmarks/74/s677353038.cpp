#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <string>
#include <cstring>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

// ---------------------
// repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)

// debug
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

// ---------------------
#define INF 922337203685477580
#define IINF (1<<21)
typedef long long ll;

int dp[22][50100];
int n, m;
int coin[22];

int main() {
  cin >> n >> m;
  REP(i, m) {
    cin >> coin[i + 1];
  }

  REP(i, 50100) {
    dp[0][i] = IINF;
  }
  REP(i, 22) {
    dp[i][0] = 0;
  }

  // coin, kane

  FOR(c, 1, m + 1) {
    FOR(k, 1, n + 1) {
      if (k - coin[c] >= 0) {
        dp[c][k] = min(dp[c][k - coin[c]] + 1, dp[c - 1][k]);
      } else {
        dp[c][k] = dp[c - 1][k];
      }
    }
  }




  cout << dp[m][n] << endl;
  return 0;
}