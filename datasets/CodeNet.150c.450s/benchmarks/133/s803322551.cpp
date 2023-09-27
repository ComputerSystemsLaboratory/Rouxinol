#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vl = vector<ll>;
using vvl = vector<vector<ll>>;
using P = pair<ll,ll>;
using um = unordered_map<ll,ll>;
#define fl cout<<flush;
#define endl '\n'
template <typename T> inline void prt(T v){cout<<v<<'\n';}
template <typename T> inline bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template <typename T> inline bool chmin(T &a, const T &b){if (a>b){a=b;return 1;}return 0;}
const ll INF=1LL<<60;
const ll MOD=1e9+7;
const ll MOD2=998244353;
const ld pi=3.14159265358979323846;
const ld eps=1e-10;

signed main(void){
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(false);
    ll D;
    cin >> D;
    vector<ll> c(27,0);
    for(ll i=0;i<26;++i)cin>>c[i+1];
    vector<vector<ll>> S(D+1, vector<ll>(27, 0));
    for(ll i=0;i<D;++i)
        for(ll j=0;j<26;++j)cin>>S[i+1][j+1];
    vector<ll> last(27,0);
    vector<ll> t(D+1,0);
    for(ll i=0;i<D;++i)cin>>t[i+1];
    ll score=0;
    for(ll i=1;i<=D;++i){
        last[t[i]]=i;
        score+=S[i][t[i]];
        for(ll j=1;j<=26;++j)score-=c[j]*(i-last[j]);
        prt(score);
    }
    fl;

    return 0;
}

