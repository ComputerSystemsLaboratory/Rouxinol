//AOJ-ALDS-1-5-D
#include <bits/stdc++.h>
using namespace std;
#define REP(i,a) for(int i = 0; i < (a); i++)
#define ALL(a) (a).begin(),(a).end()
typedef long long ll;
typedef pair<int, int> P;
const int INF = 1e9;
const long long LINF = 1e18;
const long long MOD = 1e9 + 7;

/*
    1-indexed であることに注意 !! 
*/
template <typename T>
struct BIT{
    int n;
    vector<T> dat;

    BIT(int n) : n(n), dat(n + 1, 0) {}

    T sum(int a){
        T res = 0;
        for(int i = a; i > 0; i -= (i & (-i))) res += dat[i];
        return res;
    }

    T sum(int a, int b){
        return sum(b - 1) - sum(a - 1);
    }

    void add(int k, T x){
        if(k == 0) return;
        for(int i = k; i <= n; i += (i & (-i))) dat[i] += x;
    }

    /*
        a[0] + a[1] + ... + a[res] >= x
    */
    int lower_bound(T x){
        if(x <= 0) return T(0);
        int res = 0, k = 1;
        while(k < n) k <<= 1;
        for(; k > 0; k >>= 1){
            if(res + k <= n && dat[res + k] < x){
                x -= dat[res + k];
                res += k;
            }
        }
        return res + 1;
    }
};

/*
    vector<long long> a(n) を座圧する場合 : 
    auto v = compress(a);
    auto m = dict(v);
    i番目の要素の取り出し方 : 
    m[a[i]]
*/
template<typename T>
vector<T> compress(vector<T> vec){
    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
    return vec;
}

template<typename T>
map<T, int> dict(vector<T> & vec){
    map<T, int> res;
    for(int i = 0; i < (int)vec.size(); i++){
        res[vec[i]] = i;
    }
    return res;
}

signed main(){
    int n;
    cin >> n;
    vector<ll> a(n);
    REP(i,n){
        cin >> a[i];
    }
    auto v = compress(a);
    auto m = dict(v);
    BIT<int> bit(m.size());
    ll ans = 0;
    REP(i,n){
        ans += i - bit.sum(m[a[i]] + 1);
        bit.add(m[a[i]] + 1, 1);
    }
    cout << ans << endl;
    return 0;
}
