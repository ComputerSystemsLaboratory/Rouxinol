#include<stdio.h>
#include<string.h>
 
int main(void){
  int i;
  char a[256];
  scanf("%s", a);
  for(i = strlen(a) - 1; i >= 0; i--){
    printf("%c",a[i]);
  }
  printf("\n");
  return 0;
}