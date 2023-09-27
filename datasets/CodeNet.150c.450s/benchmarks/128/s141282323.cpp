#include<stdio.h>
#include <string.h>
int main()
{

char str[21]={};
char ch;
int n;
scanf("%s",str);
n = strlen(str);
for(int i=0;i<n;i++)
{
printf("%c",str[n-i-1]);
}
printf("\n");
return 0;
}