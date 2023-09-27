#include <cstdio>
#include <cstring>

int main(){
  int ans;
  char s[2000];

  while (1) {
    ans = 0;
    scanf("%s", s);
    if (s[0] == '0') {
      break;
    }
    for (int i = 0; i < strlen(s); i++) {
      ans += s[i] - '0';
    }
    printf("%d\n", ans);
  }

  return 0;
}
