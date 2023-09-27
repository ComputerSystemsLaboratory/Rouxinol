#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a), i##_max = (b); i < i##_max; ++i)
#define REP(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define ALL(obj) (obj).begin(), (obj).end()

using namespace std;

constexpr int INF = 1 << 30;
constexpr int MOD = 1000000007;

void dump(vector<int> &v) {
  REP(i, v.size()) {
    cout << v[i];
    if (i != v.size() - 1) cout << " ";
  }
  cout << endl;
}

void insert_sort(vector<int> &A) {
  FOR(i, 1, A.size()) {
    auto v = A[i];
    auto j = i - 1;
    while (j >= 0 && A[j] > v) {
      A[j+1] = A[j];
      j--;
    }
    A[j+1] = v;
    dump(A);
  }
}

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  REP(i, N) cin >> A[i];
  dump(A);
  insert_sort(A);
}

