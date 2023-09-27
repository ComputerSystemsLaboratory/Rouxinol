#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char search[21], word[21];
    int count=0;
    int i;
    
    scanf("%s", search);
    while(1){
        scanf(" %s", word);
        if(strcmp(word, "END_OF_TEXT")==0)break;
        for(i=0;word[i]!='\0';i++){
            word[i]=tolower(word[i]);
        }
        if(strcmp(word, search)==0){
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}