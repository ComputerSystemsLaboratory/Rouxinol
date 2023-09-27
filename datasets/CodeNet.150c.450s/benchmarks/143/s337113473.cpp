#include <bits/stdc++.h>
using namespace std;

#pragma region Macros
using ll = long long;
#define int ll
using pii = pair<int, int>;
using tiii = tuple<int, int, int>;
template<class T = ll> using V = vector<T>;
template<class T = ll> using VV = V<V<T>>;
#define IOS\
    ios::sync_with_stdio(false);\
    cin.tie(0);\
    cout.tie(0);
#define FOR(i,l,r) for(ll i=(l);i<(r);++i)
#define REP(i,n) FOR(i,0,n)
#define REPS(i,n) FOR(i,1,n+1)
#define RFOR(i,l,r) for(ll i=(l);i>=(r);--i)
#define RREP(i,n) RFOR(i,n-1,0)
#define RREPS(i,n) RFOR(i,n,1)
#define mp make_pair
#define mt make_tuple
#define pb push_back
#define eb emplace_back
#define all(x) (x).begin(),(x).end()
#define SORT(name) sort(name.begin(), name.end())
#define RSORT(name)\
    SORT(name);\
    reverse(all(name));
#define ZERO(p) memset(p, 0, sizeof(p))
#define MINUS(p) memset(p, -1, sizeof(p))
inline void Yes(bool b = true) {cout << (b ? "Yes" : "No") << '\n';}
inline void YES(bool b = true) {cout << (b ? "YES" : "NO") << '\n';}
template <class T> inline void print(T x){ cout << x << '\n';}
template<typename T1,typename T2> inline void chmin(T1 &a, T2 b){ if(a > b) a = b; }
template<typename T1,typename T2> inline void chmax(T1 &a, T2 b){ if(a < b) a = b; }

const ll LLINF = (1LL<<60);
const int INF = (1LL<<30);
const double DINF = std::numeric_limits<double>::infinity();
#pragma endregion

#if 1
#  define DBG(fmt, ...) printf(fmt, ##__VA_ARGS__)
#else
#  define DBG(fmt, ...)
#endif

const int MOD = 1000000007;
const int MAX_N = 100010;

signed main() {
    IOS;

    int N, Q;
    V<> A;
    cin >> N;
    A.resize(N);
    map<int, int> cnt;
    int sum = 0;
    REP(i, N) {
        cin >> A[i];
        cnt[A[i]]++;
        sum += A[i];
    }
    cin >> Q;
    REP(i, Q) {
        int b, c;
        cin >> b >> c;
        int sub = c - b;
        sum += sub * cnt[b];
        print(sum);
        cnt[c] += cnt[b];
        cnt[b] = 0;
    }

    return 0;
}
