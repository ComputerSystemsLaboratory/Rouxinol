#include <stdio.h>
#include <string.h>

int main(void)
{
  char s[202], p[101], temp[101];

  scanf("%s", s);
  scanf("%s", p);

  strcpy(temp, s);
  strcat(s, temp);

  if(strstr(s,p)==NULL)
    printf("No\n");
  else
    printf("Yes\n");
  return 0;
}