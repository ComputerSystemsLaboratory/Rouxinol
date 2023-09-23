#include <iostream>
#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch,h;
  //  int h;
        while(true){
        scanf("%c", &ch);
        if (islower(ch)){
            h=toupper(ch);
        }else{
            h=tolower(ch);}
        std::cout << h;
        if ( ch == '\n' ) break;
    }
    return 0;
}