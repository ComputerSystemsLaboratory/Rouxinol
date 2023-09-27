#include <cstdio>

int main() {
  char c;
  while (true) {
    scanf("%c", &c);
    if (c == '\n') break;
    if (c >= 65 && c <= 90)
      c += 32;
    else if (c >= 97 && c <= 122)
      c -= 32;
    printf("%c", c);
  }
  printf("\n");
  return 0;
}

