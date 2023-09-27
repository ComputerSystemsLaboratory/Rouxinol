#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i=0;i<n;i++)
#define repl(i,l,r) for(ll i=(l);i<(r);i++)
#define per(i,n) for(ll i=n-1;i>=0;i--)
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define CST(x) cout<<fixed<<setpercision(x)
using ll=long long;
using vl=vector<ll>;
using vvl=vector<vector<ll>>;
using pl=pair<ll,ll>;
template<class T> inline bool chmin(T& a, T b){
    if(a>b){a = b;return true;}return false;}
template<class T> inline bool chmax(T& a, T b){
    if(a<b){a=b;return true;}return false;}
const ll MOD=1000000007;
const ll MOD9=998244353;
const int inf=1e9;
const ll INF=4e18;
const ll dy[4]={1,0,-1,0};
const ll dx[4]={0,-1,0,1};
int main(){
    ll H;cin>>H;
    vl value(H);
    rep(i,H)cin>>value[i];
    rep(i,H){
        cout<<"node "<<i+1<<": key = "<<value[i]<<", ";
        if(i)cout<<"parent key = "<<value[(i-1)/2]<<", ";
        if(i*2+1<=H-1)cout<<"left key = "<<value[i*2+1]<<", ";
        if(i*2+2<=H-1)cout<<"right key = "<<value[i*2+2]<<", ";
        cout<<endl;
    }
    return 0;
}
