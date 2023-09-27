#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
#define INF (1<<21)
const int maxn=20+10;
const int maxv=50000+10;
int n,m;
int c[maxn];
int d[maxv];
void solve()
{
    fill(d,d+n+1,INF);
    d[0]=0;
    for(int i=0;i<m;i++)
    {
        for(int j=c[i];j<=n;j++)
        {
            d[j]=min(d[j],d[j-c[i]]+1);
        }
    }
    printf("%d\n",d[n]);
}
int main()
{
//    freopen("in.txt","r",stdin);
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++) scanf("%d",&c[i]);

    solve();

    return 0;
}