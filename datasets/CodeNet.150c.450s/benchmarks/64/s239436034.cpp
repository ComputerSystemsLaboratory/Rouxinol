//?度?n 的数列a 中任意几个元素相加能否得到 k,能得到?出yes  ，否??出no

#include <iostream>
#include <cstdio>
using namespace std;
int n,m;
int a[10000];
int solve(int i,int p)
{
    if(p == 0)
        return 1;
    if(i >= n)   //没有找到
        return 0;
    int res = solve(i+1,p)||solve(i+1,p-a[i]);
    return res;
}
int main()
{
    int k;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&m);
    for(int j=0;j<m;j++)
    {
        scanf("%d",&k);
        if(solve(0,k))
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}