#include <stdio.h>
#include <string.h>
#define rep(i, a) for(int i = 0; i < a; ++i)

int main(void) {
  char w[20], t[1200];
  char s[100] = "END_OF_TEXT";
  int ans = 0;
  scanf("%s", w);
  rep(i, strlen(w)) if(w[i] >= 'A' && w[i] <= 'Z') w[i] += 'a' - 'A';
  while( scanf("%s", t) != EOF ) {
    if(!strcmp(t, s)) break;
    rep(i, strlen(t)) if(t[i] >= 'A' && t[i] <= 'Z') t[i] += 'a' - 'A';
    if(!strcmp(w, t)) ++ans;
  }
  printf("%d\n", ans);
  return 0;
}
