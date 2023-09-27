#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    char ch;
    while(ch!='\n'){
        scanf("%c",&ch);
        if( isalpha(ch)){
            if(islower(ch)) printf("%c", toupper(ch));
            else if(isupper(ch)) printf("%c",tolower(ch));
        }
        else printf("%c",ch);
        
    }
    return 0;
}


