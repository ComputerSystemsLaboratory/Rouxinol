#include<stdio.h>
#include<string.h>
int main(void){
    int a,b;
    char str[10];
    while(scanf("%d%d",&a,&b) !=EOF){
        sprintf(str,"%d",a+b);
        printf("%d\n",strlen(str));
    }
    return 0;
}