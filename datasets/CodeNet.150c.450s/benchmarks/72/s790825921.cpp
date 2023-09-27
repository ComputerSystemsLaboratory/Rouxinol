#include<iostream>
using namespace std;
#include<stdio.h>

int main(){
    
    char ch;
    
    while(1){
        scanf("%c", &ch);
        if ( ch == '\n') break;
        else if ( 65 <= ch && ch <= 90 ){
            ch += 32;
            printf ( "%c", ch );
        }
        else if ( 97 <= ch && ch <= 122 ){
            ch -= 32;
            printf ( "%c", ch);
        }
        else printf ( "%c", ch );
    }
    printf("\n");
    return 0;
}
