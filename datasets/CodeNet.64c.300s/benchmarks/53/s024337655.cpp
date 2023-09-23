#include <stdio.h>
int main()
{
int a,b,c,cnt,i;
scanf("%d %d %d",&a,&b,&c);
for(i=a,cnt=0;i<=b;cnt+=!(c%i++));
printf("%d\n",cnt);
return 0;
}