#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vl = vector<ll>;
template<class T> using vc = vector<T>;
template<class T> using vvc = vector<vector<T>>;

#define eb emplace_back
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define repr(i, n) for (ll i = (n)-1; i >= 0; i--)
#define repe(i, l, r) for (ll i = (l); i < (r); i++)
#define reper(i, l, r) for (ll i = (r)-1; i >= (l); i--)
#define repa(i,n) for (auto& i: n)

template<class T> inline bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T> inline bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
void init() {cin.tie(0);ios::sync_with_stdio(false);cout << fixed << setprecision(15);}

#ifdef DEBUG
template <class T, class N> void verr(const T& a, const N& n) { rep(i, n) cerr << a[i] << " "; cerr << "\n" << flush; }
ll dbgt = 1; void err() { cerr << "passed " << dbgt++ << "\n" << flush; }
template<class H, class... T> void err(H&& h,T&&... t){ cerr<< h << (sizeof...(t)?" ":"\n") << flush; if(sizeof...(t)>0) err(forward<T>(t)...); }
#endif

const ll INF = 4e18;
const ld EPS = 1e-11;
const ld PI = acos(-1.0L);
const ll MOD = 1e9 + 7;
// const ll MOD = 998244353;
//--------------------------------------------------------------------------------//
template <typename T>
struct Compress {
    vector<T> xs;

    Compress() = default;

    Compress(const vector<T> &vs) {
        add(vs);
    }

    Compress(const initializer_list<vector<T>> &vs) {
        for (auto &p : vs) add(p);
    }

    void add(const vector<T> &vs) {
        copy(begin(vs), end(vs), back_inserter(xs));
    }

    void add(const T &x) {
        xs.emplace_back(x);
    }

    void build() {
        sort(begin(xs), end(xs));
        xs.erase(unique(begin(xs), end(xs)), end(xs));
    }

    vector<int> get(const vector<T> &vs) const {
        vector<int> ret;
        transform(begin(vs), end(vs), back_inserter(ret), [&](const T &x) {
            return lower_bound(begin(xs), end(xs), x) - begin(xs);
        });
        return ret;
    }

    int get(const T &x) const {
        return lower_bound(begin(xs), end(xs), x) - begin(xs);
    }

    const T &operator[](int k) const {
        return xs[k];
    }
};

// Binary Indexed Tree (Fenwick Tree)
template <typename T>
struct BIT {
    ll n;
    vector<T> d;
    BIT(ll n = 0) : n(n), d(n + 1) {}
    void add(ll i, T x = 1) {
        for (i++; i <= n; i += i & -i) {
            d[i] += x;
        }
    }
    T sum(ll i) {
        T x = 0;
        for (i++; i; i -= i & -i) {
            x += d[i];
        }
        return x;
    }
};

int main() {
    init();
    ll N;
    cin >> N;
    vl A(N);
    rep(i, N) cin >> A[i];

    Compress<ll> C(A);
    sort(all(C.xs));
    C.build();

    BIT<ll> bt(N);
    ll ans = 0;
    rep(i, N){
        ll ci = C.get(A[i]);
        bt.add(ci);
        ans += ci - bt.sum(ci) + 1;
    }
    cout << ans << endl;
}
