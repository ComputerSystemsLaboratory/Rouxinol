#include <stdio.h>
int main()
{
    long long int n=0,a,b;
    int count=0;
    while (scanf("%lld%lld",&a,&b)==2)
    {
        count = 0;
        n = 0;
        n = a+b;
        while (n!=0)
        {
            n /= 10;
            count++;
        }
        printf("%d\n",count);
    }
    return 0;
}