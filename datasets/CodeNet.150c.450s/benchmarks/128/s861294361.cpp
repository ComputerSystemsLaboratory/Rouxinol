#include<stdio.h>
char s[21];
void output(char *s)
{
    if(*s=='\0')return ;
    output(s+1);
    printf("%c",*s);
}
int main()
{
    scanf("%s",s);
    output(s);
    printf("\n");
    return 0;
}