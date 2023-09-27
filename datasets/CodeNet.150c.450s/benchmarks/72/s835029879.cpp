#include <stdio.h>
#include <string.h>
#define rep(i, a) for(int i = 0; i < a; ++i)

int main(void) {
  char s[1500];
  int i, j = 0;
  while(scanf("%s", s) != EOF) {
    if(j) printf(" ");
    else j = 1;
    rep(i, strlen(s)) {
      if(s[i] >= 'a' && s[i] <= 'z') printf("%c", s[i] + 'A' - 'a');
      else if(s[i] >= 'A' && s[i] <= 'Z') printf("%c", s[i] + 'a' - 'A');
      else printf("%c", s[i]);
    }
  }
  printf("\n");
  return 0;
}
