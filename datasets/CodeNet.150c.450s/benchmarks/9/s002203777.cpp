#include <stdio.h>
#include <string.h>
#define rep(i, a) for(int i = 0; i < a; ++i)

int main(void) {
  char s[250], t[250];
  int m, i, j, n, a;
  while( 1 ) {
    scanf("%s", s);
    n = strlen(s);
    if(n == 1 && s[0] == '-') break;
    scanf("%d", &m);
    rep(i, m) {
      scanf("%d", &a);
      rep(j, a) t[j] = s[j];
      t[a] = 0;
      rep(j, (n - a)) s[j] = s[j + a];
      rep(j, a) s[j + n - a] = t[j];
    }
    printf("%s\n", s);
  }
  return 0;
}
