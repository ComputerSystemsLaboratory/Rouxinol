#include <cstdio>

static const size_t n_max = 20, m_max = 2000;
bool dp[m_max + 1];

int main() {
  size_t n, q;
  scanf("%zu", &n);
  dp[0] = true;
  for (size_t i = 0; i < n; i++) {
    int a;
    scanf("%d", &a);
    for (int j = m_max - a; j >= 0; j--)
      if (dp[j])
        dp[j + a] = true;
  }
  scanf("%zu", &q);
  for (size_t i = 0; i < q; i++) {
    int m;
    scanf("%d", &m);
    puts(dp[m] ? "yes" : "no");
  }
  return 0;
}