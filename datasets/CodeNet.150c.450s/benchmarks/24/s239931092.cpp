#include <cstdio>
#include <vector>
#include <algorithm>
#include <numeric>
#include <utility>
#include <tuple>

int testcase_ends() {
  size_t N;
  int M;
  scanf("%zu %d", &N, &M);
  if (N == 0 && M == 0) return 1;

  std::vector<std::pair<int, int>> e;
  for (size_t i = 0; i < N; ++i) {
    int D, P;
    scanf("%d %d", &D, &P);
    e.emplace_back(P, D);
  }

  std::sort(e.rbegin(), e.rend());
  int res = 0;
  for (auto const& ei: e) {
    int p, d;
    std::tie(p, d) = ei;
    if (M >= d) {
      M -= d;
      continue;
    }
    d -= M;
    M = 0;
    res += p * d;
  }
  printf("%d\n", res);
  return 0;
}

int main() {
  while (!testcase_ends()) {}
}

