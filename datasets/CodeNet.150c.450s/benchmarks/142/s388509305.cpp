#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vi>;

int main() {
    int n, k;
    cin >> n >> k;
    vi a(n);
    rep(i, n) cin >> a.at(i);
    for (int r = k; r < n; r++) {
        if(a[r - k] < a[r]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}