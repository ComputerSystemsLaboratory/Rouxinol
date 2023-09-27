#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int,int> P;
typedef pair<ll,ll> l_l;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<P> vp;
typedef vector<l_l> vpl;
typedef vector<string> vs;
typedef pair<ll,l_l> lll;
#define pb push_back
#define sz(x) (int)(x).size()
#define fi first
#define se second
#define rep(i,n) for(int i=0;i<(n);i++)
#define rrep(i,n) for(int i=1;i<=(n);i++)
const int INF=1001001000;
const int mINF=-1001001000;
const ll LINF=10100100100100100;
const ll dx[4]={1,-1,0,0};
const ll dy[4]={0,0,1,-1};
template<class T> inline bool chmin(T& a,T b){
if(a>b){
a=b;
return true;
}
return false;
}
template<class T> inline bool chmax(T& a,T b){
if(a<b){
a=b;
return true;
}
return false;
}

struct UnionFind{
vector<int> par,depth;
UnionFind(int n){
par.resize(n); depth.resize(n);
for(int i=0; i<n; i++){
par[i]=i;
depth[i]=0;
}
}
int find(int x){
if(par[x]==x){
return x;
}
else{
return par[x]=find(par[x]);
}
}
bool same(int x, int y){
return find(x)==find(y);
}
void unite(int x, int y){
x=find(x); y=find(y);
if(x==y) return;
if(depth[x]<depth[y]) swap(x,y);
if(depth[x]==depth[y]) depth[x]++;
par[y]=x;
}
};

int main(){
    ll v,e;cin>>v>>e;
    ll ans=0;
    vector<lll> d;
    rep(i,e){
        ll s,t,w;cin>>s>>t>>w;
        d.pb({w,{s,t}});
    }
    sort(d.begin(),d.end());
    UnionFind uf(v+1);
    rep(i,e){
        ll x=d[i].se.fi,y=d[i].se.se;
        if(!uf.same(x,y)){
            uf.unite(x,y);
            ans+=d[i].fi;
        }
    }
    cout<<ans<<endl;
    return 0;
}
