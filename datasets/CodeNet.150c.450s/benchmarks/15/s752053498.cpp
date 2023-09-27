#include <cstdio>

bool LinearSearch(int n, int s[], int ti) {
  if (s[n - 1] == ti) {
    return true;
  }
  int i = 0;
  s[n - 1] = ti;
  while (s[i] != ti) {
    ++i;
  }
  if (i == n - 1) {
    return false;
  }
  return true;
}

int main() {
  int n;
  scanf("%d", &n);
  int s[n];
  for (int i = 0; i < n; ++i) {
    scanf("%d", &s[i]);
  }
  int q;
  scanf("%d", &q);
  int t[q];
  for (int i = 0; i < q; ++i) {
    scanf("%d", &t[i]);
  }

  int counter = 0;
  for (int i = 0; i < q; ++i) {
    if (LinearSearch(n, s, t[i])) {
      ++counter;
    }
  }

  printf("%d\n", counter);
}