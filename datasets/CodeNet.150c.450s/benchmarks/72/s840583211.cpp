#include <stdio.h>
#include <ctype.h>
int main(){
  char S[1200];
  int i=0;
  char ch;
  while((ch=getchar())!=EOF){
    char u_ch,l_ch;
    u_ch=toupper(ch);
    l_ch=tolower(ch);
    if(ch!=u_ch)S[i]=u_ch;
    else if(ch!=l_ch)S[i]=l_ch;
    else S[i]=ch;
    i++;
  }
  S[i]='\0';
  printf("%s",S);
  return 0;
}