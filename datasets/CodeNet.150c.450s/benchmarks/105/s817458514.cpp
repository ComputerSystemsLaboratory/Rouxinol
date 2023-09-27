#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(ll i=0;i<n;i++)
#define repl(i,l,r) for(ll i=(l);i<(r);i++)
#define per(i,n) for(ll i=n-1;i>=0;i--)
#define perl(i,r,l) for(ll i=r-1;i>=l;i--)
#define fi first
#define se second
#define pb push_back
#define ins insert
#define pqueue(x) priority_queue<x,vector<x>,greater<x>>
#define all(x) (x).begin(),(x).end()
#define CST(x) cout<<fixed<<setprecision(x)
#define vtpl(x,y,z) vector<tuple<x,y,z>>
#define rev(x) reverse(x);
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
int main(){
    ll t;cin >> t;
    while(t--){
        ll n;cin >> n;
        vl a(n);rep(i,n)cin >> a[i];
        string s;
        cin >> s;
        vl dp[n+1];
        ll r=0;
        dp[n].pb(0);
        per(i,n){
            if(s[i]=='0'){
                vl bases=dp[i+1];
                ll v=a[i];
                for(auto e:bases){
                    chmin(v,v^e);
                }
                if(v!=0)bases.pb(v);
                dp[i]=bases;
            }
            else{
                ll v=a[i];
                vl bases=dp[i+1];
                for(auto e:bases){
                    chmin(v,v^e);
                }
                if(v==0)dp[i]=dp[i+1];
            }
        }
        if(binary_search(all(dp[0]),0))cout << 0 <<endl;
        else cout << 1 <<endl;
        /*rep(i,n+1){
            for(auto p:dp[i]){
                cout << p<<" ";
            }
            cout << endl;
        }*/
    }
}