#include <stdio.h>
#include <ctype.h>
int main(){
  char s[1200];
  int i=0;
  char c;
  while((c=getchar())!=EOF){
    char u_c,l_c;
    u_c=toupper(c);
    l_c=tolower(c);
    if(c!=u_c)s[i]=u_c;
    else if(c!=l_c)s[i]=l_c;
    else s[i]=c;
    i++;
  }
  s[i]='\0';
  printf("%s",s);
  return 0;
}