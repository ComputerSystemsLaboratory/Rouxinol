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

ll conv(string s){
    ll ret=0;
    ll hh=atoi(s.substr(0,2).c_str());
    ll mm=atoi(s.substr(3,2).c_str());
    ll ss=atoi(s.substr(6,2).c_str());
    return 3600*hh+60*mm+ss;
}
void solve(){
    while(1){
        ll n;cin>>n;
        if(!n)return;
        vl cnt(86400);
        rep(i,n){
            string s,t;cin>>s>>t;
            ll ss=conv(s),tt=conv(t);
            cnt[ss]++;
            cnt[tt]--;
        }
        rep(i,86400)cnt[i+1]+=cnt[i];
        ll ans=0;
        rep(i,86400)chmax(ans,cnt[i]);
        cout<<ans<<endl;
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(0);
    solve();
}

