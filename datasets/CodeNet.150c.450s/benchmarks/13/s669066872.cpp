#include <stdio.h>
#include<string.h>
int main(void){
char a[101],b[101],c[201];
scanf("%s%s",a,b);
strcat(c,a);
strcat(c,a);
if(strstr(c,b)==NULL)
puts("No");
else
puts("Yes");

    return 0;
}