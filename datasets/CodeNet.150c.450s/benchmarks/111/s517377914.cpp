#include <stdio.h>
long long int mem[200][40] = {0};
int num[200] = {0};
int n;
long long int ex(int a,int sum)
{
    if(sum > 20||sum < 0)return 0;
    if(a == n - 1&&sum == num[n - 1])return 1;
    if(a == n - 1)return 0;
    if(mem[a][sum] != 0)return mem[a][sum];
    mem[a][sum] = ex(a + 1,sum + num[a]) + ex(a + 1,sum - num [a]);
    return mem[a][sum];
}
int main()
{
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
    }
    printf("%lld\n",ex(1,num[0]));
    return 0;
}