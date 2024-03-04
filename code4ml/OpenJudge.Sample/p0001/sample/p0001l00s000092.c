#include<stdio.h>
#include<string.h>
int main(void){
int a, b, i;
char str[128];
for(i=0;i<3;i++){
scanf("%d %d", &a, &b);
sprintf(str, "%d", a+b);
printf("%d\n", strlen(str));}
return 0;}