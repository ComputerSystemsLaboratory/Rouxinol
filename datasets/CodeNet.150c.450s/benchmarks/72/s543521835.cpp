#include <iostream>
#include <stdio.h>
#include <cctype>
using namespace std;
int main(){
  char ch;

  while(1){
    scanf("%c",&ch);
    if(islower(ch))printf("%c",toupper(ch));
    else if(isupper(ch))printf("%c",tolower(ch));
    else printf("%c",ch);

    //??????????????????

    if(ch == '\n')break;
  }
}