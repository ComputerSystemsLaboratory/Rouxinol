#include <iostream>
#include <cstdio>
#define Max 100000
using namespace std;
int n,k;
long long a[Max];
int check(long long p)
{
    int i=0;
    for(int j=0;j<k;j++)
    {
        long long s = 0;
        while(s+a[i] <= p)
        {
            s = s+a[i++];
            if(i == n)
                return n;
        }
    }
    return i;
}
int solve()
{
    long long left = 0;
    long long right = 100000*10000;
    long long mid;
    while(left+1 < right)
    {
        mid = (left + right)/2;
        int v = check(mid);
        if(v>=n)
            right = mid;
        else
            left = mid;
    }
    return right;
}
int main()
{
    int i;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int res = solve();
    printf("%d\n",res);
    return 0;
}