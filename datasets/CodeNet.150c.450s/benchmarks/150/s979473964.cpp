//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<n; ++i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
using namespace std;
using ll = int64_t;
using ld = long double;
using P = pair<int, int>;
using vs = vector<string>;
using vi = vector<int>;
using vvi = vector<vi>;
const int INF = 100010001;
const ll LINF = (ll)INF*INF*10;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vi a(n);
    rep(i, n) {
        cin >> a[i];
    }

    vi b(n);
    int c[10001];
    auto countingSort = [&](int k) {
        for(int i = 0; i <= k; ++i) {
            c[i] = 0;
        }
        for(int j = 1; j <= n; ++j) {
            c[a[j-1]]++;
        }
        for(int i = 1; i <= k; ++i) {
            c[i] = c[i] + c[i-1];
        }
        for(int j = n; j > 0; j--) {
            b[c[a[j-1]]-1] = a[j-1];
            c[a[j-1]]--;
        }
    };
    countingSort(10000);
    rep(i, n) {
        cout << b[i] << (i == n-1?'\n':' ');
    }
}
