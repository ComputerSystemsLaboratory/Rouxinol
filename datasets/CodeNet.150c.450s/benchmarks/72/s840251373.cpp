#include <stdio.h>
#include <ctype.h>
int main(void) {
  char ch;
  char temp, i;

  i = 0;
  while (1) {
    scanf("%c", &ch);

    if (islower(ch)) {
      printf("%c", toupper(ch));
    } else if (isupper(ch)) {
      printf("%c", tolower(ch));
    } else if (ch == '\n') {
      break;
    } else {
      printf("%c", ch);
    }
  }

  puts("");

  return 0;
}