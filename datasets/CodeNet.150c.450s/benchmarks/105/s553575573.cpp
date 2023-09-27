#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=205,up=60;
int n;
ll a[N],p[N];
char s[N];
void add(ll x)
{
    for(int i=up;i>=0;i--)
        if(x>>i&1)
        {
            if(!p[i]) {p[i]=x;break;}
            else x=x^p[i];
        }
}
bool query(ll x)
{
    for(int i=up;i>=0;i--)
        if(x>>i&1)
    {
        if(!p[i]) return true;
        else x=x^p[i];
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
        if(s[i]=='0') add(a[i]);
        else if(query(a[i]))
        {
            ans=1;break;
        }
        printf("%d\n",ans);
    }
}
