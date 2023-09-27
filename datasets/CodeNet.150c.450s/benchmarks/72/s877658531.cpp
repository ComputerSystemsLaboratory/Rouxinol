#include <iostream>
#include <stdio.h>
#include <cctype>
int main(){
    char ch,a,b;
    while(1){
        scanf("%c",&ch);
        if(isupper(ch)){
            a = tolower(ch);
            std::cout <<a;
        }else
        if(islower(ch)){
            b = toupper(ch);
            std::cout << b;
        }else{
            std::cout <<ch;
        }
        if(ch == '\n')break;
    }
}