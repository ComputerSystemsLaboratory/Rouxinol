#include <bits/stdc++.h>

using namespace std;


#ifdef zxc

#include <sys/resource.h>
#include "debug.h"
#include "profile.h"

#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#define profile(X) LOG_DURATION(X)
#else
#define debug(...) 42
#define profile(...) 42
#endif

using ll = int64_t;
using ld = long double;
const ld EPS = 1e-9;
//const ll MOD = 924844033;
const ld PI = 3.141592653589793;
const int maxn = 600001;
const ll MOD = 1e9 + 7;
using cd = complex<double>;

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

struct basis {
    ll pivot[60];
    bool empty = false;

    void add(ll val) {
        for (int i = 0; i < 60; ++i) {
            if (val & (1ll << i)) {
                val ^= (pivot[i]);
            }
        }
        for (int i = 0; i < 60; ++i) {
            if (val & (1ll << i)) {
                pivot[i] = val;
                for (int e = 0; e < 60; ++e) {
                    if (e == i) {
                        continue;
                    }
                    if (pivot[e] & (1ll << i)) {
                        pivot[e] ^= pivot[i];
                    }
                }
                break;
            }
        }
    }

    bool has(ll val) {
        for (int i = 0; i < 60; ++i) {
            if (val & (1ll << i)) {
                val ^= pivot[i];
            }
        }
        return val == 0;
    }
};

basis dp[201];

signed main() {
#ifdef zxc
    struct rlimit rl;
    const rlim_t kStackSize = 512L * 1024L * 1024L;
    assert(!getrlimit(RLIMIT_STACK, &rl));
    rl.rlim_cur = kStackSize;
    assert(!setrlimit(RLIMIT_STACK, &rl));
    freopen("../input.txt", "r", stdin);
//    freopen("../kolya_output.txt", "w", stdout);
#else
    //    mt19937 mt(std::chrono::high_resolution_clock::now().time_since_epoch().count());
    //            freopen("", "r", stdin);
    //        freopen("hack.out", "w", stdout);
#endif

    auto solve = [&](int _) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        string s;
        cin >> s;
        reverse(s.begin(), s.end());
        reverse(a.begin(), a.end());

        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '0') {
                dp[i + 1] = dp[i];
                dp[i + 1].add(a[i]);
            } else {
                dp[i + 1] = dp[i];
                if (!dp[i].has(a[i])) {
                    dp[i + 1].empty = true;
                }
            }
        }
        cout << (dp[n].empty ? 1 : 0) << "\n";
    };

    fast_io();
    cout.precision(9);
    cout << fixed;
    auto start = chrono::steady_clock::now();
    int t;
    cin >> t;

    for (int i = 1; i <= t; ++i) solve(i);
    auto end = chrono::steady_clock::now();

    debug("time", chrono::duration_cast<chrono::milliseconds>(end - start).count() / 1000.0);

}
