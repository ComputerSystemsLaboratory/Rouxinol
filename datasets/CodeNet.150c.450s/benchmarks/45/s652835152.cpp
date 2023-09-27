#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair< ll, ll > Pi;
#define rep(i,n) for(ll i=0;i<(n);i++)
#define rep2(i,n) for(ll i=1;i<=(n);i++)
#define rep3(i,i0,n) for(ll i=i0;i<(n);i++)
#define pb push_back
#define MOD 1000000007
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

bool comparex(tuple<ll,ll,ll> a, tuple<ll,ll,ll> b) {

    return get<1>(a) < get<1>(b);
        
}
bool comparey(tuple<ll,ll,ll> a, tuple<ll,ll,ll> b) {

    return get<2>(a) < get<2>(b);
        
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

ll modpow(ll a,ll n, ll mod){
    ll res = 1;
    while(n>0){
        if(n&1){
            res= res*a%mod;
        }
        a = a*a%mod;
        n>>=1;
    }
    return res;
}

int main() {
    ll m,n;
    cin >> m>>n;


    cout << modpow(m,n,MOD)<<endl;
  
    return 0;
    

}

