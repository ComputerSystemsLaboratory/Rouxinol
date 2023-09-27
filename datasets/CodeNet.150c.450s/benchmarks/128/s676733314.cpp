#include <stdio.h>


int main(void){
    char st[20+1];
    char *pt;

    scanf("%s", st);
    for (pt=st; *pt!='\0'; pt++) ;
    for (pt--; pt!=st; pt--) printf("%c", *pt);
    printf("%c\n", *pt);
    return 0;
}