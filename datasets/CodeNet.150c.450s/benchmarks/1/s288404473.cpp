#include <bits/stdc++.h>
const int INF = 1e9;
const int MOD = 1e9+7;
const long long LINF = 1e18;
#define dump(x)  cout << 'x' << ' = ' << (x) << ` `;
#define FOR(i,a,b) for(ll i=(a);i<(b);++i)
#define rep(i,n) for(ll i=0;i<(n);++i)
#define REPR(i,n) for(ll i=n;i>=0;i--)
#define FOREACH(x,a) for(auto& (x) : (a) )
typedef long long ll;
using namespace std;
typedef pair<ll, ll> P;

template<typename T>
void print(const vector<T> &x) {
    int n = x.size();
    rep(i,n) {
        cout << x[i];
        if (i!=n-1) cout<<" ";
        else cout << endl;
    }
}

template<typename T>
void print(const vector<vector<T>> &x) {
    int n = x.size();
    rep(i,n) {
        rep(j,x[i].size()) {
            cout << x[i][j] << " ";
        }
        cout << endl;
    }
}

template<typename T>
void print(const vector<T> &x, int n) {
    rep(i,n) {
        cout << x[i];
        if (i!=n-1) cout<<" ";
        else cout << endl;
    }
}

template<typename T>
void print(const vector<vector<T>> &x, int n, int m) {
    rep(i,n) {
        rep(j,m) {
            cout << x[i][j] << " ";
        }
        cout << endl;
    }
}

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

void input_init() {
    cin.tie(0); ios::sync_with_stdio(false);
}

void solve0() {
    int n; cin>>n;
    vector<ll> a(n);
    rep(i,n) cin>>a[i];
    vector<ll> dp(n,LINF);

    rep(i,n) {
        *lower_bound(dp.begin(), dp.end(), a[i]) = a[i];
    }
    auto itr = lower_bound(dp.begin(), dp.end(), LINF);
    cout << itr-dp.begin() << '\n';
}

template <class T>
class SegTree {
    int n; // number of leaves
    vector<T> data; // vector which has datas
    T def; // init number & 単位元
    function<T(T,T)> operation; // 区間クエリで使う処理
    function<T(T,T)> update; // 点更新で使う処理

    T _query(int a, int b, int k, int l, int r) {
        // [a, b)のクエリ
        // ノードk(区間[l, r)担当)が答える
        if (b <= l || r <= a) return def; // 区間がかぶらなければdef
        if (a <= l && r <= b) return data[k]; // 区間が完全にかぶっていればdata[k]
        else {
            // 一部だけかぶる場合は左右の子に委託する
            ll c1 = _query(a, b, 2*k+1, l, (l+r)/2);
            ll c2 = _query(a, b, 2*k+2, (l+r)/2, r);
            return operation(c1, c2);
        }
    }

    public:

        SegTree(size_t _n, T _def, function<T(T,T)> _operation, function<T(T,T)> _update) :
            def(_def), operation(_operation), update(_update){
                n = 1;
                while (n < _n) {n *= 2;}
                data = vector<T>(2*n-1, def);
        }

        T query(T a, T b) {return _query(a,b,0,0,n);}

        void change(T i, T x) {
            i += n-1;
            data[i] = update(data[i],x);
            while (i>0) {
                i = (i-1)/2;
                data[i] = operation(data[i*2+1], data[i*2+2]);
            }
        }

        T operator[](int i) {return data[i+n-1];}
};

void solve1() {
    int n; cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    vector<ll> b(a);
    sort(b.begin(), b.end());
    b.erase(unique(b.begin(), b.end()), b.end());
    vector<ll> c(n);
    rep(i,n) {
        c[i] = lower_bound(b.begin(), b.end(), a[i])-b.begin();
    }
    
    SegTree<ll> rmq(114514,0,[](ll x, ll y){return max(x,y);},[](ll a, ll x){return x;});
    rep(i,n) {
        ll x = rmq.query(0, c[i]);
        rmq.change(c[i],x+1);
    }

    cout << rmq.query(0,114514) << '\n';
}

int main(int argc, char const *argv[]) {
    //solve0();
    solve1();
    return 0;
}
