#include<stdio.h>
#include<cctype>

int main(){
    char ch;
    int sum=0;
    while(true){
        while((ch = getchar()) != '\n'){
            sum += ch - '0';
        }
        if(sum == 0){
            break;
        } else {
            printf("%d\n",sum);
            sum = 0;
        }
    }
    return 0;
}
