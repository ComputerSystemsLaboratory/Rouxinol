#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
  int len,i;
  char m;

  while((m=getchar())!=EOF){

    if(isupper(m)){
        printf("%c",tolower(m));
      }
    else {
        printf("%c",toupper(m));
      }
  }
      
  return 0;
}