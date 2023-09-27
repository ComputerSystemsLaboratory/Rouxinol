#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <vector>

const int W_LIM = 10000;

int n, k;
std::vector<int> w;

int check(int p) {
  int i = 0;
  for (int j = 0; j < k; ++j) {
    int s = 0;
    while (s + w[i] <= p) {
      s += w[i];
      ++i;
      if (i == n) return n;
    }
  }
  return i;
}

int solve() {
  int left = 0;
  int right = n * W_LIM;
  int mid;
  while (right - left > 1) {
    mid = left + (right - left) / 2;
    int v = check(mid);
    if (v >= n) right = mid;
    else left = mid;
  }
  return right;
}

int main() {
  std::scanf("%d%d", &n, &k);

  w.reserve(n);
  int x;
  for (int i = 0; i < n; ++i) {
    std::scanf("%d", &x);
    w.push_back(x);
  }

  int p = solve();
  std::printf("%d\n", p);
}

