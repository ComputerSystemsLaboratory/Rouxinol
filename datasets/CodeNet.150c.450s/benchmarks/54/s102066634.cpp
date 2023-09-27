#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    int i;
    int c=0;
    char word[10];
    char s[1000];
    scanf("%s",word);
    for(i=0; i<strlen(word); i++) word[i]=toupper(word[i]);
    while(1){
        scanf("%s", s);
        if(strcmp("end_of_text",s)==0)continue;
        for(i=0; i<strlen(s); i++) s[i]=toupper(s[i]);
        if(strcmp(s,"END_OF_TEXT")==0)break;
        if(strcmp(s,word)==0)c++;
    }
    printf("%d\n", c);
    return 0;
}