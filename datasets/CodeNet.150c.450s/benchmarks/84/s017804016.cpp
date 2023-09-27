#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using ld=long double;
using st=string;
using ch=char;
typedef pair<ll,ll> P;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<P> vP;
typedef vector<ch> vc;
typedef vector<vc> vvc;
#define FOR(i,a,b) for(ll i=a;i<b;i++)
#define rep(i,n) FOR(i,0,n)
#define ROF(i,a,b) for(ll i=a;i>=b;i--)
#define per(i,a) ROF(i,a,0)
#define pb push_back
const ll MOD=1000000007;
const ll MOD2=998244353;
const ld PI=acos(-1);
const ll INF=1e18;
const ll MXint=1<<32-1;
st abc="abcdefghijklmnopqrstuvwxyz";
st ABC="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
struct edge{ll to,cost;};
struct edge2{ll from,to,cost;};

//[1,n]だけを求めていけばいいよね

const ll MXN=200000;
ll bit[MXN+1],n;

ll sum(int i){
    ll s=0;
    while(i>0){
        s+=bit[i];
        i-=i&(-i);
    }
    return s;
}

void add(int i,int x){
    while(i<=n){
        bit[i]+=x;
        i+=i&(-i);
    }
}

int main() {
    cin >> n;
    vP p(n);
    rep(i,n){
        cin >> p[i].first;
        p[i].second=i;
    }
    sort(p.begin(),p.end());
    vl a(n);
    rep(i,n){
        a[p[i].second]=i+1;
    }
    ll ans=0;
    rep(i,n){
        ans+=i-sum(a[i]);
        add(a[i],1);
    }
    cout << ans << '\n';
}
