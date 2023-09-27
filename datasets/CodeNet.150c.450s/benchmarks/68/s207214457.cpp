#include <cstdio>
#include <cstdint>
#include <cstdlib>
#include <vector>
#include <algorithm>

int testcase_ends() {
  size_t n;
  scanf("%zu", &n);
  if (n == 0) return 1;

  std::vector<int> a(n);
  for (auto& ai: a) scanf("%d", &ai);
  std::sort(a.begin(), a.end());

  int res = 1e7;
  for (size_t i = 1; i < n; ++i)
    res = std::min(res, std::abs(a[i]-a[i-1]));

  printf("%d\n", res);
  return 0;
}

int main() {
  while (!testcase_ends()) {}
}

