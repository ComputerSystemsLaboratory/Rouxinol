#include <stdio.h>
int main(void) {
  char s;
  int count_alpha[26] = {0};
  int i;

  while ((s = getchar()) != EOF) {
    if ('a' <= s && s <= 'z') {
      count_alpha[s - 'a']++;
    } else if ('A' <= s && s <= 'Z') {
      count_alpha[s - 'A']++;
    }
  }

  s = 'a';
  for (i = 0; i < 26; i++, s++) {
    printf("%c : %d\n", s, count_alpha[i]);
  }

  return 0;
}