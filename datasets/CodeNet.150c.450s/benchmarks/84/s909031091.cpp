#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define rep2(i, x, n) for(int i = x; i <= n; i++)
#define rep3(i, x, n) for(int i = x; i >= n; i--)
#define elif else if
#define sp(x) fixed << setprecision(x)
#define pb push_back
#define eb emplace_back
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pil = pair<int, ll>;
using pli = pair<ll, int>;
using pll = pair<ll, ll>;
const ll MOD = 1e9+7;
//const ll MOD = 998244353;
const int inf = (1<<30)-1;
const ll INF = (1LL<<60)-1;
const ld EPS = 1e-10;
template<typename T> bool chmax(T &x, const T &y) {return (x < y)? (x = y, true) : false;};
template<typename T> bool chmin(T &x, const T &y) {return (x > y)? (x = y, true) : false;};

template<typename T>
struct Binary_Indexed_Tree{
    vector<T> bit;
    
    Binary_Indexed_Tree(int N){
        bit.assign(N+1, 0);
    }
    
    void add(int i, const T &x){
        for(i++; i < sz(bit); i += (i & -i)) bit[i] += x;
    }
    
    T sum(int i){
        T ret = 0;
        for(; i > 0; i -= (i & -i)) ret += bit[i];
        return ret;
    }
    
    T query(int l, int r){
        return sum(r) - sum(l);
    }
    
    void clear(){
        fill(bit.begin(), bit.end(), 0);
    }
};

int main(){
    int N;
    cin >> N;
    int a[N];
    rep(i, N) cin >> a[i];
    vector<int> v(N);
    iota(all(v), 0);
    sort(all(v), [&](int i, int j){return a[i] < a[j];});
    Binary_Indexed_Tree<ll> bit(N);
    ll ans = 0;
    rep(i, N){
        ans += bit.query(v[i]+1, N);
        bit.add(v[i], 1);
    }
    cout << ans << endl;
}
