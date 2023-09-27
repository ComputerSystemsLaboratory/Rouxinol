#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a), i##_max = (b); i < i##_max; ++i)
#define REP(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define ALL(obj) (obj).begin(), (obj).end()

using namespace std;

constexpr int INF = 1 << 30;
constexpr int MOD = 1000000007;

struct Card {
  char suit, value;
};

bool operator==(const Card &lhs, const Card &rhs) {
  return lhs.suit == rhs.suit && lhs.value == rhs.value;
}

void dump(vector<Card> &C) {
  REP(i, C.size()) {
    if (i) cout << " ";
    cout << C[i].suit << C[i].value;
  }
  cout << endl;
}

void bubble_sort(vector<Card> &C) {
  REP(i, C.size()) {
    for (int j = C.size() - 1; j >= i; --j) {
      if (C[j].value < C[j - 1].value) {
        swap(C[j], C[j - 1]);
      }
    }
  }
}

void selection_sort(vector<Card> &C) {
  REP(i, C.size()) {
    auto minj = i;
    FOR(j, i, C.size()) {
      if (C[j].value < C[minj].value) minj = j;
    }
    swap(C[i], C[minj]);
  }
}

int main() {
  int N;
  cin >> N;
  vector<Card> C1(N);
  REP(i, N) cin >> C1[i].suit >> C1[i].value;
  auto C2 = C1;

  // bubble sort
  bubble_sort(C1);
  dump(C1);
  cout << "Stable" << endl;

  // selection sort
  selection_sort(C2);
  dump(C2);
  cout << (equal(C1.begin(), C1.end(), C2.begin()) ? "Stable" : "Not stable")
       << endl;
}
