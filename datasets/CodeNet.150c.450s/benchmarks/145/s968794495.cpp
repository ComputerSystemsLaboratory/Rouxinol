#include <stdio.h>
#include <string.h>

int main(void) {
  char s[40], ans[1200][40], maxm = 0, maxl = 0;
  int now = 0, i, j, k, n[1200];
  while(scanf("%s", s) != EOF) {
    int t = 1;
    for(i = 0; i < now; ++i) if(!strcmp(s, ans[i])) {
      n[i]++, t = 0;
      break;
    }
    if(t) {
      strcpy(ans[now], s);
      n[now] = 1;
      now++;
    }
  }
  for(i = 0; i < now; ++i) {
    if(maxm < n[i]) maxm = n[i];
    if(maxl < strlen(ans[i])) maxl = strlen(ans[i]);
  }
  char ansm[40], ansl[40];
  for(i = 0; i < now; ++i) {
    if(maxm == n[i]) strcpy(ansm, ans[i]);
    if(maxl == strlen(ans[i])) strcpy(ansl, ans[i]);
  }
  printf("%s %s\n", ansm, ansl);
  return 0;
}
