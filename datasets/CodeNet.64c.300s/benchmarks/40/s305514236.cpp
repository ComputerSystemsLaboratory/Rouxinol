#include <stdio.h>
int main ()
{
  char a;
  while(1){
    scanf("%c",&a);
    if(a=='\n'){
      printf("\n");
      break;
    }
    if('A'<=a&&a<='Z'){
      printf("%c",a+'a'-'A');
    }else{
      if('a'<=a&&a<='z'){
	printf("%c",a-32);
      }else{
	printf("%c",a);
      }
    }
  }
}