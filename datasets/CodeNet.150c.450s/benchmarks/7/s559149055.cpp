#include <cstdio>

int main() {
  int h;
  int h1 = 0, h2 = 0, h3 = 0;

  while (scanf("%d", &h) != EOF) {
    if (h > h1) {
      h3 = h2;
      h2 = h1;
      h1 = h;
    } else if (h > h2) {
      h3 = h2;
      h2 = h;
    } else if (h > h3) {
      h3 = h;
    }
  }

  printf("%d\n%d\n%d\n", h1, h2, h3);

  return 0;
}
          
  