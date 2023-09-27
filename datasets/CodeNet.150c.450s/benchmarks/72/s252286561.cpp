#include <iostream>
#include <cstdio>
int main(){
  char c;
  while(1){
    scanf("%c",&c);
    if(c=='\n')break;
    if('a' <= c && c <= 'z'){
      c = c - ('a' - 'A');
    }
    else if('A' <= c && c <= 'Z'){
      c = c + ('a' - 'A');
    }
    printf("%c",c);
  }
  printf("\n");
}