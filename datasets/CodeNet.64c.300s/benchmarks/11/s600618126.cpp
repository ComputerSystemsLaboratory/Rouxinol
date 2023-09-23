#include <stdio.h>
int main(void)
{
int S,h,m,s;
scanf("%d",&S);
h=S/3600;
S=S%3600;
m=S/60;
S=S%60;
s=S;
printf("%d:%d:%d\n",h,m,s);
return(0);
}