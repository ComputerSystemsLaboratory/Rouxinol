#include <cstdio>
#include <vector>
#include <numeric>

int testcase_ends() {
  int N, M, P;
  scanf("%d %d %d", &N, &M, &P);
  if (N == 0 && M == 0 && P == 0) return 1;

  --M;
  std::vector<int> a(N);
  for (auto& ai: a) scanf("%d", &ai);
  if (a[M] == 0) return puts("0"), 0;
  int sum = std::accumulate(a.begin(), a.end(), 0) * (100-P);
  printf("%d\n", sum / a[M]);
  return 0;
}

int main() {
  while (!testcase_ends()) {}
}

