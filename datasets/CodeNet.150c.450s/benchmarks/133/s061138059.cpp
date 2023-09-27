#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);

  int D;
  cin >> D;

  vector<int> C(26);
  for (int i = 0; i < 26; ++i) cin >> C[i];

  vector<vector<int>> S(D, vector<int>(26));
  for (int i = 0; i < D; ++i) {
    for (int j = 0; j < 26; ++j) {
      cin >> S[i][j];
    }
  }

  vector<int> T(D);
  for (int i = 0; i < D; ++i) {
    cin >> T[i];
    --T[i];
  }

  int64_t res = 0;
  vector<int> last(26);
  for (int i = 0; i < D; ++i) {
    res += S[i][T[i]];
    last[T[i]] = i + 1;
    for (int j = 0; j < 26; ++j) {
      res -= C[j] * (i + 1 - last[j]);
    }
    cout << res << endl;
  }

  return 0;
}

