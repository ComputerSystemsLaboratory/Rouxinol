#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define rrep(i, st, n) for (int i = st; i < n; ++i)
using pii = pair<int, int>;
const int mod = 1e9 + 7;
int dy[] = {0, 0, -1, 1, -1, 1, -1, 1};
int dx[] = {1, -1, 0, 0, -1, 1, 1, -1};
#define ceil(a, b) a / b + !!(a % b)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
int main() {
    cin.tie(0); ios::sync_with_stdio(false);
    int table[3001] = {0};
    int n; cin >> n;
    int a[n]; rep(i, n) cin >> a[i];
    rep(i, n) {
        for (int j = 2000; j >= 0; --j) {
            if (j == 0 || table[j]) table[j + a[i]] = 1;
        }
    }
    cin >> n;
    rep(i, n) {
        int b; cin >> b;
        if (table[b]) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}

