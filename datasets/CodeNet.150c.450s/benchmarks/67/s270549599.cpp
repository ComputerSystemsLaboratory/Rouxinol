#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  while (cin >> N, N) {
    auto s = vector<int>(N, 0);
    for (int i = 1; i < N; ++i) s[i] = s[i - 1] + i;
    int ans = 0;
    for (int l = 0; l < N; ++l) {
      for (int r = l + 1; r < N; ++r) {
        if (s[r] - s[l] == N) ++ans;
      }
    }
    cout << ans << endl;
  }
  return 0;
}

