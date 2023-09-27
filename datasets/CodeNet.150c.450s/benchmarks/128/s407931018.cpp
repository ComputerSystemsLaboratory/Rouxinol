#include<stdio.h>
#include<string.h>
int main(){
 int i;
 char s[50];
 scanf("%s",s);
 for(i=strlen(s)-1;i>-1;i--)printf("%c",s[i]);
 printf("\n");
 return 0;
}