#include "bits/stdc++.h"
#define int long long
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define REP(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
#define FOR(i, a) for (auto &i: a)
#define ALL(obj) begin(obj), end(obj)
#define MAX(x) *max_element(ALL(x))
#define MIN(x) *min_element(ALL(x))
#define sum(x) accumulate(ALL(x), 0LL)
#define LOWER_BOUND(A, key) distance(A.begin(), lower_bound(ALL(A), key))
#define UPPER_BOUND(A, key) distance(A.begin(), upper_bound(ALL(A), key))

using namespace std;
const int MOD    = (int)(1e9 + 7);
const int INF    = (int)(1e13 + 7);
const double EPS = 1e-14;
const double PI  = acos(-1);

int CEIL(int a, int b) { return (a >= 0 ? (a + (b - 1)) / b : (a - (b - 1)) / b); } //ceil() for int
int mod(int a, int b) { return a >= 0 ? a % b : a - (b * CEIL(a, b)); }             //always return positive num
int bpm(int a, int b) {                                                             //return x^y in order(log(y))
  int res = 1;
  for (a %= MOD; b; a = a * a % MOD, b >>= 1)
    if (b & 1) res = res * a % MOD;
  return res;
}

struct LIS {
private:
  vector<int> temp;

public:
  vector<int> dp;
  LIS(vector<int> &a) {
    temp = a;
    dp.assign(temp.size(), INF);
  }
  int lis() { //return length of LIS
    int ret = 0;
    rep(i, temp.size()) {
      int ind = distance(begin(dp), lower_bound(ALL(dp), temp[i]));
      dp[ind] = temp[i];
      ret     = max(ret, ind + 1);
    }
    return ret;
  }
  void restoration() { //make dp LIS
    while (dp[dp.size() - 1] == INF) dp.pop_back();
  }
};

signed main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  LIS lis(a);
  cout << lis.lis() << endl;
}
