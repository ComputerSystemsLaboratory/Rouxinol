#include<bits/stdc++.h>
#include <math.h>
#include <map>
#include <unordered_map>
using namespace std;
#define rep(i,n) for(ll i=0;i<n;i++)
#define repl(i,l,r) for(ll i=(l);i<(r);i++)
#define per(i,n) for(ll i=n-1;i>=0;i--)
#define lper(i,r,l) for(ll i=r-1;i>=l;i--)
#define fi first
#define se second
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define pb(s) push_back(s)
#define CST(x) cout<<fixed<<setprecision(x)
#define ci(x) cin >>x
#define co(x) cout<<x<<endl
using ll=long long;
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
using pl=pair<ll,ll>;
using vvpl=vector<vector<pl>>;
const ll MOD=1000000007;
const ll MOD9=998244353;
const int inf=1e9;
const ll INF=4e18;
const ll dy[4]={1,0,-1,0};
const ll dx[4]={0,-1,0,1};
long long fac(ll a) {
 long long ans=1;
 while(a>1){
 ans*=a;
 ans%=1000000007;
     a--;
    }
    return ans;
     }

ll powmod(ll n, ll k, ll m) {
ll r=1;
 for(; k>0; k >>=1) {
   if(k&1) r=(r*n)%m;
   n=(n*n)%m;
 }
  return r;
}

struct UF{
    vl par;
    UF(ll N):par(N){
        rep(i,N)par[i]=i;
    }
    ll root(ll x){
        if(par[x]==x)return x;
        return par[x]=root(par[x]);
    }
    bool same(ll x,ll y){
        return root(x)==root(y);
    }
    void unite(ll x,ll y){
        x=root(x),y=root(y);
        if(x==y)return;
        par[x]=y;
        return;
    }
};

ll dp[1010][1010];

int main() {
ll N;
  cin >>N;
  vector<string> vec(N);
  rep(i,N) {
cin >>vec.at(i);
  }
  
  
  ll a=0;
  ll b=0;
  ll c=0;
  ll d=0;
  rep(i,N) {
    if(vec.at(i)=="AC") {
a++;
    }
    else if(vec.at(i)=="WA") {
b++;
    }
    else if(vec.at(i)=="TLE") {
c++;
    }
    else if(vec.at(i)=="RE") {
d++;
    }
  }
  
  cout<<"AC"<<" "<<'x'<<" "<<a<<endl;
  cout<<"WA"<<" "<<'x'<<" "<<b<<endl;
  cout<<"TLE"<<" "<<'x'<<" "<<c<<endl;
  cout<<"RE"<<" "<<'x'<<" "<<d<<endl;
}
    