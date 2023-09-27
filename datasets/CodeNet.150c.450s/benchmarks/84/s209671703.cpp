#include<bits/stdc++.h>
#define ll long long
#define rep(i, n) for(int i=0; i<n; i++)
#define REP(i, n) for(int i=0; i<=n; i++)
#define repr(i, n) for(int i=n; i>0; i--)
#define REPR(i, n) for(int i=n; i>=0; i--)
const ll INF = 1LL<<60;
const int INT_INF = 1e9;
const ll MOD = 1e9+7;
template<class T> void puts(T x) { std::cout << x << std::endl; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
using namespace std;

struct BinaryIndexedTree {
    int n;
    vector<int> bit;

    BinaryIndexedTree(int size) {
        n = size;
        bit.resize(size+1, 0);
    }

    void add(int i, int x) {
        while (i <= n) {
            bit[i] += x;
            i += i & -i;
        }
    }

    int sum(int i) {
        int s = 0;
        while (i > 0) {
            s += bit[i];
            i -= i & -i;
        }
        return s;
    }

    int getSum(int i, int j) {
        return sum(j) - sum(i);
    }
};

int n, a[200010];
map<ll, ll> m;

int main() {
    int n;
    cin >> n;
    rep(i, n) {
        cin >> a[i];
        m[a[i]];
    }

    ll k = 1;
    for (auto &x: m) x.second = k++;
    rep(i, n) a[i] = m[a[i]];

    BinaryIndexedTree tree(n);
    ll ans = 0;
    rep(i, n) {
        ans += i - tree.sum(a[i]);
        tree.add(a[i], 1);
    }
    cout << ans << endl;
}

