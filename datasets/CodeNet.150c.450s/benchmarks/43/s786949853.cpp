#include <cstdio>

int N;
int C[10000][2];

void solve() {
  int a = 0;
  int b = 0;
  for (int i = 0; i < N; i++) {
    int ac = C[i][0];
    int bc = C[i][1];
    if (ac > bc) {
      a += ac + bc;
    } else if (ac < bc) {
      b += ac + bc;
    } else {
      a += ac;
      b += bc;
    }
  }
  printf("%d %d\n", a, b);
}

int main() {
  for (;;) {
    scanf("%d", &N);
    if (N == 0) { break; }

    for (int i = 0; i < N; i++) {
      scanf("%d%d", &C[i][0], &C[i][1]);
    }
    solve();
  }
}