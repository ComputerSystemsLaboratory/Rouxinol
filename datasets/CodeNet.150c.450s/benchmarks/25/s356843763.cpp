#include <stdio.h>
#include <ctype.h>
#define MAX 1202
#define alphaNum 26
 
int main(void){
    int i;
    char str[MAX];
    int count[alphaNum] = {0};
 
    while(fgets(str, MAX, stdin) != NULL){
        for(i = 0; str[i] != '\n'; i++){
            if(isalpha(str[i])){
                if(isupper(str[i])){
                    count[str[i] - 'A']++;
                }
                if(islower(str[i])){
                    count[str[i] - 'a']++;
                }
            }
        }
    }
 
    for(i = 0; i < alphaNum; i++){
        printf("%c : %d\n", i + 'a', count[i]);
    }
    return 0;
}