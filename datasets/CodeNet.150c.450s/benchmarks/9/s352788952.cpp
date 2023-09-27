#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

inline void rotate(char* dst, const char* src, size_t len, int h) {
  memmove(dst, src + h, len - h);
  memmove(dst + len - h, src, h);
}

int main() {
  char buf1[200];
  char buf2[200];

  for (;;) {
    cin >> buf1;
    if (buf1[0] == '-')
      break;
    const size_t len = strnlen(buf1, 200);

    int m;
    cin >> m;
    int h;

    const char* src = buf1;
    char* tgt = buf2;
    for (int i = 0; i < m; ++i) {
      cin >> h;

      if (i % 2 == 1) {
        src = buf2;
        tgt = buf1;
      } else {
        src = buf1;
        tgt = buf2;
      }
      rotate(tgt, src, len, h);
    }
    printf("%s\n", tgt);
  }

  return 0;
}