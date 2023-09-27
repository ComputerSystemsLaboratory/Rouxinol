#include <stdio.h>
#include <ctype.h>
#include <limits.h>

int main(void){
    
    char ch,i;
    int n[26] = {0};
    int k = 0;
    
    while(scanf("%c",&ch) != EOF){
        ch = tolower(ch);
        for(i = 'a'; i <= 'z'; i++){
            if(ch == i){
                n[ch - 'a'] += 1;
                break;
            }
        }
    }
    for(k = 0; k < 26; k++) printf("%c : %d\n",'a'+k,n[k]);
}