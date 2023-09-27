#include <cstdio>

using namespace std;

int main() {
  for (;;) {
    const int c = getchar();                                                                                                                                              
    if (c == '\n')
      break;

    if ('a' <= c && c <= 'z')
      printf("%c", c - 0x20);
    else if ('A' <= c && c <= 'Z')
      printf("%c", c + 0x20);
    else
      printf("%c", c);
  }
  printf("\n");
  return 0;
}