#include<stdio.h>
int main(){
    char s[1200] = {0};
    int c[26] = {0};
    int i=0,p;
    while(scanf("%c",&s[i])!=EOF){
        if(s[i]>=65&&s[i]<=90){
            p = s[i]-65;
            c[p]++;
        }
        else if(s[i]>=97&&s[i]<=122){
            p = s[i]-97;
            c[p]++;
        }
        i++;
    }
    for(i=0;i<26;i++){
        printf("%c : %d\n",i+97,c[i]);
    }
    return 0;
}