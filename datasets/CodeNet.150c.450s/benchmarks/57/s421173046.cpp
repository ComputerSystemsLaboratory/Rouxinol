#include <stdio.h>
int main()
{
while(true)
{
char c;
int a, b;
scanf("%d %c %d", &a, &c, &b);
if( c == '?') break;
int ans = 0;
switch(c)
{
case '+': ans = a+b; break;
case '-': ans = a-b; break;
case '*': ans = a*b; break;
case '/': ans = a/b; break;
}
printf("%d\n", ans);
}
return 0;
}