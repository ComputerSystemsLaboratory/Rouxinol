#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <iostream>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <vector>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double LD;
using namespace std;
const int INF = 2147483647;
const int INF2 = 0x3f3f3f3f;
const ll INF64 = 3e18;
const double INFD = 1e30;
const double EPS = 1e-9;
const double PI = acos(-1);
const int MOD = 1e9 + 7;
template <typename T>
inline T read() {
    T X = 0, w = 0;
    char ch = 0;
    while (!isdigit(ch)) {
        w |= ch == '-';
        ch = getchar();
    }
    while (isdigit(ch)) X = (X << 3) + (X << 1) + (ch ^ 48), ch = getchar();
    return w ? -X : X;
}
const int MAXN = 205;
int n, m, k;
int dr[4] = {1, 0, -1, 0};
int dc[4] = {0, 1, 0, -1};
int dr2[8] = {1, 1, 1, -1, -1, -1, 0, 0};
int dc2[8] = {1, 0, -1, 1, 0, -1, 1, -1};
int CASE = 1;
ll arr[MAXN];
char S[MAXN];
struct basis {
    ll a[70];
    void clear() { memset(a, 0, sizeof(a)); }
    bool add(ll x) {
        for (ll i = 63; i >= 0; i--) {
            if ((x >> i) & 1) {
                if (!a[i]) {
                    a[i] = x;
                    return true;
                }
                x ^= a[i];
            }
        }
        return false;
    }
};
basis dp[MAXN];
int fastExp(ll x, ll p, int mod) {
    ll ans = 1;
    while (p) {
        if (p & 1) ans = ans * x % mod;
        x = x * x % mod;
        p >>= 1;
    }
    return ans;
}
void solve() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%lld", &arr[i]);
    scanf("%s", S);
    memset(dp, 0, sizeof(dp));
    for (int i = n - 1; i >= 0; i--) {
        memcpy(&dp[i], &dp[i + 1], sizeof(basis));
        if (S[i] == '0') {
            dp[i].add(arr[i]);
        } else {
            if (dp[i].add(arr[i])) {
                printf("%d\n", 1);
                return;
            }
        }
    }
    bool flag = false;
    for (int i = 0; i < 64; i++) {
        if (dp[0].a[i]) {
            flag = true;
            break;
        }
    }
    printf("%d\n", !flag);
}
int main() {
#ifdef LOCALLL
    freopen("in", "r", stdin);
    freopen("out", "w", stdout);
#endif
    int T = read<int>();
    while (T--) {
        solve();
    }
    return 0;
}