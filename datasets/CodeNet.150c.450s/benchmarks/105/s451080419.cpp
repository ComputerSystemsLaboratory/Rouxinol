#include <bits/stdc++.h>

#define debug(var)  do{std::cerr << #var << " : ";view(var);}while(0)
template<typename T> void view(T e){std::cerr << e << std::endl;}
template<typename T> void view(const std::vector<T>& v){for(const auto& e : v){ std::cerr << e << " "; } std::cerr << std::endl;}
template<typename T> void view(const std::vector<std::vector<T> >& vv){ for(const auto& v : vv){ view(v); } }
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<ll> v1;
typedef vector<v1> v2;
typedef vector<v2> v3;

typedef unordered_map<ll, unordered_map<ll, ll>> graph;

const ll INF = 1ll << 50;
const ll mod = 1000000007;

class xor_set{
private:
    v1 w;
public:
    xor_set () {}
    void insert(ll x){
        for(ll v : w) if(v & -v & x) x ^= v;
        if(x == 0) return;
        for(ll& v : w) if(x & -x & v) v ^= x;
        w.push_back(x);
    }

    ll count(ll x){
        for(ll v : w) if(v & -v & x) x ^= v;
        if(x == 0) return 1;
        else return 0;
    }
};

ll t;

bool solve(ll n, v1& a, string& s){
    xor_set xs;
    for(ll i = n-1;i >= 0;i--){
        if(s[i] == '0'){
            xs.insert(a[i]);
        }else{
            if(xs.count(a[i])) continue;
            else{
                return true;
            }
        }
    }
    return false;
}

int main(){
    cin >> t;
    for(ll i = 0;i < t;i++){
        ll n;
        cin >> n;
        v1 a(n);
        for(ll i = 0;i < n;i++){
            cin >> a[i];
        }
        string s;
        cin >> s;
        if(solve(n, a, s)){
            cout << 1 << endl;
        }else{
            cout << 0 << endl;
        }
    }
}
