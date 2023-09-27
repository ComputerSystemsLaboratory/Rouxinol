#include<stdio.h>
int main()
{
   long long int n;
    while(scanf("%lld",&n)==1)
    {
       long long int sum=1;
        for(long long int i=n;i>0;i--)
            sum*=i;
        printf("%lld\n",sum);
    }
}