#include <cstdio>

const int N_BALL = 10;

int balls[N_BALL];

bool solve(int l[], int l_top, int r[], int r_top) {
  int bi = (l_top + 1) + (r_top + 1);
  if (bi == N_BALL) return true;

  l[l_top+1] = balls[bi];
  if (l_top >= 0 && l[l_top] > l[l_top+1]) return false;
  if (solve(l, l_top+1, r, r_top)) return true;
  l[l_top+1] = 0;

  r[r_top+1] = balls[bi];
  if (r_top >= 0 && r[r_top] > r[r_top+1]) return false;
  if (solve(l, l_top, r, r_top+1)) return true;;
  r[r_top+1] = 0;

  return false;
}

int main() {
  int N;
  scanf("%d", &N);

  for (int i = 0; i < N; i++) {
    for (int bi = 0; bi < N_BALL; bi++) scanf("%d", &balls[bi]);

    int left[N_BALL] = {}, right[N_BALL] = {};
    if (solve(left, -1, right, -1)) printf("YES\n");
    else printf("NO\n");
  }

  return 0;
}