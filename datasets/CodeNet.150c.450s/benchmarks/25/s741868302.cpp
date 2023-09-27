#include <stdio.h>
#include <ctype.h>

int main(){
    char c;
    int cnt[26];
    int i;
    for(i=0;i<26;i++)cnt[i]=0;
    while ((c = getchar()) != EOF) {
        if(isalpha(c)){
            c = tolower(c);
            cnt[c-'a']++;
        }
    }
    for(i=0;i<26;i++)printf("%c : %d\n",'a'+i,cnt[i]);
}