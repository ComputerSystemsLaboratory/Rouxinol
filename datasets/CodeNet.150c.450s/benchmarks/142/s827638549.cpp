#include <bits/stdc++.h>
#pragma GCC optimize(2)
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<cmath>
#include<cstring>
#include<bitset>
#include<stack>
#include<time.h>



#define X first
#define Y second
#define PB push_back
#define MP make_pair
#define scd(a) scanf("%d",&a)
#define scdd(a,b) scanf("%d%d",&a,&b)
#define scddd(a,b,c) scanf("%d%d%d",&a,&b,&c)
#define ALL(x) x.begin(),x.end()
#define sz(a) ((int)a.size())
#define getmid ((l+r)>>1)
#define mst(var,val) memset(var,val,sizeof(var))
#define IOS ios::sync_with_stdio(false);cin.tie(0)
#define lowbit(x) x&(-x)
#define rep(i,n) for(int i=0;i<n;++i)
#define rep1(i,n) for(int i=1;i<=n;++i)
#define ls rt<<1
#define rs rt<<1|1
using namespace std;
#ifdef local
#define dbg(args...) cout << #args << " -> ", err(args);
void err(){ cout << endl; }
template<typename T, typename... Args>
void err(T a, Args... args){ cout << a << ' '; err(args...); }
#else
#define dbg(args...)
#endif // local

typedef long long ll;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;
typedef pair <ll, int> pli;
typedef pair <double, double> pdd;
const int inf=0x3f3f3f3f;
const long long INF=0x3f3f3f3f3f3f3f3fLL;
const double PI=acos(-1.0);
const long double eps=1e-8;
const int mod=1e9+7;
const int MAXN=2e3+100;
const int N=1e6+1000;
const int M=500+10;
const ll mm=(1LL<<32);

template <class T>
inline void read(T &x)
{
    x = 0;
    char c = getchar();
    bool f = 0;
    for (; !isdigit(c); c = getchar())
        f ^= c == '-';
    for (; isdigit(c); c = getchar())
        x = x * 10 + (c ^ 48);
    x = f ? -x : x;
}

template <class T>
inline void write(T x)
{
    if (x < 0)
    {
        putchar('-');
        x = -x;
    }
    T y = 1;
    int len = 1;
    for (; y <= x / 10; y *= 10)
        ++len;
    for (; len; --len, x %= y, y /= 10)
        putchar(x / y + 48);
}
ll qpow(ll a,ll b,ll mod)
{
    ll ans=1;
    while(b)
    {
        if(b&1)
            ans=(ans*a)%mod;
        b>>=1;
        a=(a*a)%mod;
    }
    return ans;
}

ll a[N];
int main()
{
#ifdef local
    freopen("in.txt","r",stdin);
#endif // local
    IOS;cout.tie(0);
    int n,k;cin>>n>>k;
    rep1(i,n) cin>>a[i];

    for(int i=k+1;i<=n;++i)
    {
        if(a[i]>a[i-k]) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}
