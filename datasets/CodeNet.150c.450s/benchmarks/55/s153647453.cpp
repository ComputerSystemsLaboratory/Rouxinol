#include <cstdio>

using namespace std;

int main() {
  int x = 0;
  for (;;) {
    const int c = getchar();
    if (c == EOF)
      break;

    if (c == '\n') {
      if (!x)
        break;
      printf("%d\n", x);
      x = 0;
      continue;
    }
    const int n = c - 0x30;
    x += n;
  }

  return 0;
}