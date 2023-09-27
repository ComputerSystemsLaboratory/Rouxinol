#include <stdio.h>

int main(void)
{
  int charcount[26]={0}, num;
  char ch;

  while ( scanf("%c", &ch) != EOF) {
    if (ch<='Z' && ch>='A')
      ch += 'a'-'A';
    if (ch<='z' && ch>='a')
      charcount[ch-'a']++;
  }

  for(num=0; num<26; num++) {
    printf("%c : %d\n", 'a'+num,charcount[num]);
  }

  return 0;
}