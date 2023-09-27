#include <ctype.h>
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
    if (isdigit(c))
      x += c - '0';  // convert a character to an integer                                                                                                                 
  }

  return 0;
}