#include<string.h>
#include <stdio.h>

int main(void){
    int i = 0,total = 0;
    char number[1000] = {0};
    
    while(1){
        scanf("%s",number);
        
        if(number[0] == '0') break;
        
        while(number[i] != '\0'){
            total += (number[i]-'0');
            i++;
        }
        printf("%d\n",total);
        total = 0;
        i = 0;
    }
}