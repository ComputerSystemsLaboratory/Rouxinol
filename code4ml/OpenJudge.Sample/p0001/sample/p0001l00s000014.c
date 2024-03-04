#include<stdio.h>
long a,b,c;
long ab(long x);
int main()
{
    while((scanf("%ld",&a)!=EOF))
    {
        scanf(" %ld",&b);
        c = ab(a+b);
        printf("%ld\n",c);
    }
    return 0;
}

long ab(long x)
{
    long y=0;
    while(1)
    {
        y++;
        x = x/10;
        if(x==0) break;
    }
    return(y);
}