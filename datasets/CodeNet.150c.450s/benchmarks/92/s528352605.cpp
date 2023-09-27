#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int a,b;
    char s[100];
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        sprintf(s,"%d",a+b);
        printf("%d\n",strlen(s));
    }
    return 0;
}