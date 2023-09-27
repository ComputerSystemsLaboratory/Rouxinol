#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
#define INF (1<<21)
const int maxn=100+10;
const int maxw=10000+10;
int n,W;
int w[maxn];
int v[maxn];
int d[maxw];
void solve()
{
    memset(d,0,sizeof(d));
    for(int i=0;i<n;i++)
    {
        for(int j=W;j>=w[i];j--)
        {
            d[j]=max(d[j],d[j-w[i]]+v[i]);
        }
    }
    printf("%d\n",d[W]);
}
int main()
{
//    freopen("in.txt","r",stdin);
    scanf("%d%d",&n,&W);
    for(int i=0;i<n;i++) scanf("%d%d",&v[i],&w[i]);

    solve();

    return 0;
}