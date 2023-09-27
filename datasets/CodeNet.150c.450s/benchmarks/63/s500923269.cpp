#include <bits/stdc++.h>
typedef long long ll;
#define ALL(l)  (l).begin(),(l).end()
#define rep(i,n) for(ll (i)=0;(i)<(n);(i)++)
#define rep2(i, s, n) for (ll i = (s); i < (ll)(n); i++)
using namespace std;

//const ll mod =  1000000007;
const ll maxn = 1000000000;

//---------------------------------------------------------------------------------------------------
using vi = vector<int>; // intの1次元の型に vi という別名をつける
using vll = vector<ll>; // intの1次元の型に vi という別名をつける
using vvll = vector<vll>; // intの2次元の型に vvi という別名をつける
using vs = vector<string>; // stringの1次元の型に vs という別名をつける
using pll = pair<ll, ll>; // これ以降 pii という型名はpair<ll, ll> と同じ意味で使える
//---------------------------------------------------------------------------------------------------
struct edge {ll to,cost;};

int main() {
    ll v,e,r;
    cin>>v>>e>>r;
    vector<edge> g[v];
    rep(i,e){
        ll j,k,d;
        cin>>j>>k>>d;
        g[j].push_back({k,d});
    }
    
    vll d(v,maxn);
    d.at(r)=0;
    
    queue<ll> q;
    q.push(r);
    while(!q.empty()){
        ll s=q.front();
        q.pop();
        for(auto p:g[s]){
            ll ns=p.to;
            ll kyori=p.cost;
            if(d.at(ns)>kyori+d.at(s)){
                d.at(ns)=kyori+d.at(s);
                q.push(ns);
            }
        }
    }
    
    rep(i,v){
        if(d.at(i)==maxn)cout<<"INF"<<endl;
        else cout<<d.at(i)<<endl;
    }
}

