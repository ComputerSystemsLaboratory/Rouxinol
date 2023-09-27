#include<stdio.h>
#include<string.h>
 
int main(){
 
    char s[100];
    char p[100];
    char a[200];
 
    scanf("%s",s);
    scanf("%s",p);
 
    strcpy(a,s);
    strcat(a,s);
 
    if(strstr(a,p))
        printf("Yes\n");
    else
        printf("No\n");
     
return 0;
 
}