#include <stdio.h>

int main()
{
    int a,b,c,sum;
    while(scanf("%d %d",&a,&b)==2)
    {
        c=0;
        sum=a+b;


    while(sum)
    {
        sum=sum/10;
        c++;
    }
    printf("%ld",c);
    }



    return 0;
}