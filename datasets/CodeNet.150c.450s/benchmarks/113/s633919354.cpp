#include <stdio.h>
int main(void) {
int x, i;
scanf("%d", &x);
i=0;
do 
{
i++;
printf("Case %d: %d\n", i, x);
scanf("%d", &x);
} while (x!=0);
return 0;
}