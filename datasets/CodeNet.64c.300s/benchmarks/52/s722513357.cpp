#include <stdio.h>
int ex(int n,int sum,int num)
{
    if(n == 0&&sum == 0)return 1;
    if(n == 0||num == 10)return 0;
    return ex(n,sum,num + 1) + ex(n - 1,sum - num,num + 1);
}
int main()
{
    while(1)
    {
        int n,sum;
        scanf("%d%d",&n,&sum);
        if(n == 0&&sum == 0)break;
        printf("%d\n",ex(n,sum,0));
    }
    return 0;
}