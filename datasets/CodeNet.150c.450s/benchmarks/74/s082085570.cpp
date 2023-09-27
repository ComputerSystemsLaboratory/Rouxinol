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
const int MAX_COST = 50010;
const int MAX_D = 25;
const int INF = 1e7;

void coinDP(int d, int *coins, int *dp){
  REP(i, MAX_COST + 1) dp[i] = INF;
  dp[0] = 0;
  REP(i, d)
    FOR(j, coins[i], MAX_COST+ 1)
      dp[j] = min(dp[j], dp[j - coins[i]] + 1);
}

int main() {
  int N, M, coins[MAX_D], dp[MAX_COST + 1]; cin >>N >>M;
  REP(i, M) cin >>coins[i];
  coinDP(M, coins, dp);
  cout <<dp[N] <<endl;
  return 0;
}