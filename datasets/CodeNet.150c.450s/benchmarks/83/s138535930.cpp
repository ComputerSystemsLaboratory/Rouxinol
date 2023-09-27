#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <ctime>

using namespace std;

typedef long long ll;
typedef vector<int> VI;
typedef pair<int, int> PI;
const double EPS = 1e-9;
#define rep(i,s,n) for(int i=(s); i < int(n); ++i)

const int N = 101;
const int V = 1e5 + 1;
int v[N], w[N];
int n, wlim;
int tv[N];

int dp[N][V];
const int INF = 0x2fffffff;
const int DEBUG = 0;

int solve(void) {
  dp[0][0] = 0;
  int total_v = 1;
  rep(i, 0, n) {
    total_v += v[i];
  }
  rep(j, 1, total_v) {
    dp[0][j] = INF;
  }
  rep(i, 1, n + 1) {
    rep(j, 0, total_v) {
      int res = dp[i-1][j];
      int val = v[i-1];
      int wei = w[i-1];
      if (val <= j) {
	res = min(res, dp[i - 1][j - val] + wei);
      } else {
	res = min(res, wei);
      }
      if(DEBUG) {
	cout << "dp[" << i << "][" << j << "] = " << res << endl;
      }
      dp[i][j] = res;
    }
  }
  int q = 0;
  rep(i,0,total_v) {
    if (dp[n][i] <= wlim) {
      q = i;
    }
  }
  if(DEBUG) {
    cout << "q = " << q << endl;
  }
  int rem = q;
  int sum = 0;
  for (int i = n; i > 0; --i) {
    int val = v[i-1];
    int wei = w[i-1];
    if (val <= rem && dp[i][rem] - wei == dp[i - 1][rem - val]) {
      // output (i - 1)
      sum += tv[i - 1];
      rem -= val;
    }
  }
  return sum;
}


int main(void) {
  cin >> n >> wlim;
  double max_v = 0.0;
  rep(i, 0, n) {
    cin >> tv[i] >> w[i];
    max_v = max(max_v, (double) tv[i]);
  }
  double k = 200;
  double scale = max(1.0, max_v / (k + 1) / n);
  rep(i, 0, n) {
    v[i] = (int) floor(tv[i] / scale);
  }
  cout << solve() << endl;
}