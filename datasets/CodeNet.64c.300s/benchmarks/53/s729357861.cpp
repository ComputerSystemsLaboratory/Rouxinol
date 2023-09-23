#include <stdio.h>
int main()
{
int a, b, c, i;
int syou, amari, kosuu = 0;
scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);
for (i = a; i <= b; i++)
{
syou = c /i;
amari = c - i * syou;
if (amari == 0)
kosuu++;
}
printf("%d\n", kosuu);
return 0;
}