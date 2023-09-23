#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
int*x = (int*)a;
int*y = (int*)b;
if(*x > *y)
return -1;
else if(*x < *y)
return 1;
else
return 0;
}

int main()
{
int i, ara[10];
for(i = 0; i < 10; i++)
scanf("%d", &ara[i]);

qsort(ara, 10, sizeof(int), &cmp);
for(i = 0; i < 3; i++)
printf("%d\n", ara[i]);
return 0;
}