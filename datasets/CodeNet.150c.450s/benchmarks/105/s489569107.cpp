#include <iostream>
#include <array>
#include <algorithm>
#include <vector>
#include <bitset>
#include <set>
#include <unordered_set>
#include <cmath>
#include <complex>
#include <deque>
#include <iterator>
#include <numeric>
#include <map>
#include <unordered_map>
#include <queue>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <limits>
#include <iomanip>
#include <functional>
#include <cassert>
using namespace std;

using ll=long long;
template<class T> using V = vector<T>;
template<class T, class U> using P = pair<T, U>;
using vll = V<ll>;
using vvll = V<vll>;
#define rep(i, k, n) for (ll i=k; i<(ll)n; ++i)
#define REP(i, n) rep(i, 0, n)
#define ALL(v) v.begin(),v.end()
template < class T > inline bool chmax(T& a, T b) {if (a < b) { a=b; return true; } return false; }
template < class T > inline bool chmin(T& a, T b) {if (a > b) { a=b; return true; } return false; }
#define DEBUG_VLL(vec) REP(sz, vec.size()) std::cerr<<vec[sz]<<(sz==vec.size()-1?'\n':' ');

const long long MOD = 1000000007;
const long long HIGHINF = (long long)1e18;
const int INF = (int)1e9;

int t;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> t;
    while (t-->0) {
        int n; cin >> n;
        vll a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        string s; cin >> s;
        vll basis;
        int ans = -1;
        for (int i = n - 1; i >= 0; i--) {
            for (ll base: basis) chmin(a[i], a[i] ^ base);

            // もし a[i] があとで表される（a[i]==0）なら
            // どちらにせよ操作の必要なし？（打ち消せるので）
            // a[i] があとで表せられない（a[i]!=0）なら
            // 1 なら勝ち（0 に出来ないので）
            // 0 なら基底に加えてもっと前（<i）を見る
            if (a[i] != 0) {
                if (s[i] == '1') {
                    ans = 1;
                    break;
                } else basis.emplace_back(a[i]);
            }
        }
        if (ans == -1) ans = 0;
        cout << ans << '\n';
    }
    return 0;
}
