#include<stdio.h>
int main()
{
    int a,count=1;
    while(scanf("%d",&a)!=EOF)
    {
        if(a==0)
            return 0;
        else
            printf("Case %d: %d\n",count,a);
        count++;
    }
}