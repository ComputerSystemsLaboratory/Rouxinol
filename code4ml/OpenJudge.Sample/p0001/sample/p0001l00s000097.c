#include<stdio.h>
int main()
{
   int a,b,i=0,sum;
    while(scanf("%d %d",&a,&b)!=EOF)
    {

        if(a>=0&&b>=0)
        {
            i=0;
            sum=a+b;

            while(sum != 0)
            {
                sum=sum/10;

                i++;
            }
            printf("%d",i);
        }
    }
    return 0;
}