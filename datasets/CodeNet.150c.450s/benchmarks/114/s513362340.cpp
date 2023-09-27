#include <iostream>
#include <set>

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

const int INF = 1 << 21;
const int SIZE = 101;
int a[SIZE][SIZE];

int prim(int n) {
  int d[n], p[n], state[n];

  rep(i, n) {
    d[i] = INF;
    p[i] = -1;
    state[i] = 0;
  }

  d[0] = 0;

  while (1) {
    int minv = INF, u = -1;

    rep(i, n) {
      if (d[i] < minv && state[i] != 1) {
        minv = d[i];
        u = i;
      }
    }

    if (u == -1) break;
    state[u] = 1;

    rep(i, n) {
      if (a[u][i] != INF && state[i] != 1) {
        if (d[i] > a[u][i]) {
          d[i] = a[u][i];
          p[i] = u;
        }
      }
    }
  }

  int sum = 0;
  rep(i, n) {
    if (p[i] != -1) { sum += a[i][p[i]]; }
  }

  return sum;
}

int main() {
  int n;
  std::cin >> n;

  rep(i, n) rep(j, n) {
    int m;
    std::cin >> m;
    if (m == -1) m = INF;
    a[i][j] = m;
  }

  std::cout << prim(n) << '\n';

  return 0;
}

