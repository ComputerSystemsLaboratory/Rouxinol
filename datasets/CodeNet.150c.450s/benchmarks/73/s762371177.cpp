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

//BIT
//計算量 初期化:O(N)、クエリ:O(log(N))

template<typename T>
struct Binary_Indexed_Tree{
    vector<T> bit;
    const int n;
    
    Binary_Indexed_Tree(int N) : n(N){
        bit.assign(N+1, 0);
    }
    
    void add(int i, const T &x){
        for(i++; i <= n; i += (i & -i)) bit[i] += x;
    }
    
    T sum(int i){
        T ret = 0;
        for(; i > 0; i -= (i & -i)) ret += bit[i];
        return ret;
    }
    
    T query(int l, int r){
        return sum(r) - sum(l);
    }

    int lower_bound(T x){
        int ret = 0;
        for(int k = 31-__builtin_clz(n); k >= 0; k--){
            if(ret+(1<<k) <= n && bit[ret+(1<<k)] < x) x -= bit[ret += (1<<k)]; 
        }
        return ret;
    }

    int upper_bound(T x){
        int ret = 0;
        for(int k = 31-__builtin_clz(n); k >= 0; k--){
            if(ret+(1<<k) <= n && bit[ret+(1<<k)] <= x) x -= bit[ret += (1<<k)];
        }
        return ret;
    }
    
    void clear(){
        fill(bit.begin(), bit.end(), 0);
    }
};

//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_B

int main(){
    int N, Q;
    cin >> N >> Q;
    Binary_Indexed_Tree<int> bit(N);
    while(Q--){
        int q, x, y; cin >> q >> x >> y; x--;
        if(q == 0) bit.add(x, y);
        else cout << bit.query(x, y) << endl;
    }
}
