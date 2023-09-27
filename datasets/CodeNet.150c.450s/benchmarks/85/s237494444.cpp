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
    ll n;cin >> n;
    vl p(n+1);
    rep(i,n){
        ll hoge,hogehoge;
        if(i%2==0)cin >> p[i] >> p[i+1];
        else {
            cin >> hoge >>hogehoge;
            if(i==n-1)p[n]=hogehoge;
        }
    }
    vvl dp(n,vl(n,inf));
    rep(i,n)dp[i][i]=0;
    rep(j,n){
        lper(i,j+1,0){
            rep(k,j-i){
                chmin(dp[i][j],dp[i][i+k]+dp[i+k+1][j]+p[i]*p[i+k+1]*p[j+1]);
            }
        }
    }
    cout << dp[0][n-1] <<endl;
}

