#include<iostream>
#include<stdio.h>
using namespace std;

int main(void){
    char ch;
    while(true){
        scanf("%c", &ch);
        if ( ch == '\n' ){
            printf("%c", ch);
            break;
        }
        else if ((ch >= 65) && (ch <= 90)){
            printf("%c", ch+32);
        }
        else if ((ch >= 97) && (ch <= 122)){
            printf("%c", ch-32);
        }
        else {
            printf("%c", ch);
        }
    }
}
