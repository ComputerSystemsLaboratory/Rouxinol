#include<stdio.h>
int n,m;

int f(int depth, int sum, int s)
{
    if(depth == 10)
    {
        if(sum == n && s == m)return 1;
        return 0;
    }
    return f(depth+1,sum+1,s+depth) + f(depth+1,sum,s);
}
int main()
{
    while(scanf("%d%d",&n,&m),n+m)
    {
        printf("%d\n",f(0,0,0));
    }
    return 0;
}