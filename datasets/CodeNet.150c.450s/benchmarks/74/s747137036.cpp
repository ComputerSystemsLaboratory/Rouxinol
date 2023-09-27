#include <cstdio>
#include <algorithm>

using namespace std;

const int max_coins = 21;
const int max_price = 50001;
const int inf = 100000000;

int n, m;
int c[max_coins];
int num_coins[max_price][max_coins];

void solve() {
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= m; j++) {
      num_coins[i][j] = inf;
    }
  }
  for (int i = 0; i <= m; i++) {
    num_coins[0][i] = 0;
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      int p = i - c[j];
      int c1 = num_coins[i][j - 1];
      int c2 = inf;
      int c3 = inf;
      if (p >= 0) {
        c2 = num_coins[p][j - 1] + 1;
        c3 = num_coins[p][j] + 1;
      }
      num_coins[i][j] = min(min(c1, c2), c3);
    }
  }
  printf("%d\n", num_coins[n][m]);
}

int main() {
  scanf("%d%d", &n, &m);
  for (int i = 1; i <= m; i++) {
    scanf("%d", &c[i]);
  }
  solve();
  return 0;
}