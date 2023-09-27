#include <iostream>
#include <complex>
#include <sstream>
#include <string>
#include <algorithm>
#include <deque>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <vector>
#include <set>
#include <limits>
#include <cstdio>
#include <cctype>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;
#define REP(i, j) for(int i = 0; i < (int)(j); ++i)
#define FOR(i, j, k) for(int i = (int)(j); i < (int)(k); ++i)
#define SORT(v) sort((v).begin(), (v).end())
#define REVERSE(v) reverse((v).begin(), (v).end())
typedef complex<double> P;

int knapsack(int N, int W, int *v, int *w){
  int dp[N + 1][W + 1];
  memset(dp, -1, sizeof(dp));
  dp[0][0] = 0;
  REP(i, N){
    REP(j, W + 1){
      if(dp[i][j] < 0) continue;
      dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);
      if(j + w[i] <= W) dp[i + 1][j + w[i]] = max(dp[i + 1][j + w[i]], dp[i][j] + v[i]);
    }
  }
  int ans = 0;
  REP(i, W + 1) ans = max(ans, dp[N][i]);
  return ans;
}

int main() {
  int N, W; cin >>N >>W;
  int v[N], w[N];
  REP(i, N) cin >>v[i] >>w[i];
  cout <<knapsack(N, W, v, w) <<endl;
  return 0;
}