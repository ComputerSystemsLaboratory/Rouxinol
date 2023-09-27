#include <stdio.h>
#include <iostream>

int main(){
    char ch;
    while(1){
        if(ch == '\n'){
            break;
        }
        else{
            scanf("%c", &ch);
            if('a'<=ch && ch<='z'){
                printf("%c", ch-32);
            }
            else if('A'<=ch && ch<='Z'){
                printf("%c", ch+32);
            }
            else{
                printf("%c",ch);
            }
        }
    }
return 0;
}


