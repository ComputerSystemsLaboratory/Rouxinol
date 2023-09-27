#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a), i##_max = (b); i < i##_max; ++i)
#define REP(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
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

struct Card { char suit; int num; };

bool operator==(Card lhs, Card rhs) {
  return lhs.suit == rhs.suit && lhs.num == rhs.num;
}

void merge(vector<Card> &A, int left, int mid, int right) {
  auto n1 = mid - left;
  auto n2 = right - mid;
  vector<Card> L(n1 + 1), R(n2 + 1);
  copy(A.begin() + left, A.begin() + mid, L.begin());
  copy(A.begin() + mid, A.begin() + right, R.begin());
  L[n1].num = INF;
  R[n2].num = INF;
  int i = 0, j = 0;
  FOR(k, left, right) {
    A[k] = (L[i].num <= R[j].num) ? L[i++] : R[j++];
  }
}

void merge_sort(vector<Card> &A, int left, int right) {
  if (left + 1 < right) {
    int mid = (left + right) / 2;
    merge_sort(A, left, mid);
    merge_sort(A, mid, right);
    merge(A, left, mid, right);
  }
}

int partition(vector<Card> &A, int p, int r) {
  auto x = A[r].num;
  auto i = p - 1;
  FOR(j, p, r) {
    if (A[j].num <= x) swap(A[++i], A[j]);
  }
  swap(A[i + 1], A[r]);
  return i + 1;
}

void quick_sort(vector<Card> &A, int p, int r) {
  if (p < r) {
    auto q = partition(A, p, r);
    quick_sort(A, p, q - 1);
    quick_sort(A, q + 1, r);
  }
}

int main() {
  int n;
  cin >> n;
  vector<Card> A1(n);
  REP(i, n) cin >> A1[i].suit >> A1[i].num;
  auto A2 = A1;
  quick_sort(A1, 0, n - 1);
  merge_sort(A2, 0, n);
  cout << (equal(ALL(A1), A2.begin()) ? "Stable" : "Not stable") << endl;
  for(auto a : A1) {
    cout << a.suit << " " << a.num << endl;
  }
}

