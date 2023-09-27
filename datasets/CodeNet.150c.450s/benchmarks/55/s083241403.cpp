#include <stdio.h>
#include <string.h>

int main(){
    char c[1005];
    int len,cnt,i;
    fgets(c,1005,stdin);
    while(strcmp(c,"0\n")){
        len = strlen(c)-1;
        cnt = 0;
        for(i=0;i<len;i++)cnt += c[i]-'0';
        printf("%d\n",cnt);
        fgets(c,1005,stdin);
    }
}