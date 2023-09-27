#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int R, C;
int O[10][10000];

int calc(unsigned patt) {
  int res = 0;
  for (int i = 0; i < C; i++) {
    int cnt = 0;
    for (int j = 0; j < R; j++) {
      if (O[j][i] != ((patt & (1u << j)) != 0 ? true : false)) {
        ++cnt;
      }
    }
    res += max(cnt, R - cnt);
  }
  return res;
}

void solve() {
  int ans = 0;
  for (unsigned patt = 0; patt < (1u << R); patt++) {
    ans = max(ans, calc(patt));
  }
  printf("%d\n", ans);
}

int main() {
  for (;;) {
    scanf("%d%d", &R, &C);
    if (R == 0 && C == 0) {
      break;
    }

    for (int i = 0; i < R; i++) {
      for (int j = 0; j < C; j++) {
        int k = 0;
        scanf("%d", &k);
        O[i][j] = k == 1 ? true : false;
      }
    }
    solve();
  }

  return 0;
}