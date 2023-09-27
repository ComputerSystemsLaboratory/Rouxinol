#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a), i##_max = (b); i < i##_max; ++i)
#define REP(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define ALL(obj) (obj).begin(), (obj).end()

using namespace std;
using i64 = int64_t;

constexpr int INF = 1 << 25;
constexpr int MOD = 1000000007;

int check(vector<int> &W, i64 P, int n, int k) {
  int i = 0;
  REP(j, k) {
    i64 s = 0;
    while (s + W[i] <= P) {
      s += W[i];
      ++i;
      if (i == n) return n;
    }
  }
  return i;
}

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> W(n);
  REP(i, n) cin >> W[i];
  
  i64 left = 0, mid, right = n * 10000;
  while (right - left > 1) {
    mid = (left + right) / 2;
    int v = check(W, mid, n, k);
    if (v >= n) right = mid;
    else left = mid;
  }
  
  cout << right << endl;
}

