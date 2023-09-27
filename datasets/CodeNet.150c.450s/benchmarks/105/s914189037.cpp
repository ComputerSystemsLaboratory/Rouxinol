#include <bits/stdc++.h>
#define Maxn 207
using namespace std;
int T,n;
long long a[Maxn];
int op[Maxn];
long long r[62];
bool add(long long x)
{
    for (int i=60;i>=0;i--)
        if (x&(1LL<<i))
        {
            if (r[i]) x^=r[i];
            else
            {
                r[i]=x;
                return true;
            }
        }
    return false;
}
void solve()
{
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
        scanf("%lld",&a[i]);
    for (int i=1;i<=n;i++)
    {
        char ch=getchar();
        while (ch!='0'&&ch!='1') ch=getchar();
        if (ch=='0') op[i]=0; else op[i]=1;
    }
    memset(r,0,sizeof(r));
    for (int i=n;i;i--)
    {
        if (op[i]==0) add(a[i]);
        else if (op[i]==1&&add(a[i]))
        {
            printf("%d\n",1);
            return;
        }
    }
    printf("%d\n",0);
}
int main()
{
    scanf("%d",&T);
    while (T--) solve();
    return 0;
}