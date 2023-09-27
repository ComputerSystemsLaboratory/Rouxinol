#include <bits/stdc++.h>
using namespace std;
//#pragma GCC optimize("Ofast")
#define rep(i,n) for(long long i=0;i<(long long)(n);i++)
#define REP(i,k,n) for(long long i=k;i<(long long)(n);i++)
#define all(a) a.begin(),a.end()
#define eb emplace_back
#define lb(v,k) (lower_bound(all(v),k)-v.begin())
#define ub(v,k) (upper_bound(all(v),k)-v.begin())
#define fi first
#define se second
#define pi M_PI
#define PQ(T) priority_queue<T>
#define SPQ(T) priority_queue<T,vector<T>,greater<T>>
using ll=long long;
using P=pair<ll,ll>;
using PP=tuple<ll,ll,ll>;
using S=multiset<ll>;
using vi=vector<ll>;
using vvi=vector<vi>;
using vvvi=vector<vvi>;
const ll inf=1001001001001001;
const int INF=1001001001;
const int mod=1000000007;
const double eps=1e-10;
template<class T> bool chmin(T&a,T b){if(a>b){a=b;return true;}return false;}
template<class T> bool chmax(T&a,T b){if(a<b){a=b;return true;}return false;}
template<class T> void out(T a){cout<<a<<'\n';}
template<class T> void outp(T a){cout<<'('<<a.fi<<','<<a.se<<')'<<'\n';}
template<class T> void outvp(T v){rep(i,v.size())cout<<'('<<v[i].fi<<','<<v[i].se<<')';cout<<'\n';}
template<class T> void outv(T v){rep(i,v.size()){if(i)cout<<' ';cout<<v[i];}cout<<'\n';}
template<class T> void outvv(T v){rep(i,v.size())outv(v[i]);}
template<class T> bool isin(T x,T l,T r){return (l)<=(x)&&(x)<=(r);}
template<class T> void YesNo(T b){if(b)out("Yes");else out("No");}
void decimal(int x){cout<<fixed<<setprecision(x);}
//ll GCD(ll a,ll b){if(b==0) return a; return GCD(b,a%b);}
//ll LCM(ll a,ll b){return(a/GCD(a,b))*(b/GCD(a,b))*GCD(a,b);}
//ll POW(ll a,ll b){a%=mod;if(b==0)return 1;if(b&1)return a*POW(a,b-1)%mod;ll k=POW(a,b/2);return k*k%mod;}
vi calc(ll x){vi res;while(x>0){res.eb(x%10);x/=10;}reverse(all(res));return res;}

void solve(){
  ll n,k;
  cin>>n>>k;
  vi a(n);
  rep(i,n) cin>>a[i];
  rep(i,n-k) YesNo(a[i]<a[k+i]);
}

signed main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  solve();
}
