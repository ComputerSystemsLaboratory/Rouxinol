#include<stdio.h>

long long factorial(int n)
{
    if(n==1)
        return 1;
    else
        return(n*factorial(n-1));
}

int main()
{
    int n;
    long long f;


    while(scanf("%d",&n)==1)
    {
       if(n<=0)
            printf("no factorial.\n");
        else

        {
            f=factorial(n);
            printf("%lld\n",f);
        }
    }
    return 0;

}