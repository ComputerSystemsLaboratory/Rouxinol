#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef pair<ll,ll> pl;
typedef vector<pl> vp;
#define fore(i,a,b) for(ll i=(ll)(a);i<=(ll)(b);++i)
#define rep(i,n) fore(i,0,(n)-1)
#define rfore(i,a,b) for(ll i=(ll)(b);i>=(ll)(a);--i)
#define rrep(i,n) rfore(i,0,(n)-1)
#define all(x) (x).begin(),(x).end()
const ll INF=1001001001;
const ll LINF=1001001001001001001;
const ll D4[]={0,1,0,-1,0};
const ll D8[]={0,1,1,0,-1,-1,1,-1,0};
template<class T>
bool chmax(T &a,const T &b){if(a<b){a=b;return 1;}return 0;}
template<class T>
bool chmin(T &a,const T &b){if(b<a){a=b;return 1;}return 0;}

ll par[10005];
ll find(ll x){
    if(par[x]<0)return x;
    return par[x]=find(par[x]);
}
void unite(ll x,ll y){
    x=find(x),y=find(y);
    if(x==y)return;
    par[y]=x;
}

void solve(){
    ll v,e;cin>>v>>e;
    memset(par,-1,sizeof(par));

    vl s(e),t(e);
    vp a;
    rep(i,e){
        ll w;cin>>s[i]>>t[i]>>w;
        a.push_back(pl(w,i));
    }
    sort(all(a));

    ll ans=0;
    rep(i,a.size()){
        if(find(s[a[i].second])!=find(t[a[i].second])){
            ans+=a[i].first;
            unite(s[a[i].second],t[a[i].second]);
        }
    }
    cout<<ans<<endl;
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    solve();
}

