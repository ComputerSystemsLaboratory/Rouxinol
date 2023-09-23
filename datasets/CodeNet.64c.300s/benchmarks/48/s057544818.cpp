#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>

#define sf scanf
#define pf printf

using namespace std;

const int Maxn = 1000010;
int prime[Maxn];
int flag[Maxn];
int cnt ;
void _init()
{
    for(int i = 2;i < Maxn;i ++)
    {
        if(flag[i] == 0)
        {
            prime[cnt++] = i;
            for(int j = i * 2;j < Maxn;j += i)
                flag[j] = 1;
        }
    }
}
int Find(int n)
{
    int l = 0,r = cnt;
    while(l <= r)
    {
        int mid = (l + r) / 2;
        if(prime[mid] <= n)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return l;
}
int main()
{
    _init();

    int n;
    while(~sf("%d",&n))
    {
        pf("%d\n",Find(n));
    }
    return 0;
}