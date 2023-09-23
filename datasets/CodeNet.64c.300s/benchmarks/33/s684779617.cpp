#include <stdio.h>
int main(void) {
  int a[100000], b[100000];
  int i, num;
  char ch[100000][2];

  i = 0;  num = 0;
  do {
    scanf("%d %s %d", &a[i], ch[i], &b[i]);
    num++;
    i++;
  } while (ch[i - 1][0] != '?');

  for (i = 0; i < num; i++) {
    if (ch[i][0] == '+')
      printf("%d\n", a[i] + b[i]);
    else if (ch[i][0] == '-')
      printf("%d\n", a[i] - b[i]);
    else if (ch[i][0] == '*')
      printf("%d\n", a[i] * b[i]);
    else if (ch[i][0] == '/')
      printf("%d\n", a[i] / b[i]);
  }

  return 0;
}