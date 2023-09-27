#include <bits/stdc++.h>

// isDebug?
#ifndef ONLINE_JUDGE
#define _DEBUG
#endif

// Function Macros:
#define rep(i, n) for(int(i) = 0; (i) < (n); (i)++)
#define all(v) (v).begin(), (v).end()
#define setpre(n) cout << fixed << setprecision(n)

// -* https://xn--kst.jp/blog/2019/08/29/cpp-comp/ *- Thx :)
// debug methods
// usage: debug(x,y);
#define CHOOSE(a) CHOOSE2 a
#define CHOOSE2(a0, a1, a2, a3, a4, x, ...) x
#define debug_1(x1) cout << #x1 << ": " << x1 << endl
#define debug_2(x1, x2) cout << #x1 << ": " << x1 << ", " #x2 << ": " << x2 << endl
#define debug_3(x1, x2, x3) cout << #x1 << ": " << x1 << ", " #x2 << ": " << x2 << ", " #x3 << ": " << x3 << endl
#define debug_4(x1, x2, x3, x4) cout << #x1 << ": " << x1 << ", " #x2 << ": " << x2 << ", " #x3 << ": " << x3 << ", " #x4 << ": " << x4 << endl
#define debug_5(x1, x2, x3, x4, x5) cout << #x1 << ": " << x1 << ", " #x2 << ": " << x2 << ", " #x3 << ": " << x3 << ", " #x4 << ": " << x4 << ", " #x5 << ": " << x5 << endl
#ifdef _DEBUG
#define debug(...)                                                        \
    cout << __FILE__ << ": " << __LINE__ << ": " << __func__ << " -> ";   \
    CHOOSE((__VA_ARGS__, debug_5, debug_4, debug_3, debug_2, debug_1, ~)) \
    (__VA_ARGS__)
#else
#define debug(...)
#endif

// namespace / type / class / struct - alias, def:
using namespace std;

using ll = long long;
using ull = unsigned long long;

// Constants:
const int INF = (1ll << 30) - 1;  // approx 1.07e9
const ll INFLL = 1ll << 60;       // approx 1.15e18
const int MOD = 1e9 + 7;          // 998244353
const long double EPS = 1.0e-14;
const int FACN = 510000;

// Global Variables:
// ll fac[FACN], finv[FACN], inv[FACN];

// Prototype Declarations:
int gcd(int, int);
int lcm(int, int);
template <class T>
inline bool chmin(T&, T);
template <class T>
inline bool chmax(T&, T);

// ================ Main Loop ================
int main() {
    int d;
    cin >> d;
    ll tols = 0;
    vector<int> c(26), lastc(26);
    rep(i, 26) {
        cin >> c[i];
    }
    vector<int> u(26);
    vector<vector<int>> s(d);
    rep(i, d) {
        rep(j, 26) {
            cin >> u[j];
        }
        s[i] = u;
    }
    vector<int> t(d);
    rep(i, d) {
        cin >> t[i];
        t[i]--;
    }

    rep(i, d) {
        lastc[t[i]] = i + 1;
        tols += s[i][t[i]];
        rep(j, 26) {
            if(j == t[i]) continue;
            tols -= c[j] * (i - lastc[j] + 1);
        }
        cout << tols << endl;
    }
    return 0;
}
// ===========================================

// Functions:
// 最大公約数 O(log(min(a, b)))
int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}
// 最小公倍数 O(log(min(a, b)))
int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

template <class T>
inline bool chmin(T& a, T b) {
    if(a > b) {
        a = b;
        return true;
    }
    return false;
}

template <class T>
inline bool chmax(T& a, T b) {
    if(a < b) {
        a = b;
        return true;
    }
    return false;
}
