#include <cstdio>
#include <cstring>

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)

int main () {
  char str[21];
  scanf("%s", str);
  int l = strlen(str);
  char str_r[21];
  REP(i, l) str_r[i] = str[l-i-1];
  str_r[l] = '\0';
  printf("%s\n", str_r);
  return 0;
}