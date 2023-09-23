#include <cstdio>

const int N_BALL = 10;

int balls[N_BALL];

bool solve(int l_top, int r_top, int n) {
  if (n == N_BALL) return true;

  int l_top_ = balls[n];
  if (l_top > l_top_) return false;
  if (solve(l_top_, r_top, n+1)) return true;

  int r_top_ = balls[n];
  if (r_top > r_top_) return false;
  if (solve(l_top, r_top_, n+1)) return true;

  return false;
}

int main() {
  int N;
  scanf("%d", &N);

  for (int i = 0; i < N; i++) {
    for (int bi = 0; bi < N_BALL; bi++) scanf("%d", &balls[bi]);

    if (solve(-1, -1, 0)) printf("YES\n");
    else printf("NO\n");
  }

  return 0;
}