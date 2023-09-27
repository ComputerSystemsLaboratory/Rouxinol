#include <algorithm>
#include <cstdio>
#include <cmath>
#include <limits>

#define int long long
#define dotimes(i, n) for (int i = 0; i < (n); i++)

using namespace std;

int rint() {
  int n;
  scanf("%lld", &n);
  return n;
}

void wint(int n) {
  printf("%lld\n", n);
}

signed main() {
  const int V = rint();
  const int E = rint();
  double dp[V][V];
  dotimes(s, V)
    dotimes(t, V)
      dp[s][t] = s == t ? 0 : numeric_limits<double>::infinity();
  dotimes(i, E) {
    int s = rint();
    int t = rint();
    dp[s][t] = static_cast<double>(rint());
  }
  dotimes(k, V) dotimes(i, V) dotimes(j, V)
    dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
  dotimes(i, V)
    if (dp[i][i] < 0.0) {
      puts("NEGATIVE CYCLE");
      return 0;
    }
  dotimes(s, V) dotimes(t, V) {
    if (::isinf(dp[s][t]))
      printf("INF");
    else
      printf("%lld", static_cast<int>(dp[s][t]));
    putchar(t == V - 1 ? '\n' : ' ');
  }
  return 0;
}

