#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a), i##_max = (b); i < i##_max; ++i)
#define REP(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define ALL(obj) (obj).begin(), (obj).end()

using namespace std;

constexpr int INF = 1 << 30;
constexpr int MOD = 1000000007;

int selection_sort(vector<int> &A) {
  int cnt = 0;
  REP(i, A.size()) {
    auto minj = i;
    FOR(j, i, A.size()) {
      if (A[j] < A[minj]) minj = j;
    }
    swap(A[i], A[minj]);
    if (i != minj) ++cnt;
  }
  return cnt;
}

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  REP(i, N) cin >> A[i];
  auto cnt = selection_sort(A);
  REP(i, N) {
    if (i) cout << " ";
    cout << A[i];
  }
  cout << endl << cnt << endl;
}

