# include <stdio.h>
int main()
{
    long long int t,a,i,p,m=1000000007,r;

    while(scanf("%lld %lld",&a,&p)==2)
    {
        r = 1;

        while(p)
        {
            if(p%2)
                r = (r*a)%m;
            a = (a*a)%m;
            p/=2;
        }

        printf("%lld\n",r);
    }

    return 0;
}