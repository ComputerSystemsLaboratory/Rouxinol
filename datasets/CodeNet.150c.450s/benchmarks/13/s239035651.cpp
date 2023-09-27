#include <stdio.h>
#include <string.h>


int main(void){
    
    char S[202] = {0},s[100] = {0},p[100] = {0};
    
    scanf("%s",s);
    scanf("%s",p);
    
    strcpy(S,s);
    strcat(S,s); //??????????????£???
    
    if(strstr(S,p)) printf("Yes\n");
     else printf("No\n");
}   