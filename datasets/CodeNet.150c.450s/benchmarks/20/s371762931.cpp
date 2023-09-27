#include<stdio.h>
int main()
{
    int s,h,m;
    while(scanf("%d",&s)!=EOF)
    {
        h=s/3600;
        s=s%3600;
        m=s/60;
        s=s%60;
        printf("%d:%d:%d\n",h,m,s);
    }
    return 0;
}