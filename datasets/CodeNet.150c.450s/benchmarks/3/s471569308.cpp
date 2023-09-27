#include <stdio.h>
#include <string.h>
#define rep(i, a) for(int i = 0; i < a; ++i)

int main(void) {
  char s[1200], t[1200];
  int q, i, j, a, b;
  scanf("%s", s);
  scanf("%d", &q);
  rep(i, q) {
    scanf("%s %d %d", t, &a, &b);
    if(t[2] == 'i') {
      for(j = a; j <= b; ++j) printf("%c", s[j]);
      printf("\n");
    } else if(t[2] == 'v') {
      char d[1200];
      for(j = a; j <= b; ++j) d[j - a] = s[j];
      for(j = a; j <= b; ++j) s[j] = d[b - j];
    } else if(t[2] == 'p') {
      char p[1200];
      scanf("%s", p);
      for(j = a; j <= b; ++j) s[j] = p[j - a];
    }
  }
  return 0;
}
