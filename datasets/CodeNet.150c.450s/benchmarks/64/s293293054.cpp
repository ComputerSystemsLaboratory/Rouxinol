#include <stdio.h>

#define REP(i, n) for(int i = 0; i < n; i++)

int n, A[30];

int solve(int i, int m) {
  if(m == 0) return 1;
  if(i >= n) return 0;
  return solve(i + 1, m) || solve(i + 1, m - A[i]);
}

int main(void) {
  scanf("%d", &n);
  REP(i, n) {
    scanf("%d", &A[i]);
  }

  int q;
  scanf("%d", &q);
  int m;
  REP(i, q) {
    scanf("%d", &m);
    if(solve(0, m)) {
      printf("yes\n");
    } else {
      printf("no\n");
    }
  }

  return 0;
}