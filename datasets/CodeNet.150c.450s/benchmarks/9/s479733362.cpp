#include <stdio.h>
#include <string.h>

void suffle(char* str, int h);

int main(void)
{
  char str[201];
  int count, i,h;

  scanf("%s", str);


  while(strcmp(str, "-")!=0) {
      scanf("%d", &count);
    for(i=0;i<count;i++) {
      scanf("%d", &h);
      suffle(str, h);
    }
    printf("%s\n", str);
    scanf("%s", str);
  }

  return 0;
}

void suffle(char* str, int h)
{
  char ue[201], shita[201];
  strcpy(shita, str);
  strcpy(ue, str+h);
  shita[h] = '\0';
  strcpy(str, ue);
  strcat(str, shita);
}