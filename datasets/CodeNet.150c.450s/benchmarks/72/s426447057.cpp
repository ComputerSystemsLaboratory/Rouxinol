#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char text[1205];
    int len,i;
    fgets(text,1205,stdin);
    len = strlen(text)-1;
    for(i=0;i<len;i++){
        if(islower(text[i])){
            text[i]=toupper(text[i]);
        }else if(isupper(text[i])){
            text[i]=tolower(text[i]);
        }
    }
    printf("%s",text);
}