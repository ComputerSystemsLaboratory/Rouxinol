#include <stdio.h>
#include <string.h>
int main(){
    char arry[20];
    scanf("%s",&arry);
    int ln=strlen(arry),i;
    for(i=ln-1;i>=0;i--)
    {
        printf("%c",arry[i]);
    }
    printf("\n");
    return 0;
}