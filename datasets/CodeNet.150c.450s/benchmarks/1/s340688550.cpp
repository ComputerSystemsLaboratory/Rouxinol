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
const int INF = 1000000001;

int LIS(int N, int *a){
  int dp[N];
  fill(dp, dp + N, INF);
  REP(i, N) *lower_bound(dp, dp + N, a[i]) = a[i];
  return lower_bound(dp, dp + N, INF) - dp;
}

int main() {
  int N; cin >>N;
  int a[N];
  REP(i, N) cin >>a[i];
  cout <<LIS(N, a) <<endl;
  return 0;
}