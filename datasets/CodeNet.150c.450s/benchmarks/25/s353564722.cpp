#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int count[26]={0};
    char x;

    while(scanf("%c",&x)!=EOF) {
    
        x=toupper(x);
        count[x-'A']++;
    }

    for(int i=0;i<26;i++){
        printf("%c : %d\n",i+'a',count[i]);
    }  
}