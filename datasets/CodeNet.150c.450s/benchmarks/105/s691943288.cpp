#include<bits/stdc++.h>
#define MAXN 100005
#define INF 1000000000
#define MOD 1000000007
#define F first
#define S second
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
int T,n;
struct basis
{
    ll bas[62];
    void clear()
    {
        memset(bas,0,sizeof(bas));
    }
    void ins(ll x)
    {
        for(int j=60;j>=0;j--)
        {
            if(x&(1ll<<j))
            {
                if(!bas[j])
                {
                    bas[j]=x;
                    break;
                }
                x^=bas[j];
            }
        }
    }
    bool check(ll x)
    {
        for(int j=60;j>=0;j--)
        {
            if(x&(1ll<<j))
            {
                if(!bas[j]) return true;
                x^=bas[j];
            }
        }
        return false;
    }
}b;
ll a[MAXN];
string str;
int main()
{
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        for(int i=1;i<=n;i++) scanf("%lld",&a[i]);
        cin>>str;
        bool f=true;
        b.clear();
        for(int i=n;i>=1;i--)
        {
            if(str[i-1]=='1')
            {
                if(b.check(a[i])) f=false;
            }
            else b.ins(a[i]);
        }
        if(!f) puts("1"); else puts("0");
    }
    return 0;
}