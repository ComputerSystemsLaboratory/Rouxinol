#include<stdio.h>
#include<string.h>
int main(void){
int a[3], b[3], i;
char str[3][15];
for(i=0;i<3;i++){
scanf("%d %d", &a[i], &b[i]);
sprintf(str[i], "%d", a[i]+b[i]);
}
for(i=0;i<3;i++)
printf("%d\n", strlen(str[i]));
return 0;}