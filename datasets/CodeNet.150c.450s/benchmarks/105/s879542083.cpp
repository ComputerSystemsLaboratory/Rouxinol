#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct base
{
    ll c[65];
    bool insert(ll x)
    {
        for(int i=62;i>=0;i--)
            if(x&(1ll<<i))
                if(!c[i]){c[i]=x;return 1;}
                else x^=c[i];
        return 0;
    }
}b;
string str;
ll a[205];
int main()
{
    int _;
    scanf("%d",&_);
    while(_--)
    {
        memset(b.c,0,sizeof(b.c));
        int n;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
        cin>>str;
        for(int i=n;i>=1;i--)
        {
            if(str[i-1]=='0')b.insert(a[i]);
            else if(b.insert(a[i])){puts("1");goto nxt;}
        }
        puts("0");
        nxt:;
    }
    return 0;
}