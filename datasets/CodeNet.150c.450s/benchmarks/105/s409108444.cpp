#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define fi first
typedef pair<ll, ll> P;
using VP = vector<P>;
using VVP = vector<VP>;
using VI = vector<ll>;
using VVI = vector<VI>;
using VVVI = vector<VVI>;
const int inf = 1e9 + 7;
const ll INF = 1LL << 61;
const ll mod = 1e9 + 7;

template <class T> inline bool chmax(T &a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

template <class T> inline bool chmin(T &a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

void solve() {
    int n;
    int i, j;
    cin >> n;
    ll a[n];
    for (i = 0; i < n; i++) cin >> a[i];
    string s;
    cin >> s;
    VI v(63, -1);
    for (i = n - 1; i >= 0; i--) {
        if (s[i] == '0') {
            for (j = 62; j >= 0; j--) {
                if ((a[i] >> j) & 1) {
                    if (v[j] == -1) {
                        v[j] = a[i];
                        break;
                    } else
                        a[i] ^= v[j];
                }
            }
        } else {
            for (j = 62; j >= 0; j--) {
                if ((a[i] >> j) & 1) {
                    if (v[j] != -1) a[i] ^= v[j];
                }
            }
            if (a[i] != 0) {
                cout << 1 << endl;
                return;
            }
        }
    }
    cout << 0 << endl;
}

int main() {
    int i, j;
    int t;
    cin >> t;
    while (t--) solve();
}