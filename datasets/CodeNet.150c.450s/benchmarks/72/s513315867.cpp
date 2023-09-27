#include <stdio.h>
#include <ctype.h>

int main(){
    char ch;
    while(1){
        scanf("%c", &ch);
        if(ch=='\n'){
            printf("\n");
            break;
        }else if(islower(ch)){
            printf("%c", toupper(ch));
        }else if(isupper(ch)){
            printf("%c", tolower(ch));
        }else{
            printf("%c", ch);
        }
    }

    return 0;
}

