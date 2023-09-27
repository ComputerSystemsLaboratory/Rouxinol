#include <stdio.h>
int main()
{
double n, ans = 1;
int i;
scanf("%lf",&n);
for(i=1; i<=n; i++)
ans *= i;
printf("%0.f\n",ans);
return 0;
}