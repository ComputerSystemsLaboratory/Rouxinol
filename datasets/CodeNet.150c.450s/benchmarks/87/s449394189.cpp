#include <cstdio>
#include <cstdint>
#include <vector>
#include <queue>

int nya(std::vector<std::vector<int>>& a) {
  size_t h = a.size();
  int res = 0;
  for (size_t i = 0; i < h; ++i) {
    size_t l = 2;
    size_t r = 2;
    if (a[i][1] == a[i][2]) {
      l = 1;
      if (a[i][0] == a[i][1]) l = 0;
    }
    if (a[i][3] == a[i][2]) {
      r = 3;
      if (a[i][4] == a[i][3]) r = 4;
    }
    if (r-l+1 < 3) continue;

    res += a[i][2] * (r-l+1);
    for (size_t j = l; j <= r; ++j) a[i][j] = 0;
  }

  for (size_t j = 0; j < 5; ++j) {
    std::queue<int> q;
    for (size_t i = h; i--;) {
      if (a[i][j]) q.push(a[i][j]);
      a[i][j] = 0;
    }
    size_t i = h-1;
    while (!q.empty()) {
      int t = q.front();
      q.pop();
      a[i--][j] = t;
    }
  }
  return res;
}

int testcase_ends() {
  size_t n;
  scanf("%zu", &n);
  if (n == 0) return 1;

  std::vector<std::vector<int>> a(n, std::vector<int>(5));
  for (auto& ai: a)
    for (auto& aij: ai)
      scanf("%d", &aij);

  int res = 0;
  while (true) {
    int kieta = nya(a);
    if (!kieta) break;
    res += kieta;
  }
  printf("%d\n", res);
  return 0;
}

int main() {
  while (!testcase_ends()) {}
}

