#include<stdio.h>
#include <string.h>
int main(){

char n[201],s[101],t[101];
char *p;
scanf("%s %s",n,s);

strcpy(t,n);
strcat(n,t);
p=strstr(n,s);
if(p==NULL)printf("No\n");
else printf("Yes\n");
return 0;
}