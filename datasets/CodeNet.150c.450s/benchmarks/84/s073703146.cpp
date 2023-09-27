#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a), i##_max = (b); i < i##_max; ++i)
#define REP(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define ALL(obj) (obj).begin(), (obj).end()

using namespace std;
using vi = vector<int>;
using i64 = int64_t;

constexpr int INF = 1 << 30;
constexpr int MOD = 1000000007;

i64 cnt = 0;

template <typename T>
void print(vector<T> v) {
  REP(i, v.size()) {
    if (i) cout << " ";
    cout << v[i];
  }
  cout << endl;
}

void merge(vi &A, int left, int mid, int right) {
  auto n1 = mid - left;
  auto n2 = right - mid;
  vi L(n1 + 1), R(n2 + 1);
  copy(A.begin() + left, A.begin() + mid, L.begin());
  copy(A.begin() + mid, A.begin() + right, R.begin());
  L[n1] = INF;
  R[n2] = INF;
  int i = 0, j = 0;
  FOR(k, left, right) {
    if (L[i] <= R[j]) {
      A[k] = L[i++];
    } else {
      A[k] = R[j++];
      cnt += n1 - i;
    }
  }
}

void merge_sort(vi &A, int left, int right) {
  if (left + 1 < right) {
    int mid = (left + right) / 2;
    merge_sort(A, left, mid);
    merge_sort(A, mid, right);
    merge(A, left, mid, right);
  }
}

int main() {
  int n;
  cin >> n;
  vi S(n);
  REP(i, n) cin >> S[i];
  merge_sort(S, 0, n);
  cout << cnt << endl;
}
