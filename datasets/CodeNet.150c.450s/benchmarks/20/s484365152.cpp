#include <stdio.h>
int main()
{
int ts = 0;
scanf("%d",&ts);
int h=ts/3600;
int hr=ts%3600;
int m=hr/60;
int s=hr%60;

printf("%d:%d:%d\n",h,m,s);
return 0;
}