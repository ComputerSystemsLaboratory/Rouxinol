#include <cstdio>

int main() {
  int n;
  while (scanf("%d", &n) != EOF && n) {
    char C[200];
    for (auto i=0; i<200; i++) {
      C[i] = (char)i;
    }
    for (auto i=0; i<n; i++) {
      char a, b;
      scanf(" %c %c", &a, &b);
      C[(int)a] = b;
    }
    int m;
    scanf("%d", &m);
    for (auto j=0; j<m; j++) {
      char d;
      scanf(" %c", &d);
      printf("%c", C[(int)d]);
    }
    printf("\n");
  }
}