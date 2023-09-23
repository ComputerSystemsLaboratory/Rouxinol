#include<stdio.h>
#include<ctype.h>
int main(){
  int n,i;
  char c;
  while((c=getchar())!=EOF){
    if(islower(c))c=toupper(c);
    else c=tolower(c);
    printf("%c",c);
  }
  return 0;
}