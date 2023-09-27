/**
 * @copyright (c) 2020 Daisuke Hashimoto
 */

#include <bits/stdc++.h>
using namespace std;
using Pair = pair<int64_t, int64_t>;
constexpr int64_t kInf = INT64_MAX / 2L;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  constexpr int64_t kN = 26;
  int64_t D;
  cin >> D;
  vector<int64_t> C(kN + 1, 0);
  for (int64_t c = 1; c <= kN; ++c) {
    cin >> C[c];
  }
  vector<vector<int64_t>> S(D + 1, vector<int64_t>(kN + 1));
  for (int64_t d = 1; d <= D; ++d) {
    for (int64_t c = 1; c <= kN; ++c) {
      cin >> S[d][c];
    }
  }
  vector<vector<int64_t>> last(D + 1, vector<int64_t>(kN + 1, 0));
  vector<int64_t> contests(D + 1);
  for (int64_t d = 1; d <= D; ++d) {
    cin >> contests[d];
  }

  auto Score = [&](const int64_t day) -> int64_t {
    int64_t score = 0;
    for (int64_t d = 1; d <= day; ++d) {
      last[d] = last[d - 1];
      last[d][contests[d]] = d;
      score += S[d][contests[d]];
      for (int64_t c = 1; c <= kN; ++c) {
        score -= C[c] * (d - last[d][c]);
      }
    }
    return score;
  };

  for (int64_t d = 1; d <= D; ++d) {
    cout << Score(d) << endl;
  }
  return 0;
}
