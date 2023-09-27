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

    auto partition = [&](int p, int r) {
        int x = a[r];
        int i = p-1;
        for(int j = p; j < r; ++j) {
            if(a[j] <= x) {
                swap(a[j], a[++i]);
            }
        }
        swap(a[++i], a[r]);
        return i;
    };

    int cc = partition(0, n-1);
    rep(i, n) {
        if(i == cc) {
            cout << '[' << a[i] << ']' << (i == n-1?'\n':' ');
        } else {
            cout << a[i] << (i == n-1?'\n':' ');
        }
    }
}
