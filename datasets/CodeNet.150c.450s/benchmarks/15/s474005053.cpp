#include <cstdio>

int main() {
  int n;
  scanf("%d", &n);
  int s[n];
  for (int i = 0; i < n; ++i)
    scanf("%d", &s[i]);

  int q;
  scanf("%d", &q);
  int t[q];
  for (int i = 0; i < q; ++i)
    scanf("%d", &t[i]);

  int c = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < q; ++j)
      if (s[i] == t[j]) {
        ++c;
        t[j] = t[q - 1];
        --q;
      }
  }

  printf("%d\n", c);
}