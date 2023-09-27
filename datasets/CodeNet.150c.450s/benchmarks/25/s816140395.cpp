#include<stdio.h>
#include<cctype>
int main(){
    char ch;
    int count[26] = {};
    while((ch = getchar()) != EOF){
        if(isupper(ch)) ch = tolower(ch);
        if(isalpha(ch)) count[ch -'a'] += 1;
    }
    
    for(int i = 0;i < 26;i++){
        printf("%c : %d\n",i+'a',count[i]);
    }
}
