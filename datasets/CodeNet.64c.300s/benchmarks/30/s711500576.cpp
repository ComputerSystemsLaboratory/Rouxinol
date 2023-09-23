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
const int N = 1001;
const int C = 6;
const int INF = 1e9;

int main() {
  int dp[N];
  REP(i, N) dp[i] = INF;
  dp[0] = 0;
  int cs[C] = {1, 5, 10, 50, 100, 500};
  REP(i, C) FOR(j, cs[i], N) dp[j] = min(dp[j], dp[j - cs[i]] + 1);
  int N;
  while(cin >>N && N) cout <<dp[1000 - N] <<endl;
  return 0;
}