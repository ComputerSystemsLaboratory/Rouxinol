#include<stdio.h>
int main()
{
    int n;
    long long int sum=1;
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        sum=sum*i;
    }
    printf("%lld\n",sum);
    return 0;
}