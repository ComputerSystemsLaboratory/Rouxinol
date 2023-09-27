#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a), i##_max = (b); i < i##_max; ++i)
#define REP(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define ALL(obj) (obj).begin(), (obj).end()

using namespace std;
using i64 = int64_t;

constexpr int INF = 1 << 25;
constexpr int MOD = 1000000007;

bool solve(vector<int> &A, int i, int m) {
  if (m == 0) return true;
  if (m < 0 || i >= A.size()) return false;
  return solve(A, i+1, m) || solve(A, i+1, m-A[i]);
}

int main() {
  int n, q, m;
  cin >> n;
  vector<int> A(n);
  REP(i, n) cin >> A[i];
  cin >> q;
  REP(i, q) {
    cin >> m;
    cout << (solve(A, 0, m) ? "yes" : "no") << endl;
  }  
}

