#include <vector>
#include <math.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <iomanip>
#include <deque>
#include <map>

typedef long long ll;
#define rep(i, a, n) for(ll i = a; i<n; i++)
#define ALL(a) begin(a), end(a)
#define mii map<int, int>
#define msi map<string, int>
#define vi vector<int>
#define vl vector<ll>
#define MOD 1000000007
#define INF 1e9
#define showVector(v) rep(i,0,v.size()){p(v[i]);p(" ")} pl("")
#define p(s) std::cout << s ;
#define pl(s)  std::cout << s << endl;
using namespace std;

// 素数判定 O(√n)
bool is_prime(int n){
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

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
class UnionFind {
public:
    vector<ll> par;
    void init(ll n) {
        rep(i, 0, n) {
            //par[i] == iのとき、iの親はiとなるから初期化では全て根であるとする。
            par.push_back(i);
        }
    }

    ll root(ll x) {
        if (par[x] == x) {
            return x;
        } else {
            return par[x] = root(par[x]);
        }
    }

    // これは併合するために使う
    bool unite(ll x, ll y) {
        x = root(x);
        y = root(y);
        // 併合済ならばfalse
        if (x == y) return false;

        par[y] = x;
        return true;
    }

    bool isSame(ll x, ll y) {
        return root(x) == root(y);
    }
};
int main() {
    ll n, m;;
    cin >> n >> m;
    UnionFind T;
    T.init(n);
    rep(i, 0, m) {
        ll b, c;
        cin >> b >> c;
        T.unite(b, c);
    }
    int q;
    cin >> q;
    rep(i, 0, q) {
        ll b, c;
        cin >> b >> c;
        if (T.isSame(b, c)) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }

    }
    return 0;
}
