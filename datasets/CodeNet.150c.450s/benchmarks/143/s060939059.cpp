#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
#define rep(i, n) REP(i, 0, n)
#define rrep(i, n) for (int i = (int)(n-1); i >= 0; i--)
#define sz(x) int(x.size())
#define bitsz(x) int(__builtin_popcount(x))
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb(x) push_back(x)
#define INF 1e9
#define LINF 1e18
#define mod 1000000007
template<class T> inline bool chmax(T &a, const T &b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T &a, const T &b) { if (a > b) { a = b; return 1; } return 0; }
template < typename T > inline string toString( const T &a ) { ostringstream oss; oss << a; return oss.str(); };
typedef long long ll;
typedef pair<int, int> P;
typedef pair<ll, ll> LP;
const int di[4] = {1,0,-1,0};
const int dj[4] = {0,1,0,-1};


int main() {
    int n; cin >> n;
    //vector<ll> a(n);
    vector<ll> num(100005,0); //バケットで管理
    ll ans = 0;
    rep(i,n) {
        ll a;
        cin >> a;
        num[a]++;
        ans += a;
    }
    int q; cin >> q;
    vector<ll> b(q), c(q);
    rep(i,q) cin >> b[i] >> c[i];

    rep(i,q) {
        ans += num[b[i]]*(c[i]-b[i]);
        num[c[i]] += num[b[i]];
        num[b[i]] = 0;
        cout << ans << endl;
    }

    // sort(all(a));
    
    // ll ans = 0;
    // rep(i,n) ans += a[i];

    // rep(i,q) {
    //     int num = upper_bound(all(a),b[i])-lower_bound(all(a),b[i]);
    //     ans += (c[i]-b[i])*num;
    //     cout << ans << endl;
    //     //値の置き換えをどうするか？O(logN)でいけるやり方あるか？
    // }

}