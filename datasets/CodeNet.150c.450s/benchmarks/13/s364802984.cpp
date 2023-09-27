#include<stdio.h>
#include<ctype.h>
#include <cstring>
char s[201] = {};
char p[101] = {};
char t[101] = {};

int main(void){
    scanf("%s", &s);
    scanf("%s", &p);
    strcpy(t, s);
    strcat(s, t);
    if (strstr(s, p)) printf("Yes\n");
    else printf("No\n");
  
    return 0;
}