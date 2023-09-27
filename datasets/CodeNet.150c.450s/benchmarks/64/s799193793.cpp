#include <cstdio>
#include <cstdlib>

int n, A[20];

int solve(int i, int m) {
  if (!m) return 1;
  if (!(n - i)) return 0;
  return solve(i + 1, m) || solve(i + 1, m - A[i]);
}

int main() {
  int q, m;
  std::scanf("%d", &n);
  for (int i = 0; i < n; ++i) std::scanf("%d", &A[i]);
  std::scanf("%d", &q);
  for (int i = 0; i < q; ++i) {
    std::scanf("%d", &m);
    std::printf("%s\n", solve(0, m) ? "yes" : "no");
  }
  return 0;
}

