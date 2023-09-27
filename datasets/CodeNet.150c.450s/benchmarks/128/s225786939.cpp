#include<stdio.h>
#include<string.h>
int main(void){
  char str[1024];
  int i=0;
  scanf("%s",&str);
  for(i=strlen(str)-1;i>=0;i--)
    printf("%c",str[i]);
  printf("\n");
  return 0;
}