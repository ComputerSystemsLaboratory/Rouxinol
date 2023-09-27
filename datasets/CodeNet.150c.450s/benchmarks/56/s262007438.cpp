#include <stdio.h>
#include <limits.h>
int main()
{
int n;
scanf("%d", &n);

long min = LONG_MAX;
long max = LONG_MIN;
long total = 0;

for(int i = 0; i < n; ++i)
{
long k;
scanf("%ld",&k);

total+=k;
if( min > k) min = k;
if( max < k) max = k;
}

printf("%ld %ld %ld\n", min, max, total);

return 0;
}