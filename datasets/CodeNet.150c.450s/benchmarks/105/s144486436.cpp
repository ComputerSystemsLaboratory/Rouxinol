#include <iostream>
#include <vector>

using namespace std;

using ull = unsigned long long;

#define Rep(i, n) for(int i = 0; i < (int)(n); ++i)

int solve() {
  int N;
  cin >> N;

  vector<ull> A(N);
  Rep(n, N) cin >> A[n];

  string S;
  cin >> S;

  vector<ull> basis;
  for (int n = N - 1; n >= 0; n--) {
    ull a = A[n];
    for (auto b : basis) {
      a = min(a, a ^ b);
    }
    if (a != 0) {
      if (S[n] == '0') {
        basis.push_back(a);
      } else if (S[n] == '1') {
        return 1;
      } else {
        abort();
      }
    }
  }

  return 0;
}

int main() {
  int T;
  cin >> T;
  Rep(t, T) {
    cout << solve() << endl;
  }
  return 0;
}
