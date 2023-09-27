#include<stdio.h>
#include<string.h>
int main(){
  int n,i;
  char s1[21];
  scanf("%s",s1);
  int len=strlen(s1);
  len--;
  for(i=len;i>=0;i--){
    printf("%c",s1[i]);
  }
  printf("\n");
  return(0);
}