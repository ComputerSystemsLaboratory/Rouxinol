#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using P = pair<ll,ll>;
using vl = vector<ll>;
using Map = map<ll,ll>;
using Tup = tuple<ll,ll,ll>;
using vvl = vector<vector<ll>>;
#define all(v) v.begin(), v.end()
#define prt(v) cout<<(v)<<"\n";
#define fl cout<<flush;
#define fi(v) get<0>(v)
#define se(v) get<1>(v)
#define th(v) get<2>(v)
#define endl "\n"
template <typename T> bool chmax(T &a, const T &b){if (a<b){a=b;return 1;}return 0;}
template <typename T> bool chmin(T &a, const T &b){if (a>b){a=b;return 1;}return 0;}
const ll INF=1LL<<60;
const ll MOD=1000000007;


signed main(void){
    cin.tie(0);cout.tie(0);ios::sync_with_stdio(false);
    ll N,T;
    string S;
    cin >> T;
    for(ll i=0;i<T;++i){
        cin >> N;
        vector<ll> A(N,0);
        for(ll i=0;i<N;++i)cin>>A[i];
        cin >> S;
        vector<ll> nl={0};
        bool ans=1;
        for(ll j=N-1;j>=0;--j){
            if(S[j]=='0'){
                ll x=A[j];
                for(auto p: nl)chmin(x,x^p);
                for(auto p: nl)chmin(p,x^p);
                if(x)nl.emplace_back(x);
            }
            else{
                ll x=A[j];
                for(auto p: nl)chmin(x,x^p);
                if(x){ans=0;break;}
            }
        }
        if(ans)prt(0)
        else prt(1)
    }
    return 0;
}
