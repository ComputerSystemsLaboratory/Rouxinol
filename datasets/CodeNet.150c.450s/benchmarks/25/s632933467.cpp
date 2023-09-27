#include <ctype.h>
#include <cstdio>

using namespace std;

int main() {
  int m[26] = {0};
  for (;;) {
    const int c = getchar();
    if (c == EOF)
      break;

    if (isupper(c)) {
      m[c - 'A']++;
    } else if (islower(c)) {
      m[c - 'a']++;
    }
  }
  for (int i = 0; i < 26; ++i)
    printf("%c : %d\n", i + 'a', m[i]);

  return 0;
}