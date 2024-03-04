#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(a>=0&&b>=0&&a<=1000000&&b<=1000000)
        {
            int n=a+b,count=0;
            while(n)
            {
                count++;
                n/=10;
            }
            printf("%d\n",count);
        }
    }
    return 0;
}
