#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i=0;i<n;i++)
#define repl(i,l,r) for(ll i=(l);i<(r);i++)
#define per(i,n) for(ll i=n-1;i>=0;i--)
#define lper(i,r,l) for(ll i=r-1;i>=l;i--)
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define ins insert
#define pqueue(x) priority_queue<x,vector<x>,greater<x>>
#define all(x) (x).begin(),(x).end()
#define CST(x) cout<<fixed<<setprecision(x)
#define vtpl(x,y,z) vector<tuple<x,y,z>>
#define at(x,i) get<i>(x);
using ll=long long;
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
using pl=pair<ll,ll>;
using vpl=vector<pl>;
using vvpl=vector<vpl>;
const ll MOD=1000000007;
const ll MOD9=998244353;
const int inf=1e9+10;
const ll INF=4e18;
const ll dy[8]={1,0,-1,0,1,1,-1,-1};
const ll dx[8]={0,-1,0,1,1,-1,1,-1};
ll modfac(ll a){
    ll ans=1;
    while(a>1){
        ans*=a;
        ans%=1000000007;
        a--;
    }
    return ans;
}
ll modinv(ll a,ll m) {
    ll b = m, u = 1, v = 0;
    while (b) {
        ll t = a / b;
        a -= t * b; swap(a, b);
        u -= t * v; swap(u, v);
    }
    u %= m; 
    if (u < 0) u += m;
    return u;
}
struct UnionFind {
    vector<int> par;
    
    UnionFind(int n) : par(n, -1) {}

    int root(int x) {
        if (par[x] < 0) return x;
        else return par[x] = root(par[x]);
    }
    
    bool same(int x, int y) {
        return root(x) == root(y);
    }
    
    bool merge(int x, int y) {
        x = root(x); y = root(y);
        if (x == y) return false;
        if (par[x] > par[y]) swap(x, y);
        par[x] += par[y];
        par[y] = x;
        return true;
    }
    
    int size(int x) {
        return -par[root(x)];
    }
};
ll modpow(ll a, ll n, ll mod) {
    ll res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}
template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}
ll ans=0;
int main(){
    while(true){
        ll a;cin >> a;
        if(!a)break;
        vl v(86400,0);
        rep(i,a){
            string s,g;cin >> s >>g;
            ll l=0,r=0;
            l+=(s[0]-'0')*10*3600+(s[1]-'0')*3600;
            l+=(s[3]-'0')*10*60+(s[4]-'0')*60;
            l+=(s[6]-'0')*10+(s[7]-'0')*1;
            r+=(g[0]-'0')*10*3600+(g[1]-'0')*3600;
            r+=(g[3]-'0')*10*60+(g[4]-'0')*60;
            r+=(g[6]-'0')*10+(g[7]-'0')*1;
            v[l]++;
            if(r<86400)v[r]--;
        }
        vl imos(86401,0);
        rep(i,86400)imos[i+1]+=imos[i]+v[i];
        ll ans=0;
        rep(i,86401)chmax(ans,imos[i]);
        cout <<ans <<endl;
    }
}
