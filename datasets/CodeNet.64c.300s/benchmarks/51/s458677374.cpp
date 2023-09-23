#include <cstdio>
#include <cmath>
int main()
{
        long long n,i,fac;
        scanf("%lld",&i);
        fac=1;
        for(;i>1;i--)
                {
                        fac=fac*i;
                }

        printf("%lld\n",fac);

        return 0;

}