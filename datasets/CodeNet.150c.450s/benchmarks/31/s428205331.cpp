#include <cstdio>

int R[200000 + 10], n;

inline int max(int a, int b) {
  return (a > b) ? a : b;
}

inline int min(int a, int b) {
  return (a < b) ? a : b;
}

int main() {
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) { scanf("%d", &R[i]); }

  int vmin = R[0];
  int vmax = -1000000000;

  for (int i = 1; i < n; ++i) {
    vmax = max(vmax, R[i] - vmin);
    vmin = min(vmin, R[i]);
  }

  printf("%d\n", vmax);

  return 0;
}