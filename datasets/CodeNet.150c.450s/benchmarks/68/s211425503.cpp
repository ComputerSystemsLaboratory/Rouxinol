#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F first
#define S second
#define pii pair<int, int>
#define eb emplace_back
#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; ++i)
#define rep3(i, l, n) for (int i = l; i < n; ++i)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define out(a) cout << a << endl
#define SZ(v) (int)v.size()
#define inf (int)(1e9+7)


int main() {
    int n;
    while (cin >> n && n) {
        int a[n]; rep(i, n) cin >> a[i];
        sort(a, a + n);
        int ans = inf;
        rep3(i, 1, n) {
            chmin(ans, a[i] - a[i - 1]);
        }
        out(ans);
    }
}

