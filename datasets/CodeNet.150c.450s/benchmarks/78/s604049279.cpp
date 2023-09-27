#include <bits/stdc++.h>

constexpr int LIMIT = 1000000;
int dp1[LIMIT], dp2[LIMIT];

void solve() {
  std::fill(dp1, dp1 + LIMIT, 100);
  std::fill(dp2, dp2 + LIMIT, 100);
  dp1[0] = dp2[0] = 0;
  for (int n = 1; n < 200; ++n) {
    int const tet = n * (n + 1) * (n + 2) / 6;
    for (int i = 0; i + tet < LIMIT; ++i) {
      dp1[i + tet] = std::min(dp1[i + tet], dp1[i] + 1);
      if (tet % 2) {
        dp2[i + tet] = std::min(dp2[i + tet], dp2[i] + 1);
      }
    }
  }
}

int main() {
  solve();
  int N;
  while (std::cin >> N && N) {
    std::cout << dp1[N] << " " << dp2[N] << std::endl;
  }
  return 0;
}