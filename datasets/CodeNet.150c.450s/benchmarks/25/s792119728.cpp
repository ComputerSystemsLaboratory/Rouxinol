#include<stdio.h>
#include<ctype.h>
int main(){
    int s;
    int i=0;
    int count[26]={0};
    while(i<1200){
        s=getchar();
        s=tolower(s);
        if(s>='a' && s<='z')count[s-'a']++;
        i++;
    }
    for(i=0; i<26; i++)printf("%c : %d\n", 97+i, count[i]);
    return 0;
}