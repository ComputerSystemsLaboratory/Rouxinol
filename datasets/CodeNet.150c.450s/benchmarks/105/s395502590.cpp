#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
#define rep(i,l,r) for(int i=l;i<=r;i++)
#define per(i,r,l) for(int i=r;i>=l;i--)
const int MX=205;
const int mod=998244353;
const double pi=3.1415926535897932384;
double isp=1e-13;
using namespace std;
ll qpow(ll a,ll b,ll MOD=mod){for(ll ans=1;;a=a*a%MOD,b>>=1){if(b&1)ans=ans*a%MOD;if(!b)return ans;}}
ll inv(ll a,ll MOD=mod){return qpow(a,MOD-2,MOD);}
ll __gcm(ll a,ll b){return a*b/__gcd(a,b);}
const int bzmax = 60;
ll b[MX];
typedef class LinearBasis {
  public:
    ll a[MX];
    void insert(ll x) {
      for (int i = bzmax; i+1;i-- ) {
        if (!(x >> i)) {
         continue;
        }
        if (!a[i]) {
          a[i] = x;
          break;
        }
        x^=a[i];
      }
    }
    bool query(ll x) {
      for (int i = bzmax; i-- && x; ) {
        if ((x >> i) & 1) {
          x ^= a[i];
        }
      }
      return !x;
    }

    void reset() {
      memset(a, 0, sizeof(a));
    }
} LinearBasis;
int  solve()
{
    LinearBasis ls;
    ls.reset();
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
         cin>>b[i];
    }
    string s;
    cin>>s;
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]=='1')
        {
            if(!ls.query(b[i]))
                return 1;
        }
        ls.insert(b[i]);
    }
    return 0;
}
int main()
{
  ios::sync_with_stdio(0),cin.tie(0);
  int t;
  cin>>t;
  while(t--)
  {
     cout<<solve()<<endl;;
  }
}
