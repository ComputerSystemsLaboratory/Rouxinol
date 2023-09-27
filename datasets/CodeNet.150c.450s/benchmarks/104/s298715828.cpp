#include<stdio.h>

int main()
{
    int a,b,c,d;
    int x[30],y,z[30];
    scanf("%d%d",&a,&b);
    for(int i = 0; i < a; i++)
    {
        x[i]=i+1;
    }
    for(int i = 0; i < b; i++)
    {
        scanf("%d,%d",&c,&d);
        y = x[c-1];
        x[c-1] = x[d-1];
        x[d-1] = y;
    }
    for(int i = 0; i < a; i++)
    {
        printf("%d\n",x[i]);
    }
    return 0;
}