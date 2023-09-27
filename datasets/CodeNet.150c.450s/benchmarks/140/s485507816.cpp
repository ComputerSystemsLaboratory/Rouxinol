#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair< ll, ll > Pi;
#define rep(i,n) for(int i=0;i<(n);i++)
#define rep2(i,n) for(int i=1;i<=(n);i++)
#define rep3(i,i0,n) for(int i=i0;i<(n);i++)
#define pb push_back
#define mod 1000000007
const ll INF = 1LL << 60;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
ll gcd(ll a, ll b) {return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) {return a/gcd(a,b)*b;}
#define all(x) x.begin(), x.end()
#define mp make_pair
bool compare(Pi a, Pi b) {
    if(a.first != b.first){
        return a.first < b.first;
        
    }else{
        return a.second < b.second;
    }
}


bool In_map(ll y,ll x,ll h,ll w){
    if(y<0 || x<0 || y>=h || x>=w){
        return 0;
    }else{
        return 1;
    }
}
const vector<ll> dx{1,0,-1,0};
const vector<ll> dy{0,1,0,-1};

struct UnionFind{
    vector<ll> par;

    UnionFind(ll N) : par(N){
        rep(i,N){
            par[i]=i;
        }
    }

    ll root(ll x){
        if(par[x] == x) return x;
        return par[x] = root(par[x]);
    }

    void unite(ll x, ll y){
        ll rx = root(x);
        ll ry = root(y);
        if(rx==ry) return;
        par[rx] = ry;
    }

    bool same(ll x, ll y){
        ll rx = root(x);
        ll ry = root(y);
        return rx == ry;
    }
};


int main() {
    ll V,E;
    cin >> V>>E;
    vector<tuple<ll,ll,ll>> S(E);

    rep(i,E){
        ll s,t,w;
        cin >>s>>t>>w;
        S[i] = make_tuple(w,s,t);
    }

    sort(all(S));
    UnionFind tree(V);
    ll ans = 0;
    rep(i,E){
        ll x = get<1>(S[i]);
        ll y = get<2>(S[i]);
        if(!tree.same(x,y)){
            tree.unite(x,y);
            ans += get<0>(S[i]);
        }
        
    }


    



    cout << ans <<endl;
    
    return 0;
    

}

