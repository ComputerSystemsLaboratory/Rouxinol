#include<stdio.h>
int main()
{
    long long int n,temp,rem,counter,a,b,sum;
    while(scanf("%lld %lld",&a,&b)==2)
    {
        counter=0;
        sum=a+b;
        while(sum!=0)
        {
            rem=sum%10;
            sum/=10;
            counter++;
        }
        printf("%lld\n",counter);
    }
    return 0;
}