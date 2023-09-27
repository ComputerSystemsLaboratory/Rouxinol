#include<stdio.h>
int main(){
    char str[21]={0};
    int cou=0;
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++){
        cou++;
    }
    for(int i=cou-1;i>=0;i--){
        printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}