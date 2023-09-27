#include <stdio.h>
#include <ctype.h>
 
int main(void)
{
    char s;
 
    while(1){
        scanf("%c", &s);
        if(islower(s))
            printf("%c", toupper(s));
        else if(isupper(s))
            printf("%c", tolower(s));
        else if(s == '.'){
            printf(".");
        } else if(s == '\n'){
            printf("\n");
            break;
        } else
            printf("%c", s);
    }
    return 0;
}