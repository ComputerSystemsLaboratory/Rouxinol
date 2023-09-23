#include <stdio.h>
int main()
{
while(true)
{
int a,b;
scanf("%d %d", &a, &b);
if(0==a&&0==b)
break;
if(a<b)
printf("%d %d\n", a, b);
else
printf("%d %d\n", b, a);
}
return 0;
}