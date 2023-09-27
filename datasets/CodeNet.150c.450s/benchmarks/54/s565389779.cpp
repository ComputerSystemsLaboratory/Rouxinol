#include <stdio.h>
#include <string.h>
#include <ctype.h>

void to_lower_str(char *str);

int main(void)
{
  char word[11], pw[1001];
  int wlen,count=0;

  scanf("%s", word);
  scanf("%s", pw);
  to_lower_str(word);
  wlen=strlen(word);

  while (strcmp(pw, "END_OF_TEXT")!=0) {
    to_lower_str(pw);
    if (strstr(pw, word)==pw && pw[wlen]=='\0')
      count++;
    scanf("%s", pw);
  }

  printf("%d\n", count);

  return 0;
}

void to_lower_str(char *str) {
  while(*str!='\0') {
    *str=tolower(*str);
    str++;
  }
}