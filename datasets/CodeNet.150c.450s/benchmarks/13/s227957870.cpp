#include <cstdio>
#include <iostream>

using namespace std;

static int read(char* const a) {
  char* ptr = a;
  int len = 0;
  for (;;) {
    const int c = getchar();
    if (c == EOF || c == '\n')
      break;
    *ptr++ = c;
    ++len;
  }
  return len;
}

static bool find(int pos,
                 const char* p, int len_p,
                 const char* s, int len_s) {
  const char* q = &p[pos];
  const char* end = &p[len_p];
  int cnt = 0;
  for (int j = 0; j < len_s; ++j) {
    if (*q != s[j])
      return false;

    ++q;
    if (q == end)
      q = p;
  }
  return true;
}

int main() {
  char p[100] = {0};
  char s[100] = {0};

  const int len_p = read(p);
  const int len_s = read(s);

  bool found = false;
  const char* p_end = &p[len_p];
  for (int i = 0; i < len_p; ++i) {
    if (find(i, p, len_p, s, len_s)) {
      found = true;
      break;
    }
  }

  if (found)
    printf("Yes\n");
  else
    printf("No\n");
  return 0;
}