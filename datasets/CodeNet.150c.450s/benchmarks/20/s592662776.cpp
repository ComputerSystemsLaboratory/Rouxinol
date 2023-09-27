#include <stdio.h>
int main(void)
{
  int s, hour, minute, second;
  scanf("%d", &s);
  hour = s / 3600;
  minute = (s % 3600) / 60;
  second = s % 60;
  printf("%d:%d:%d\n", hour, minute, second);
  return 0;
}