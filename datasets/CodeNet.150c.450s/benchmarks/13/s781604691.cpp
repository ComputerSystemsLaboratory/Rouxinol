#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[101],p[101],copy[201];

    scanf("%s",s);
    scanf("%s",p);

    strcpy(copy,s);
    strcat(copy,s);
     if( strstr(copy,p)!=NULL){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    
    return 0;
}