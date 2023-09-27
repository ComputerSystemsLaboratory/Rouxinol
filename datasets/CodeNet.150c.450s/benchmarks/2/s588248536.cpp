#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a), i##_max = (b); i < i##_max; ++i)
#define REP(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define ALL(obj) (obj).begin(), (obj).end()

using namespace std;
using vi = vector<int>;
using i64 = int64_t;

constexpr int INF = 1 << 30;
constexpr int MOD = 1000000007;

template <typename T>
void print(vector<T> v) {
  REP(i, v.size()) {
    if (i) cout << " ";
    cout << v[i];
  }
  cout << endl;
}

int partition(vi &A, int p, int r) {
  auto x = A[r];
  auto i = p - 1;
  FOR(j, p, r) {
    if (A[j] <= x) swap(A[++i], A[j]);
  }
  swap(A[i + 1], A[r]);
  return i + 1;
}

int main() {
  int n;
  cin >> n;
  vi A(n);
  REP(i, n) cin >> A[i];
  auto q = partition(A, 0, n - 1);

  REP(i, A.size()) {
    if (i) cout << " ";
    if (i == q) cout << "[";
    cout << A[i];
    if (i == q) cout << "]";
  }
  cout << endl;
}
