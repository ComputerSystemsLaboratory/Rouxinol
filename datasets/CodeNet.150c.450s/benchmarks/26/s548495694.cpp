#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d%d", &a, &b);
  char s;
  if(a > b) s = '>';
  else if(a == b) s = '=';
  else s = '<';
  if(s != '=')printf("a %c b\n", s);
  else printf("a == b\n");
  return 0;
}
