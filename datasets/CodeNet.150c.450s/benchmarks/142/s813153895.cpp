#define TEMPLATE_USED
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef pair<ll,ll> pl;
typedef vector<pl> vp;
const ll INF=1001001001;
const ll LINF=1001001001001001001;
const ll D4[]={0,1,0,-1,0};
const ll D8[]={0,1,1,0,-1,-1,1,-1,0};
#define _overload3(_1,_2,_3,name,...) name
#define _rep2(i,n) for(ll i=0;i<(n);++i)
#define _rep3(i,a,b) for(ll i=(ll)(a);i<(ll)(b);++i)
#define rep(...) _overload3(__VA_ARGS__,_rep3,_rep2)(__VA_ARGS__)
#define _repe2(i,n) for(ll i=0;i<=(ll)(n);++i)
#define _repe3(i,a,b) for(ll i=(ll)(a);i<=(ll)(b);++i)
#define repe(...) _overload3(__VA_ARGS__,_repe3,_repe2)(__VA_ARGS__)
#define _rrep2(i,n) for(ll i=(ll)(n)-1;i>=0;i--)
#define _rrep3(i,a,b) for(ll i=(ll)(b)-1;i>=(ll)(a);i--)
#define rrep(...) _overload3(__VA_ARGS__,_rrep3,_rrep2)(__VA_ARGS__)
#define _rrepe2(i,n) for(ll i=(ll)(n);i>=0;i--)
#define _rrepe3(i,a,b) for(ll i=(ll)(b);i>=(ll)(a);i--)
#define rrepe(...) _overload3(__VA_ARGS__,_rrepe3,_rrepe2)(__VA_ARGS__)
#define all(x) (x).begin(),(x).end()
template<class T>
bool chmax(T &a,const T &b){if(a<b){a=b;return 1;}return 0;}
template<class T>
bool chmin(T &a,const T &b){if(b<a){a=b;return 1;}return 0;}

void solve();

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    solve();
}

void solve(){
    ll N,K;cin>>N>>K;
    vl a(N);rep(i,N)cin>>a[i];

    rep(i,N-K){
        if(a[i]<a[i+K]){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}