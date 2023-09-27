#include <bits/stdc++.h>
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
typedef pair<ll,ll> P;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<P> vp;
ll gcd(ll a,ll b){if(a%b==0){return b;}else{return(gcd(b,a%b));}}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
const int INF=1e9;
const ll MX = 1e18;
const ll MOD=INF+7;
const int di[] = {-1,0,1,0};
const int dj[] = {0,-1,0,1};
const double PI=acos(-1);
const string tr="abcdefghijklmnopqrstuvwxyz";
#define dame { puts("-1"); return 0;}
#define yn {puts("Yes");}else{puts("No");}
#define YN {puts("YES");}else{puts("NO");}
const ll MAX = 1000001;
long long fac[MAX], finv[MAX], inv[MAX];
void COMinit() {fac[0] = fac[1] = 1;finv[0] = finv[1] = 1;inv[1] = 1;for (ll i = 2; i < MAX; i++){fac[i] = fac[i - 1] * i % MOD;inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;finv[i] = finv[i - 1] * inv[i] % MOD;}}
long long COM(ll n, ll k){if (n < k) return 0;if (n < 0 || k < 0) return 0;return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;}
ll llpow(ll n,ll i){ll cnt=n;  for(ll j=0;j<i-1;j++){n*=cnt;}return n;}
bool ip/*is_prime*/(long long N) {if (N == 1) return false;for (long long i = 2; i * i <= N; ++i) {if (N % i == 0) return false;}return true;}
int digit(ll N) {int ans = 0;while (N) {++ans;N /= 10;}return ans;}
vector<pair<ll,ll>> pf/*prime_factorize*/(ll n){vector<pair<ll,ll>> res;for(ll a=2;a*a<=n;a++){if(n%a!=0) continue;ll ex=0;while(n%a==0){ex++;n/=a;}res.pb({a,ex});}if(n!=1) res.pb({n,1});return res;}
vector<ll> div/*divisor*/(ll n){  vector<ll> res={1};for(ll a=2;a*a<=n;a++){if(n%a!=0) continue;ll b=n/a;res.pb(b);if(b!=a) res.pb(a);}sort(all(res));return res;}

vector<int> to[100005];

int main(){
  int n,m;
  cin>>n>>m;
  rep(i,m){
    int a,b;
    cin>>a>>b;
    --a;--b;
    to[a].pb(b);
    to[b].pb(a);
  }
  queue<int> q;
  vector<int> pre(n,-1);
  vector<int> dist(n,INF);
  dist[0]=0;
  q.push(0);
  while(!q.empty()){
    int v =q.front(); q.pop();
    for(int u:to[v]){
      if(dist[u]!=INF) continue;
      dist[u]=dist[v]+1;
      pre[u]=v;
      q.push(u);
    }
  }
  cout<<"Yes"<<endl;
  rep(i,n){
    if(i==0) continue;
    cout<<pre[i]+1<<endl;
  }
}