#include <bits/stdc++.h>
#define fi first
#define se second
#define rep(i,n) for(ll i=0;i<(n);i++)
#define rrep(i,n) for(ll i = 1; i <= (n); ++i)
#define drep(i,n) for(ll i = (n)-1; i >= 0; --i)
#define all(v) v.begin(),v.end()
#define len(x) (ll)(x).length()
#define maxs(x,y) x = max(x,y)
#define mins(x,y) x = min(x,y)
#define pb push_back
#define sz(x) (ll)(x).size()
#define v(T) vector<T>
#define vv(T) vector<vector<T>>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<P> vp;
ll gcd(ll a,ll b){if(a%b==0){return b;}else{return(gcd(b,a%b));}}
ll lcm(ll a,ll b){return a*b/gcd(a,b);}
const int INF=1e9;
const ll MX = 1e18;
const ll MOD=INF+7;
const int di[] = {-1,0,1,0};
const int dj[] = {0,-1,0,1};
const double PI=acos(-1);
#define dame { puts("-1"); return 0;}
#define yn {puts("Yes");}else{puts("No");}
#define YN {puts("YES");}else{puts("NO");}
const int MAX = 1000001;
long long fac[MAX], finv[MAX], inv[MAX];
void COMinit() {fac[0] = fac[1] = 1;finv[0] = finv[1] = 1;inv[1] = 1;for (int i = 2; i < MAX; i++){fac[i] = fac[i - 1] * i % MOD;inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;finv[i] = finv[i - 1] * inv[i] % MOD;}}
long long COM(int n, int k){if (n < k) return 0;if (n < 0 || k < 0) return 0;return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;}

int main() {
  ll n;
  cin>>n;
  vi a(n);
  ll ans=0;
  map<ll,ll> mp;
  rep(i,n) {
    cin>>a[i];
    mp[a[i]]++;
    ans+=a[i];
  }
  ll q;
  cin>>q;
  v(ll) ansz(q);
  rep(i,q){
    ll b,c;
    cin>>b>>c;
    ansz[i]=ans+(c-b)*mp[b];  
    ans+=(c-b)*mp[b];  
    mp[c]+=mp[b];
    mp[b]=0;
  }
  rep(i,q){
    cout<<ansz[i]<<endl;
  }
}