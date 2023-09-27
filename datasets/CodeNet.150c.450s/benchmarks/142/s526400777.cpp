#include<bits/stdc++.h>
#include <cctype>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll          long long int
#define ld          long double
#define PRY         cout<<"YES\n"
#define PRN         cout<<"NO\n"
#define SETP(sp)    fixed<<setprecision(sp)
#define PB          push_back
#define GO          ll t; cin>>t; while(t--)
#define G(t)        cin>>t; while(t--)
#define ALLR(x)     x.rbegin(), x.rend()
#define PII         pair<ll ,ll >
#define VI          vector<ll >
#define ALL(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define PI          3.141592653589793238
#define SZ(x)       (ll )x.size()
#define hell9        998244353
#define hell        1e9+7
#define FO(i,a,b)    for(i=a;i<b;i++)
#define FOREV(i,a,b)    for(i=a;i>=b;i--)
#define lbnd        lower_bound
#define ubnd        upper_bound
#define BS          binary_search
#define MP          make_pair
#define LIM         100005
#define ARR(n,i,a)    ll n,i;cin>>n;ll a[n];FO(i,0,n)cin>>a[i];
#define ARRK(k,n,i,a) int n,k,i;scanf("%d%d",&n,&k);ll a[n];FO(i,0,n)scanf("%lld",&a[i]);
#define fio ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ord_set;
/*ll powM(ll x, ll y, ll p)
{
    ll res = 1;
    x = x % p;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}/*
ll POW(ll x, ll y)
{
    ll res = 1;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x);
        y = y >> 1;
        x = (x * x);
    }
    return res;
}
int LIS(std::vector<int>& v)
{
    if (v.size() == 0)
        return 0;
    std::vector<int> tail(v.size(), 0);
    int length = 1;
    tail[0] = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        auto b = tail.begin(), e = tail.begin() + length;
        auto it = lower_bound(b, e, v[i]);
        if (it == tail.begin() + length)
            tail[length++] = v[i];
        else
            *it = v[i];
    }
    return length;
}
ll modInverse(ll n, ll p)
{
    return powM(n, p - 2, p);
}
/*
ll fac[500000] = {0};
ll done = 1;
ncrModP(ll n, ll r, ll p)
{
    if (r == 0)
        return 1;
 
    fac[0] = 1;
    if (n > done)
    {    for (ll i = done ; i <= n; i++)
            fac[i] = (fac[i - 1] * i) % p;
    }
    done = max(done, n);
 
    return (fac[n] * modInverse(fac[r], p) % p *
            modInverse(fac[n - r], p) % p) % p;
 
}
ll ncrM(ll n, ll r)
{
    if (r > n - r)
        r = n - r;
    ll C[r + 1];
    memset(C, 0, sizeof(C));
    C[0] = 1;
    for (ll i = 1; i <= n; i++) {
        for (ll j = min(i, r); j > 0; j--)
            C[j] = (C[j] + C[j - 1]);
    }
    return C[r];
}
map<ll, ll>f;
ll fib(ll k)
{
    ll i; f[0] = 1; f[1] = 1; f[2] = 2;
    if (k <= done)return f[k];
    for (i = done; i <= k; i++)f[i] = (f[i - 1] % hell + f[i - 2] % hell) % hell;
    done = k;
    return f[k] % hell;
}void sieve(int n)
{
     bool prime[5*LIM];
     memset(prime, true, sizeof(prime));
      int rootn = (int)sqrt(n);
     for (int p = 2; p <= rootn; p++)
          if (prime[p] == true)
               for (int i = p*p; i <= n; i += p)
                    prime[i] = false;
     prime[1] = 0;
 
}
bool sortinrev(const pair<int,int> &a,  
               const pair<int,int> &b) 
{ 
    if(a.first!=b.first)
       return (a.first > b.first); 
       else
       return (a.second<b.second);
}
int x[101];
int y[101];
bool vis[200005]={0};
int n;
int a[200005]={0};
vector<int> b[200005];
int p[200005]={0};

 vector<pair<int,int> > a1,a2;
 map<pair<int,int>,int >m;
 char gr[51][51];
 int n,c=0;
void dfs(int u,int v)
{
    if(u<0||u>=n||v<0||v>=n)return; 
    if(m[{u,v}]!=0)return;
    if(gr[u][v]=='1')return; 
    m[{u,v}]=c;
    if(c==1)a1.PB({u,v});
    if(c==2)a2.PB({u,v});
    dfs(u-1,v);
    dfs(u+1,v);
    dfs(u,v-1);
    dfs(u,v+1);
}*/
int t;
int main()
{
fio
//G(t){
  int n,k;cin>>n>>k;int a[n];
  int i=0;FO(i,0,n)cin>>a[i];
  FO(i,0,n-k)
  {if(a[i+k]>a[i])cout<<"Yes\n";
  else cout<<"No\n";}

return 0;
}
