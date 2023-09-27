#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=205,up=60;
int n;
ll a[N],p[2][N];
char s[N];
void add(int opt,ll x)
{
    for(int i=up;i>=0;i--)
        if(x>>i&1)
        {
            if(!p[opt][i]) {p[opt][i]=x;break;}
            else x=x^p[opt][i];
        }
}
bool query(ll x)
{
    for(int i=up;i>=0;i--)
        if(x>>i&1)
    {
        if(!p[0][i]) return true;
        else x=x^p[0][i];
    }
    return false;
}
int main()
{
    int t;scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=1;i<=n;i++) scanf("%lld",&a[i]);
        scanf("%s",s+1);
        if(s[n]=='1')
        {
            printf("1\n");continue;
        }
        memset(p,0,sizeof(p));
        int ans=0;
        for(int i=n;i>=1;i--)
        if(s[i]=='0') add(0,a[i]),memset(p[1],0,sizeof(p[1]));
        else
        {
            add(1,a[i]);
            for(int i=0;i<=60;i++)
                if(p[1][i]&&query(p[1][i]))
                    ans=1;
        }
        printf("%d\n",ans);
    }
}
