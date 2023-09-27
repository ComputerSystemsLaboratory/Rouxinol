#include <cstdio>
#include <cstring>

int main(){
  char s[300], p[300], t[300];

  scanf("%s", s);
  scanf("%s", p);

  strcpy(t, s);
  strcat(s, t);
  if (strstr(s, p)) {
    printf("Yes\n");
  }
  else {
    printf("No\n");
  }

  return 0;
}

