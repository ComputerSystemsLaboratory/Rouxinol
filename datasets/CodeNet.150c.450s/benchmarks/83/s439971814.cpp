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

int main() {
  int N, W;
  cin >> N >> W;

  int dp[N + 10][W + 10];
  int vi[N + 1];
  int wi[N + 1];

  REP(i, N) {
    cin >> vi[i + 1] >> wi[i + 1];
  }

  REP (w, W + 1) {
    REP (i, N + 1) {
      dp[i][w] = 0;
    }
  }
  for (int i = 1; i <= N; i++) {
    for (int w = 0; w <= W; w++) {
      if (w - wi[i] < 0) {
        dp[i][w] = dp[i - 1][w];
        continue;
      }
      dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - wi[i]] + vi[i]);
    }
  }

  // REP (i, N + 1) {
  //   REP (w, W + 1) {
  //     if (w) cout << " ";
  //     cerr << dp[i][w];
  //   }
  //   cerr << endl;
  // }

  cout << dp[N][W] << endl;
  return 0;
}