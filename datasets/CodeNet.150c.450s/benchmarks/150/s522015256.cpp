#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a), i##_max = (b); i < i##_max; ++i)
#define RFOR(i, a, b) for (int i = (b) - 1, i##_min = (a); i >= i##_min; --i)
#define REP(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define RREP(i, n) for (int i = (n) - 1; i >= 0; --i)
#define ALL(obj) (obj).begin(), (obj).end()

using namespace std;
using vi = vector<int>;
using i64 = int64_t;

constexpr int INF = 1 << 30;
constexpr int MOD = 1000000007;

template<typename T>
void print(vector<T> v) {
  REP(i, v.size()) {
    if (i) cout << " ";
    cout << v[i];
  }
  cout << endl;
}

void counting_sort(vi &A, vi &B, int k) {
  vi C(k+1);
  for(auto a : A) ++C[a];
  FOR(i, 1, k + 1) C[i] = C[i] + C[i-1];
  REP(i, A.size()) B[--C[A[i]]] = A[i];
}

int main() {
  int n;
  cin >> n;
  vi A(n), B(n);
  REP(i, n) cin >> A[i];
  counting_sort(A, B, 10000);
  print(B);
}

